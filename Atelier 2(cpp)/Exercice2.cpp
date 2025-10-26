#include <iostream>
using namespace std;

// Fonction qui returne 1 si n est multiple de 2, 0 sinon

int multpl2 (int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

// Fonction qui returne 1 si n est multiple de 3, 0 sinon

int multpl3 (int n) {
    if (n % 3 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int N ;

    cout << "donnez un entier : ";
    cin >> N ;

    int Pair = multpl2 ( N );
    int Multiple3 = multpl3 ( N );

    // Affichage des résultats
    
    if (Pair == 1 )
        cout << "il est pair" << endl;

    if (Multiple3 == 1 )
        cout << "il est multiple de 3" << endl;

    if (Pair == 1  && Multiple3 == 1)
        cout << "il est divisible par 6" << endl;

    return 0;
}