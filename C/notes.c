#include <stdio.h>

const char* final(float mitja) {
    if (mitja >= 9) {
        return "Excelent";
    }
    else if (mitja >= 7) {
        return "Notable";
    }
    else if (mitja >= 5) {
        return "Satisfactori";
    }
    else {
        return "Suspès";
    }
    
}

int main() {

    char assignatura[20];
    int n_examens;
    float nota, mitja, suma;

    printf("*********** Benvingut al calculador de notes 3000! ***********\n");

    printf("Quina assignatura és? ");
    fgets(assignatura, sizeof(assignatura), stdin);

    printf("Quants examens has fet? ");
    scanf("%d", &n_examens);

    for (int i = 1; i < (n_examens + 1); i++) {
        printf("Nota del examen %d: ", i);
        scanf("&d", nota);
        suma += nota;
    }




    return 0;
}