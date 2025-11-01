#include <iostream>
using namespace std;


int main(){

    string resposta;

    string opcions[3] = {"pedra", "paper", "tisores"};

    cout << "************* Pedra, paper i tisores! *************" << '\n' << '\n';
    
    do{
        cout << "Quin és el teu moviment?" << '\n';
        cin >> resposta;
        
    } while(resposta != "pedra" && resposta != "paper" && resposta != "tisores");

    
    return 0;
}


string ordinador(){
    return 0;
}