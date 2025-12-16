#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rock-paper-scissors.h"


using namespace std;

int main(){

    string jugador;

    while (true){
        
        cout << "************* Pedra, paper i tisores! *************" << '\n' << '\n';
        
        do{
            cout << "Quin és el teu moviment? ";
            cin >> jugador;
            cout << '\n';
            
        } while(jugador != "pedra" && jugador != "paper" && jugador != "tisores");

        
        int ordinador = maquina();

        comprovar(ordinador, jugador);

        cout << "Enter per a continuar... ";
        cin.ignore();int comprovar(int a, int b);
        cin.get();

        cout << '\n' << '\n' << '\n';
    }

    
    return 0;
}


int maquina(){
    srand(time(0));
    int ordinador = 1 + rand() % 3;

    return ordinador;
}

void comprovar(int ordinador, string jugador){

    switch (ordinador)
    {
        case 1:

            cout << "La màquina ha escollit pedra..." << '\n' << '\n';

            if (jugador == "pedra"){
                cout << "Empat!" << '\n' << '\n' << '\n';
                break;
            }
            else if (jugador == "paper"){
                cout << "Has guanyat!" << '\n' << '\n' << '\n';
                break;
            }
            else{
                cout << "Has perdut!" << '\n' << '\n' << '\n';
                break;
            }

        case 2:

            cout << "La màquina ha escollit paper..." << '\n' << '\n';


            if (jugador == "pedra"){
                cout << "Has perdut!" << '\n' << '\n' << '\n';
                break;
            }
            else if (jugador == "paper"){
                cout << "Empat!" << '\n' << '\n' << '\n';
                break;
            }
            else{
                cout << "Has guanyat!" << '\n' << '\n' << '\n';
                break;
            }

        case 3:

            cout << "La màquina ha escollit tisores..." << '\n' << '\n';


            if (jugador == "pedra"){
                cout << "Has guanyat!" << '\n' << '\n' << '\n';
                break;
            }
            else if (jugador == "paper"){
                cout << "Has perdut!!" << '\n' << '\n' << '\n';
                break;
            }
            else{
                cout << "Empat!" << '\n' << '\n' << '\n';
                break;
            }
    }
    
}