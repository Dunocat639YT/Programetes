// cracker_fast.cpp
// Versió optimitzada: sense al·locacions dins del bucle, odòmetre base-N,
// multi-threading i reporting mínim.
// Compilar amb: g++ -O3 -march=native -flto -std=c++17 -pthread -o cracker_fast cracker_fast.cpp

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <limits>
#include <cstring>
#include <mutex>

using namespace std;
using namespace std::chrono;

static constexpr int DEFAULT_MAX_LEN = 8;
static constexpr uint64_t PROGRESS_INTERVAL_ATTEMPTS = 100000; // mostrar cada X intents globals

// Safe pow with overflow detection
uint64_t pow_u64_checked(uint64_t base, int exp, bool &overflow) {
    uint64_t v = 1;
    overflow = false;
    for (int i = 0; i < exp; ++i) {
        if (v > numeric_limits<uint64_t>::max() / base) { overflow = true; return 0; }
        v *= base;
    }
    return v;
}

// Convert index to candidate (base-N) into buf[len], MSB at buf[0]
void index_to_candidate(uint64_t idx, int len, const string &charset, char *buf) {
    uint64_t base = charset.size();
    for (int i = len - 1; i >= 0; --i) {
        buf[i] = charset[idx % base];
        idx /= base;
    }
}

