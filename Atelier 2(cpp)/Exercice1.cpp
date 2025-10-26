#include <iostream>
using namespace std;

// Fonction qui compte et affiche apres le nombre d'appels 

void numAppels() {
     static int counter = 0;         // Initialisation ainsi que garder la valeur precedente 
    counter++;               // incrementation apres chaque appel
    cout << "appel numéro " << counter << endl;
}

int main() {

 // appele la fonction 3 fois
    numAppels();
    numAppels();
    numAppels();
  

    return 0;
}