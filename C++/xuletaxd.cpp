// ---------------------------------------------------------------------------
//  Fitxer: conceptes_basics.cpp
//  Autor: Francesc (amb ajuda de Sigma GPT)
//  Descripció: resum complet de tots els conceptes bàsics de C++
// ---------------------------------------------------------------------------

#include <iostream> // per poder fer servir cout i cin
#include <string>   // per al tipus string
#include <vector>   // per al tipus vector

using namespace std; // evita haver d’escriure std:: tot el temps

// ---------------------------------------------------------------------------
//  FUNCIONS
// ---------------------------------------------------------------------------

// Exemple de funció senzilla que suma dos números
int suma(int a, int b) {
    return a + b; // retorna la suma
}

// ---------------------------------------------------------------------------
//  ESTRUCTURES
// ---------------------------------------------------------------------------

// Una estructura serveix per agrupar diverses variables en un sol tipus
struct Persona {
    string nom;
    int edat;
};

// ---------------------------------------------------------------------------
//  CLASSES (Programació Orientada a Objectes)
// ---------------------------------------------------------------------------

// Una classe és com una estructura, però amb funcions internes (mètodes)
class Cotxe {
public:             // "public" vol dir que aquestes variables o funcions
    string marca;   // es poden accedir des de fora de la classe
    int any;

    void mostra() { // mètode: funció dins la classe
        cout << marca << " (" << any << ")" << endl;
    }
};

// ---------------------------------------------------------------------------
//  FUNCIÓ PRINCIPAL
// ---------------------------------------------------------------------------

int main() {
    // -----------------------------------------------------------------------
    //  VARIABLES BÀSIQUES
    // -----------------------------------------------------------------------
    int edat = 17;
    float preu = 4.99f;
    double pi = 3.14159;
    char lletra = 'A';
    string nom = "Francesc";
    bool viu = true;

    cout << "Hola " << nom << "! Tens " << edat << " anys." << endl;

    // -----------------------------------------------------------------------
    //  OPERADORS
    // -----------------------------------------------------------------------
    int a = 5, b = 2;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicació: " << a * b << endl;
    cout << "Divisió (entera): " << a / b << endl;
    cout << "Residu: " << a % b << endl;

    // -----------------------------------------------------------------------
    //  CONDICIONS (if / else if / else)
    // -----------------------------------------------------------------------
    int nota = 8;
    if (nota >= 9)
        cout << "Excel·lent" << endl;
    else if (nota >= 5)
        cout << "Aprovat" << endl;
    else
        cout << "Suspès" << endl;

    // -----------------------------------------------------------------------
    //  BUCLES
    // -----------------------------------------------------------------------

    // Bucle for
    cout << "For: ";
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Bucle while
    cout << "While: ";
    int i = 0;
    while (i < 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Bucle do while
    cout << "Do while: ";
    i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i < 5);
    cout << endl;

    // -----------------------------------------------------------------------
    //  ENTRADA DE DADES
    // -----------------------------------------------------------------------
    // Descomenta aquestes línies si vols provar-ho:
    /*
    cout << "Quina edat tens? ";
    cin >> edat;
    cout << "Tens " << edat << " anys." << endl;
    */

    // -----------------------------------------------------------------------
    //  FUNCIONS
    // -----------------------------------------------------------------------
    cout << "Suma amb funció: " << suma(3, 4) << endl;

    // -----------------------------------------------------------------------
    //  ARRAYS (vectors de mida fixa)
    // -----------------------------------------------------------------------
    int numeros[3] = {10, 20, 30};
    cout << "Primer element de l'array: " << numeros[0] << endl;

    // Recorrem l'array amb un bucle for
    cout << "Tots els elements: ";
    for (int i = 0; i < 3; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // -----------------------------------------------------------------------
    //  ESTRUCTURES
    // -----------------------------------------------------------------------
    Persona p;
    p.nom = "Francesc";
    p.edat = 17;
    cout << p.nom << " té " << p.edat << " anys." << endl;

    // -----------------------------------------------------------------------
    //  CLASSES I OBJECTES
    // -----------------------------------------------------------------------
    Cotxe c;
    c.marca = "Toyota";
    c.any = 2020;
    c.mostra();

    // -----------------------------------------------------------------------
    //  POINTERS (PUNTERS)
    // -----------------------------------------------------------------------
    int x = 10;
    int* pnt = &x; // &x = adreça de x
    cout << "Adreça de x: " << pnt << endl; // mostra la direcció de memòria
    cout << "Valor de x via punter: " << *pnt << endl; // *pnt = valor apuntat

    // -----------------------------------------------------------------------
    //  VECTORS (dinàmics)
    // -----------------------------------------------------------------------
    vector<int> nums = {1, 2, 3};
    nums.push_back(4); // afegim un element
    cout << "Vector: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    // -----------------------------------------------------------------------
    //  FINAL
    // -----------------------------------------------------------------------
    cout << "Programa finalitzat correctament!" << endl;
    return 0; // tot correcte
}
