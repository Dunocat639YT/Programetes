#include <iostream>

int main(){

    // && (and) = check if two conditions are true
    // || (or)  = check if at least onte of two conditiona is true
    // !  (not) = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!\n";
    }
    else{
        std::cout << "The temperature is good!\n";
    }

    if(!sunny){
        std::cout << "It's cloudy outside!\n";
    }
    else{
        std::cout << "It's sunny outside!\n";
    }


    return 0;
}