#include <iostream>
#include <string>

int main(){
    // do while loop = do some block of code first,
    //                 then repeat again if condition is true

    int number;

    do{
        std::cout << "enter a positive #: ";
        std::cin >> number;
    }while(number < 0);



    return 0;
}