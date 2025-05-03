#include <iostream>

int main(){

    // arithmetic operators = return the result of a specific arithemtic operation (+ - * /).

    int students = 20;

    // students = students + 1;
    // students += 1;
    // students ++;

    // students = students -1;
    // students -= 1;
    // students --;

    // students = students * 2;
    // students *= 2

    // students = students / 3;
    // students /= 3;

    int remainder = students % 3;

    std::cout << remainder << "\n";
    
    std::cout << students << "\n";


    // parenthesis
    // multiplication & division
    // addition & substraction

    students = 6 - (5 + 4) * 3 / 2;

    std::cout << students << "\n";

    return 0;
}