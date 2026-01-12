#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <atomic>
#include <chrono>
#include <mutex>
#include <cstring>
#include <iomanip>
#include <cmath>

// Configuració
// Charset estàndard (ASCII imprimible: espai fins ~)
static const std::string CHARSET = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;':\",./<>? ";
static const uint64_t BATCH_SIZE = 8192; // Actualitzar stats cada X intents (evita bloqueig de bus)

using namespace std;

// Variables globals compartides
atomic<bool> found(false);
string final_password;
atomic<uint64_t> total_attempts(0);
mutex io_mutex;

// Funció matemàtica per calcular combinacions (suport 128 bits)
unsigned __int128 power(uint64_t base, int exp) {
    unsigned __int128 res = 1;
    unsigned __int128 b = base;
    for (int i = 0; i < exp; ++i) res *= b;
    return res;
}

// Converteix un índex numèric a la cadena corresponent (Base N)
void index_to_string(unsigned __int128 index, int len, char* buffer) {
    uint64_t n_chars = CHARSET.size();
    for (int i = len - 1; i >= 0; --i) {
        buffer[i] = CHARSET[(uint64_t)(index % n_chars)];
        index /= n_chars;
    }
}

// Worker thread
void crack_thread(int len, unsigned __int128 start_idx, unsigned __int128 end_idx, const string& target) {
    // Buffer local a la pila (molt ràpid)
    char current[20]; // Mida suficient per 16 + marge
    uint8_t indices[20]; // Índexs numèrics per evitar lookups inversos
    int n_chars = CHARSET.size();
    
    // Inicialització de l'estat inicial
    unsigned __int128 temp = start_idx;
    for (int i = len - 1; i >= 0; --i) {
        int val = (int)(temp % n_chars);
        indices[i] = val;
        current[i] = CHARSET[val];
        temp /= n_chars;
    }
    current[len] = '\0'; // Null terminator per si es vol imprimir debugging

    uint64_t local_counter = 0;
    unsigned __int128 loop_count = end_idx - start_idx;

    // Bucle calent (HOT LOOP)
    for (unsigned __int128 i = 0; i < loop_count; ++i) {
        // 1. Comprovació ràpida (optimisme: la majoria fallen al primer caràcter diferent)
        // Utilitzem comparació manual o memcmp (memcmp sol estar optimitzat per hardware)
        bool match = true;
        for (int k = 0; k < len; ++k) {
            if (current[k] != target[k]) {
                match = false;
                break;
            }
        }

        if (match) {
            found = true;
            lock_guard<mutex> lock(io_mutex);
            final_password = string(current, len);
            return;
        }

        // 2. Comprovació de parada global (per no cremar CPU si ja s'ha trobat)
        if (found.load(memory_order_relaxed)) return;

        // 3. Batch d'estadístiques
        local_counter++;
        if (local_counter >= BATCH_SIZE) {
            total_attempts += local_counter;
            local_counter = 0;
        }

        // 4. Incrementar "Odòmetre" (més ràpid que divisions)
        // Incrementem l'últim caràcter i gestionem l'acarrament (carry)
        int pos = len - 1;
        while (pos >= 0) {
            indices[pos]++;
            if (indices[pos] < n_chars) {
                current[pos] = CHARSET[indices[pos]];
                break; // No hi ha acarrament, sortim
            } else {
                indices[pos] = 0;
                current[pos] = CHARSET[0];
                pos--; // Acarrament al següent dígit
            }
        }
    }
    total_attempts += local_counter;
}

int main() {
    // Optimització E/S
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string target;
    cout << "=== CRACKER EDUCATIU C++ ===" << endl;
    cout << "Introdueix la contrasenya (max 16 chars): ";
    if (!getline(cin, target) || target.empty()) return 0;

    // Truncament
    if (target.length() > 16) {
        target = target.substr(0, 16);
        cout << "[Info] Truncada a: " << target << endl;
    }

    int len = target.length();
    uint64_t charset_len = CHARSET.size();
    unsigned __int128 total_combs = power(charset_len, len);

    // Informe inicial
    cout << "\n--- INFORME ---" << endl;
    cout << "Longitud: " << len << " caràcters" << endl;
    cout << "Charset: " << charset_len << " símbols" << endl;
    
    // Hack lleig per imprimir __int128
    string s_combs;
    unsigned __int128 temp = total_combs;
    if (temp == 0) s_combs = "0";
    else {
        while (temp > 0) {
            s_combs.insert(0, 1, (char)('0' + (temp % 10)));
            temp /= 10;
        }
    }
    cout << "Combinacions possibles: " << s_combs << endl;

    unsigned int num_threads = thread::hardware_concurrency();
    if (num_threads == 0) num_threads = 4;
    cout << "Fils (Threads): " << num_threads << endl;
    cout << "Calculant..." << endl;

    auto start_time = chrono::high_resolution_clock::now();

    // Dividir la feina
    vector<thread> threads;
    unsigned __int128 items_per_thread = total_combs / num_threads;
    
    // Fil de reportatge (opcional, per veure progrés)
    thread reporter([&]() {
        while (!found) {
            this_thread::sleep_for(chrono::milliseconds(500));
            uint64_t att = total_attempts.load();
            auto now = chrono::high_resolution_clock::now();
            double elap = chrono::duration<double>(now - start_time).count();
            if (found) break;
            
            // Output simple per no bloquejar consola
            // cout << "\rVelocitat: " << fixed << setprecision(2) << (att / elap / 1000000.0) << " M/s" << flush;
        }
    });

    // Llançar fils workers
    for (unsigned int i = 0; i < num_threads; ++i) {
        unsigned __int128 start = items_per_thread * i;
        unsigned __int128 end = (i == num_threads - 1) ? total_combs : start + items_per_thread;
        threads.emplace_back(crack_thread, len, start, end, target);
    }

    // Esperar
    for (auto& t : threads) t.join();
    found = true; // Per aturar el reporter si els workers acaben
    reporter.join();

    auto end_time = chrono::high_resolution_clock::now();
    double elapsed_s = chrono::duration<double>(end_time - start_time).count();

    cout << "\n\n--- RESULTAT ---" << endl;
    if (!final_password.empty()) {
        cout << "SUCCESS! Contrasenya: " << final_password << endl;
    } else {
        cout << "FALLIDA! (No s'hauria de veure mai si la lògica és correcta)" << endl;
    }
    
    cout << "Temps: " << elapsed_s << " segons" << endl;
    cout << "Velocitat mitjana: " << (total_attempts / elapsed_s / 1000000.0) << " Milions intents/s" << endl;

    return 0;
}