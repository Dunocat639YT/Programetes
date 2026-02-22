#include <stdio.h>

int main(void) {

    char text[40];

    printf("Esciu alguna cosa: ");
    fgets(text, sizeof(text), stdin);


    return 0;
}