#include <iostream>

int main(){

    int mode;
    double C, F;

    std::cout << "************** Conversor de graus! **************" << '\n' << '\n';
    std::cout << "Escull si vols passar de ºC a ºF (1) o de ºF a ºC (2): ";
    std::cin >> mode;
    std::cout << '\n' << '\n';

    if (mode == 1){
        std::cout << "Així que de ºC a ºF, eh?" << '\n' << '\n' << "Introdueix el valor en ºC: ";
        std::cin >> C;
        std::cout << '\n';
        F = (C * (9/5)) + 32;
        std::cout << "El resultat és " << F << " ºF" << '\n' << '\n';
    }
    else if (mode == 2){
        std::cout << "Així que de ºF a ºC, eh?" << '\n' << '\n' << "Introdueix el valor en ºF: ";
        std::cin >> F;
        std::cout << '\n';
        C = (F - 32) * (5/9);
        std::cout << "El resultat és " << C << " ºC" << '\n' << '\n';
    }
    else{
        std::cout << "Imbècil."  << '\n';
    }


    return 0;
}