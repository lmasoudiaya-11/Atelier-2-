#include <iostream>
using namespace std;

int main() {

    int a = 2 ;           
    int &ref_a = a;       
    int *p_a = &a;        

    cout << "Valeur de a       : " << a << endl;
    cout << "Adresse de a      : " << &a << endl;

    cout << "\nValeur de ref_a  : " << ref_a << endl;
    cout << "Adresse de ref_a : " << &ref_a << endl;

    cout << "\nValeur de p_a (adresse stockée) : " << p_a << endl;
    cout << "Adresse de p_a (le pointeur lui-même) : " << &p_a << endl;
    cout << "Valeur pointée par p_a (*p_a) : " << *p_a << endl;

    return 0;
}