#include <iostream>

int main(){

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    //int grade = 20;
    //grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    //int number = 8;
    //number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;
    //hungry ? std::cout << "You are hungry" : std::cout << "You are full!";
    // or
    std::cout << (hungry ? "You are hungry" : "Your are full");
    // hungry ? ---> hungry == true ?


    return 0;
}