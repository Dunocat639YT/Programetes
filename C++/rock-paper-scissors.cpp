#include <iostream>
using namespace std;


int main(){
    string computer;
    string player;
    bool game = true;
    string resposta;

    string opcions[3] = {"pedra", "paper", "tisores"};

    cout << "************* Pedra, paper i tisores! *************" << '\n';
    cout << "Quin és el teu pròxim moviment? ";
    cin >> resposta;
    if (resposta != "pedra" && != "paper" && != "tisores"){
        cout << resposta << " no és una opció vàlida." << '\n';
        cout << "Torna-ho a intentar: ";
    }

    
    return 0;
}


int ordinador(){
    return 0;
}