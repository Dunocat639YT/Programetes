#include <stdio.h>

int majorEdat(int edat) {
    if (edat >= 18) {
        return 1;
    }
    else {
        return 0;
    }
    
}

int main() {

    char nom[50] = "";
    int edat;

    printf("Com et dius, jove? \n");
    scanf("%s", &nom);

    printf("Quants anys tens? ");
    scanf("%d", &edat);

    printf("Et dius %s i ", nom);
    if (majorEdat(edat) == 1) {
        printf("ets major d'edat perquè tens %d anys.", edat);
    }
    else {
        printf("ets menor d'edat perquè tens %d anys.", edat);
    }

    return 0;
}