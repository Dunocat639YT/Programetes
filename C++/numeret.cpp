#include <iostream>
#include <cstdlib>
#include <ctime>
#include "numeret.h"

int main(){

    srand(time(0));
    int numeret = rand() % 100 + 1;

    int num;

    std::cout << "Adivina el número del 1 al 100, xiquet: ";
    std::cin >> num;

    do{
        comprovar(num, numeret);
    } while(comprovar(num, numeret) != 1);




    return 0;
}

int comprovar(int num, int numeret){
    if (num == numeret){
        std::cout << "Molt bé!";
        return 1;
    }
    else{
        std::cout << "Caca";
        return 0;
    }

}