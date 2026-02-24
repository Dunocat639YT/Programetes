#include <stdio.h>

int main() {

    char nom[10] = "Alex";
    int edat = 15;
    int pitote;

    printf("Quant et mesura el pitote? ");
    scanf("%d", &pitote);


    printf("bon dia, %s i tens %d anys\n", nom, edat);
    printf("El teu pitote medeix %d cm, " , pitote);

    if (pitote > 20) {
        printf("quina monstruositat!");
    }
    else {
        printf("quina diarrea...");
    }

    return 0;
}