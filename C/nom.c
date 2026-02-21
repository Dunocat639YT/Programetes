#include <stdio.h>

bool majorEdat(int edat) {
    if (edat >= 18) {
        return true;
    }
    else {
        return false;
    }
    
}

int main() {

    char nom[50]; 
    int edat;

    printf("Com et dius, jove? ");
    fgets(nom, sizeof(nom), stdin);

    printf("Quants anys tens? ");
    scanf("%d", &edat);

    printf("Et dius %s i ", nom);
    if (majorEdat(edat)) {
        printf("ets major d'edat perquè tens %d anys.", edat);
    }
    else {
        printf("ets menor d'edat perquè tens %d anys.", edat);
    }

    return 0;
}