#include <stdio.h>

int main(){

    // variable = Reusable container for a value.
    //            Behaves as if it were the value it contains.

    int age = 25;
    int year = 2025;
    int quantity = 1;
    float gpa = 2.5;
    float price = 19.99;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);
    printf("Your gpa is %.1f\n", gpa);
    printf("The price is %.1f€", price);

    return 0;
}