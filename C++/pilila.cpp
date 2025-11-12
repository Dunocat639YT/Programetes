#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main(){

    int pilila;

    cout << "Diablos señorita... Quant et mesura la pilila? ";
    cin >> pilila;

    cout << "Ostia... espera que et faig una representació gràfica:" << '\n' << '\n';

    cout << "<";

    for (int i = 0; i < pilila; i++){
        cout << "=";
    }

    cout << "3" << '\n' << '\n' << "Voilà!";


    return 0;
}