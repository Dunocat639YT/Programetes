#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <cstdint>
#include <limits>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::size_t;
using std::uint64_t;
using namespace std::chrono;

class PasswordCracker {
private:
    string targetPassword;
    string charset;
    int maxLength;
    long long attempts;
    
public:
    PasswordCracker() : attempts(0) {dfasf
        // Conjunt de caràcters més comuns (per eficiència)
        charset = "abcdefghijklmnopqrstuvwxyz0123456789";
        maxLength = 8; // Límit per evitar temps excessius
    }
    
    void setPassword() {
        cout << "Introdueix la contrasenya a endevinar (màx " << maxLength << " caràcters): ";
        getline(cin, targetPassword);
        
        if (targetPassword.length() > maxLength) {
            cout << "Contrasenya massa llarga. Truncant a " << maxLength << " caràcters.\n";
            targetPassword = targetPassword.substr(0, maxLength);
        }
        
        cout << "Contrasenya establerta. Longitud: " << targetPassword.length() << " caràcters\n";
        cout << "Començant l'atac de força bruta...\n\n";
    }
    
    string generatePassword(uint64_t index, int length) {
        string password;
        password.reserve(length);
        uint64_t base = static_cast<uint64_t>(charset.length());

        for (int i = 0; i < length; ++i) {
            char c = charset[index % base];
            password.insert(password.begin(), c);
            index /= base;
        }

        return password;
    }
    
    bool bruteForce() {
        auto start = high_resolution_clock::now();
        
        // Prova primer contrasenyes comunes
        vector<string> commonPasswords = {
            "123456", "password", "123456789", "12345678", "12345",
            "qwerty", "abc123", "password123", "admin", "letmein"
        };
        
        cout << "Provant contrasenyes comunes...\n";
        for (const string& common : commonPasswords) {
            attempts++;
            if (common == targetPassword) {
                cout << "Contrasenya trobada amb diccionari comú: " << common << "\n";
                return true;
            }
        }
        
        cout << "Contrasenyes comunes fallides. Començant força bruta...\n";
        
        // Força bruta per longitud creixent (més eficient)
        for (int len = 1; len <= static_cast<int>(targetPassword.length()); len++) {
            cout << "Provant contrasenyes de longitud " << len << "...\n";
            
            // Compute power using integer arithmetic and check for overflow
            uint64_t maxCombinations = 1;
            uint64_t base = static_cast<uint64_t>(charset.length());
            bool overflow = false;
            for (int p = 0; p < len; ++p) {
                if (maxCombinations > std::numeric_limits<uint64_t>::max() / base) {
                    overflow = true;
                    break;
                }
                maxCombinations *= base;
            }

            if (overflow) {
                cout << "Nombre de combinacions massa gran per calcular; abortant aquesta longitud.\n";
                continue;
            }

            for (uint64_t i = 0; i < maxCombinations; ++i) {
                attempts++;
                string candidate = generatePassword(i, len);
                
                // Mostra progrés cada 10000 intents
                if (attempts % 10000 == 0) {
                    auto current = high_resolution_clock::now();
                    auto duration = duration_cast<milliseconds>(current - start);
                    cout << "Intents: " << attempts << " | Actual: " << candidate 
                         << " | Temps: " << duration.count() << "ms\n";
                }
                
                if (candidate == targetPassword) {
                    auto end = high_resolution_clock::now();
                    auto duration = duration_cast<milliseconds>(end - start);

                    cout << "\n=== CONTRASENYA TROBADA ===\n";
                    cout << "Contrasenya: " << candidate << "\n";
                    cout << "Intents totals: " << attempts << "\n";
                    cout << "Temps total: " << duration.count() << " ms\n";
                    if (duration.count() > 0)
                        cout << "Velocitat: " << (attempts * 1000.0) / duration.count() << " intents/segon\n";
                    else
                        cout << "Velocitat: N/A (temps massa curt)\n";

                    return true;
                }
            }
        }
        
        return false;
    }
    
    void showStatistics() {
        uint64_t totalCombinations = 0;
        uint64_t base = static_cast<uint64_t>(charset.length());
        for (int len = 1; len <= static_cast<int>(targetPassword.length()); ++len) {
            // prevent overflow
            uint64_t v = 1;
            bool overflow = false;
            for (int p = 0; p < len; ++p) {
                if (v > std::numeric_limits<uint64_t>::max() / base) { overflow = true; break; }
                v *= base;
            }
            if (overflow) {
                cout << "Combinacions totals: massa grans per calcular exactament.\n";
                totalCombinations = 0;
                break;
            }
            totalCombinations += v;
        }
        
        cout << "\n=== ESTADÍSTIQUES ===\n";
        cout << "Conjunt de caràcters: " << charset << "\n";
        cout << "Longitud del conjunt: " << charset.length() << "\n";
        cout << "Longitud de la contrasenya: " << targetPassword.length() << "\n";
        if (totalCombinations > 0)
            cout << "Combinacions totals possibles: " << totalCombinations << "\n";
        cout << "Temps estimat màxim (pitjor cas): ";
        
        // Estimació basada en velocitat típica
        double secondsMax = (totalCombinations > 0) ? (totalCombinations / 100000.0) : -1.0; // ~100k intents/seg
        if (secondsMax < 60) {
            cout << secondsMax << " segons\n";
        } else if (secondsMax < 3600) {
            cout << secondsMax / 60 << " minuts\n";
        } else {
            cout << secondsMax / 3600 << " hores\n";
        }
    }
};

int main() {
    cout << "=== ENDEVINADOR DE CONTRASENYES (EDUCATIU) ===\n";
    cout << "ADVERTÈNCIA: Només per fins educatius!\n";
    cout << "Aquest programa demostra la importància d'usar contrasenyes segures.\n\n";
    
    PasswordCracker cracker;
    
    cracker.setPassword();
    cracker.showStatistics();
    
    cout << "\nVols continuar amb l'atac? (s/n): ";
    char choice;
    cin >> choice;
    
    if (choice == 's' || choice == 'S') {
        cout << "\nComençant...\n";
        
        bool found = cracker.bruteForce();
        
        if (!found) {
            cout << "No s'ha pogut trobar la contrasenya dins dels límits establerts.\n";
        }
    } else {
        cout << "Operació cancel·lada.\n";
    }
    
    cout << "\nRecorda: Usa contrasenyes llargues amb majúscules, minúscules, números i símbols!\n";
    
    return 0;
}