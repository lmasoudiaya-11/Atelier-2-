#include <iostream>
using namespace std;

void incrementer(int &x) {
    x++; 
}


void permuter(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {

    int a = 2 , b = 6;

    cout << "Avant incrementer : a = " << a << endl;

    incrementer(a); 

    cout << "Apres incrementer : a = " << a << endl;

    cout << "\nAvant permuter : a = " << a << " , b = " << b << endl;

    permuter(a , b);

    cout << "Apres permuter: a = " << a << " , b = " << b << endl;

    return 0;
}