// Increment candidate odometer-style using charset and an index map (fast)
inline bool odometer_increment(char *buf, int len, const string &charset, const vector<int> &imap) {
    int base = (int)charset.size();
    for (int pos = len - 1; pos >= 0; --pos) {
        unsigned char cur = static_cast<unsigned char>(buf[pos]);
        int idx = imap[cur];
        if (idx < 0) return false; // impossible: char not in charset
        if (idx + 1 < base) {
            buf[pos] = charset[idx + 1];
            return true;
        } else {
            buf[pos] = charset[0];
            // carry to next position
        }
    }
    return false; // overflowed (we exceeded the max combination)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "=== ENDEVINADOR DE CONTRASENYES (VERSIÓ OPTIMITZADA) ===\n";
    cout << "ADVERTÈNCIA: Només per fins educatius i demostratius.\n\n";

    string target;
    cout << "Introdueix la contrasenya a endevinar (màx " << DEFAULT_MAX_LEN << " caràcters): ";
    getline(cin, target);
    if (target.length() > DEFAULT_MAX_LEN) {
        cout << "Contrasenya massa llarga. Truncant a " << DEFAULT_MAX_LEN << " caràcters.\n";
        target = target.substr(0, DEFAULT_MAX_LEN);
    }
    int targetLen = (int)target.length();
    cout << "Contrasenya establerta. Longitud: " << targetLen << " caràcters\n\n";

    // Charset: el mateix que tenies (pots ampliar-lo)
    const string charset = "abcdefghijklmnopqrstuvwxyz0123456789";
    const int base = (int)charset.size();

    // Mapa ràpid de char->index per a l'odòmetre
    vector<int> indexMap(256, -1);
    for (int i = 0; i < base; ++i) indexMap[(unsigned char)charset[i]] = i;

    // Prova diccionari curt abans (moltes vegades això troba la contrasenya)
    vector<string> common = {"123456","password","123456789","12345678","12345","qwerty","abc123","password123","admin","letmein"};
    for (const auto &c : common) {
        if (c == target) {
            cout << "Contrasenya trobada al diccionari comú: " << c << "\n";
            return 0;
        }
    }

    cout << "Començant força bruta optimitzada...\n";

    // Variables d'estat compartit
    atomic<uint64_t> attempts{0};
    atomic<bool> found{false};
    atomic<uint64_t> foundAttempts{0};
    string foundPassword;
    mutex printMutex;

    auto tStart = high_resolution_clock::now();

    unsigned int hwThreads = thread::hardware_concurrency();
    if (hwThreads == 0) hwThreads = 2;
    cout << "Usant threads: " << hwThreads << "\n";

    // Progress reporter thread (imprimeix cada PROGRESS_INTERVAL_ATTEMPTS intents globals)
    atomic<bool> stopReporter{false};
    thread reporter([&](){
        uint64_t last = 0;
        auto lastTime = high_resolution_clock::now();
        while (!stopReporter.load()) {
            this_thread::sleep_for(milliseconds(400));
            uint64_t cur = attempts.load();
            if (cur - last >= PROGRESS_INTERVAL_ATTEMPTS) {
                auto now = high_resolution_clock::now();
                auto dt = duration_cast<milliseconds>(now - lastTime).count();
                if (dt == 0) dt = 1;
                double rate = (double)(cur - last) * 1000.0 / dt;
                {
                    lock_guard<mutex> lg(printMutex);
                    cout << "Intents totals: " << cur << " | Velocitat recent: " << (uint64_t)rate << " intents/s\n";
                }
                last = cur;
                lastTime = now;
            }
        }
    });

    // Per a cada longitud de 1..targetLen
    for (int len = 1; len <= targetLen && !found.load(); ++len) {
        // calcular combinacions
        bool overflow = false;
        uint64_t combinations = pow_u64_checked((uint64_t)base, len, overflow);
        if (overflow || combinations == 0) {
            lock_guard<mutex> lg(printMutex);
            cout << "Nombre de combinacions massa gran per la longitud " << len << ". Saltant-la.\n";
            continue;
        }

        {
            lock_guard<mutex> lg(printMutex);
            cout << "Provant longitud " << len << " (combinacions: " << combinations << ")\n";
        }

        // partition ranges per thread
        uint64_t perThread = combinations / hwThreads;
        uint64_t remainder = combinations % hwThreads;

        vector<thread> workers;
        workers.reserve(hwThreads);

        for (unsigned int t = 0; t < hwThreads; ++t) {
            uint64_t start = t * perThread + min<uint64_t>(t, remainder);
            uint64_t extra = (t < remainder) ? 1 : 0;
            uint64_t end = start + perThread + extra;

            // worker lambda
            workers.emplace_back([&, start, end, len]() {
                // local buffer per thread (stack)
                vector<char> buf(len + 1);
                buf[len] = '\0';

                // initialize candidate at 'start'
                if (start < end) {
                    index_to_candidate(start, len, charset, buf.data());
                } else {
                    return; // no work
                }

                // iterate range
                for (uint64_t idx = start; idx < end && !found.load(std::memory_order_relaxed); ++idx) {
                    // comparar: si len == targetLen, podem comparar directament la memòria
                    if (len == targetLen) {
                        if (memcmp(buf.data(), target.data(), len) == 0) {
                            // found
                            if (!found.exchange(true)) {
                                foundPassword.assign(buf.data(), len);
                                foundAttempts.store(attempts.fetch_add(1) + 1);
                            }
                            return;
                        }
                    } else {
                        // si len != targetLen, impossible que sigui la contrasenya (saltem comparació)
                    }

                    // compta l'intent
                    attempts.fetch_add(1, std::memory_order_relaxed);

                    // increment odòmetre per al següent (si encara hem d'avançar)
                    if (idx + 1 < end) {
                        // si odometer_increment retorna false, hem sobrepassat les combinacions teòriques (no hauria de passar)
                        bool ok = odometer_increment(buf.data(), len, charset, indexMap);
                        if (!ok) return;
                    }
                }
            });
        }

        // esperar workers
        for (auto &w : workers) if (w.joinable()) w.join();

        if (found.load()) break;
    }

    // finalitzar reporter
    stopReporter.store(true);
    if (reporter.joinable()) reporter.join();

    auto tEnd = high_resolution_clock::now();
    auto ms = duration_cast<milliseconds>(tEnd - tStart).count();
    uint64_t totalAttempts = attempts.load();

    cout << "\n=== RESULTAT ===\n";
    if (found.load()) {
        cout << "Contrasenya trobada: " << foundPassword << "\n";
        cout << "Intents fins a trovar-la: " << foundAttempts.load() << "\n";
    } else {
        cout << "No trobada dins dels límits (longitud màxima considerada: " << targetLen << ").\n";
        cout << "Intents totals: " << totalAttempts << "\n";
    }

    cout << "Temps total: " << ms << " ms\n";
    if (ms > 0) cout << "Velocitat mitjana: " << (uint64_t)((double)totalAttempts * 1000.0 / ms) << " intents/s\n";

    cout << "\nRecorda: si vols arribar a velocitats reals de bruteforce, la GPU o FPGA són el camí.\n";
    return 0;
}
