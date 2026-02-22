#include <stdio.h>

// Per calcular la nota final
const char* final(float mitja) {
    if (mitja >= 9) {
        return "excelent";
    }
    else if (mitja >= 7) {
        return "notable";
    }
    else if (mitja >= 5) {
        return "satisfactori";
    }
    else {
        return "suspès";
    }
    
}

int main(void) {

    int n_examens = 0;
    float nota = 0, suma = 0;

    printf("*********** Benvingut al calculador de notes 3000! ***********\n");

    // Exàmens fets
    printf("Quants exàmens has fet? ");
    scanf("%d", &n_examens);

    // Preguntem cada nota i la guardem
    for (int i = 0; i < n_examens; i++) {
        printf("Nota del examen %d: ", i + 1);
        scanf("%f", &nota);
        suma += nota;
    }

    float mitja = suma / n_examens; // Calculem mitja

    printf("La teva nota mitjana és de %.2f, tens un %s!", mitja, final(mitja)); // Missatge final


    return 0;
}