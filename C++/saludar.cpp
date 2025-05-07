#include <iostream>

using namespace std;

int main(){

    int edat;

    cout << "Quants anys tens? ";
    cin >> edat;
    cout << "Tens " << edat << " anys!";
    if (edat > 18){
        cout << "Ets major d'edat.";
    } else {
        cout << "Fora d'aquí! Ets massa petitó!";
    }



    return 0;
}