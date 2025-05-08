#include <iostream>

int main(){

    /* switch = alternative to using many "else if" statement
                compare one value against cases
    */

    int month;

    while (true){

        std::cout << "Enter the month (1-12): ";
        std::cin >> month;
    
        switch(month){
            case 1:
                std::cout << "It's January" << '\n' << '\n';
                break;
            case 2:
                std::cout << "It's February" << '\n' << '\n';
                break;
            case 3:
                std::cout << "It's March" << '\n' << '\n';
                break;
            case 4:
                std::cout << "It's April" << '\n' << '\n';
                break;
            case 5:
                std::cout << "It's May" << '\n' << '\n';
                break;
            case 6:
                std::cout << "It's June" << '\n' << '\n';
                break;
            case 7:
                std::cout << "It's July" << '\n' << '\n';
                break;
            case 8:
                std::cout << "It's August" << '\n' << '\n';
                break;
            case 9:
                std::cout << "It's September" << '\n' << '\n';
                break;
            case 10:
                std::cout << "It's October" << '\n' << '\n';
                break;
            case 11:
                std::cout << "It's November" << '\n' << '\n';
                break;
            case 12:
                std::cout << "It's December" << '\n' << '\n';
                break;
            default:
                std::cout << "Please enter only numbers (1-12)" << '\n' << '\n';
        }

    }


    return 0;
}