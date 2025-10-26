#include <iostream>
using namespace std;

int main() {

    int T[10];         // T : tableau , m : minimum , M : maximum 
    int i, m, M;

    cout << "Entrez 10 nombres entiers ." << endl;

    for (i = 0 ; i < 10 ; i++) {

        cout << "Nombre " << i + 1 << " : ";
        cin >> T[i];
    }

    // Initialisation
    m = T[0];
    M = T[0];

    // Recherche du minimum  et du maximum 
    for (i = 1; i < 10; i++) {

        if (T[i] < m)

            m = T[i];

        if (T[i] > M)

            M = T[i];
    }

    cout << "\nLe plus petit nombre est : " << m << endl;
    cout << "Le plus grand nombre est : " << M << endl;

    return 0;
}