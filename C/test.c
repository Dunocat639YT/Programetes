#include <stdio.h>

// Hem tret el 'const', ara el C es pensa que som els amos
const char* final(float mitja) {
    if (mitja >= 5) return "aprovat";
    return "suspes";
}

int main(void) {
    // 1. Cridem a la funció i guardem l'adreça a 'punter'
    char* punter = final(6.0); 

    printf("La nota original és: %s\n", punter);

    // 2. Intentem modificar la primera lletra (la 'a' d'aprovat) 
    // per una 'o' per fer que digui "oprovat".
    // AQUÍ ÉS ON EL PROGRAMA PETARÀ.
    punter[0] = 'o'; 

    printf("Això no s'arribarà a imprimir mai: %s\n", punter);

    return 0;
}