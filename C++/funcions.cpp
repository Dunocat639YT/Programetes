#include <iostream>
#include <cmath>

double x;

double P(double x){
    return (5*(pow(x, 3))) - (2*(pow(x, 2))) + (x/2) - (2/5);
}

double Q(double x){
    return pow(x, 2) - x + 1;
}

int main(){

    std::cout << P(3) + Q(4) << '\n';

    return 0;


}