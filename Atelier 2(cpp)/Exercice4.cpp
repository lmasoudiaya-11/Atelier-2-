#include <iostream>
using namespace std;

int main() {
    int t ;  // t : taiile 

    cout << "Entrez la taille du tableau : ";
    cin >> t ;

    int* T = new int[t];    // T : tableau 
   
    cout << "Entrez " << t << " nombres entiers :" << endl;

    for (int i = 0; i < t ; i++) {
        cout << "Nombre " << i + 1 << " : ";
        cin >> T[i];
    }

  delete[] T ;

    int* TCarres = new int[t];

    for (int i = 0; i < t ; i++) {

        TCarres[i] = T[i] * T[i];
    }

    cout << "\nLes carrés des nombres sont :" << endl;

    for (int i = 0; i < t ; i++) {
      
        cout << TCarres[i] << " ";
    }
    cout << endl;

    delete[] TCarres;

    return 0;
}