#include <iostream>

int main(){

    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // char (single character)
    char grade = 'A';
    char initial = 'F';
    char currency = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Francesc";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";


    std::cout << price << "\n";
    std::cout << initial << "\n";
    std::cout << name << "\n";
    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old" << "\n";

    return 0;
}