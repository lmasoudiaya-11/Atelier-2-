#include <iostream>
using namespace std;

int main() {

    int T[10];
    int *p;
    int m , M ;

    cout << "Entrez 10 nombres entiers ." << endl;

    
    for (p = T ; p < T + 10 ; p++) {

        cout << "Nombre " << (p - T + 1) << " : ";
        cin >> *p;
    }

    
    m = *T;
    M = *T;

  
    for (p = T + 1; p < T + 10; p++) {

        if (*p < m )

            m = *p;

        if (*p > M )

            M = *p;
    }

    cout << "\nLe plus petit nombre est : " << m << endl;
    cout << "Le plus grand nombre est : " << M << endl;

    return 0;
}