#include <stdio.h>

    float calcular(char choice, float x, float y) {
        switch (choice)
        {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        
        default:
            return 1;
        }
    }


int main(void) {

    float x = 0, y = 0;
    char choice;


    printf("Benvigut a la calculador definitiva 3000!\n\n");

    printf("Esciu el primer numero: ");
    scanf("%f", &x);

    printf("\nAra el segon numero: ");
    scanf("%f", &y);

    printf("\n\nQuè vols operar? ('+', '-', '*', '/'): ");
    scanf("%c", &choice);

    float resultat = calcular(choice, x, y);

    printf("\nEl resultat és: %.2f", resultat);


    return 0;
}