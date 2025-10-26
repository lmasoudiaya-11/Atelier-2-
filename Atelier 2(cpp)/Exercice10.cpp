#include <iostream>
using namespace std;

class Complex {
private:
    double re , im;

public:
    
    Complex(double r = 0, double i = 0) {
        re = r;
        im = i;
    }

    
    void afficher() const {
        if (im >= 0)
            cout << re << " + " << im << "i";
        else
            cout << re << " - " << -im << "i";
    }

    Complex operator+(const Complex &c) const {
        return Complex(re + c.re , im + c.im);
    }

   
    Complex operator-(const Complex &c) const {
        return Complex(re - c.re , im - c.im);
    }

   
    Complex operator*(const Complex &c) const {
        return Complex(re * c.re - im * c.im , re * c.im + im * c.re);
    }

    Complex operator/(const Complex &c) const {
        double denominateur = c.re * c.re + c.im * c.im;
        return Complex((re * c.re + im * c.im) / denominateur ,  (im * c.re - re * c.im) / denominateur);
    }

    bool operator == (const Complex &c) const {
        return (re == c.re && im == c.im);
    }
};

int main() {
    double a_re , a_im  , b_re, b_im;
    cout << "Entrez la partie réelle du premier nombre complexe: ";
    cin >> a_re;
    cout << "Entrez la partie imaginaire du premier nombre complexe: ";
    cin >> a_im;

    cout << "Entrez la partie réelle du second nombre complexe: ";
    cin >> b_re;
    cout << "Entrez la partie imaginaire du second nombre complexe: ";
    cin >> b_im;

    Complex c1(a_re, a_im);
    Complex c2(b_re, b_im);

    int choix;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Soustraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Egalité\n";
        cout << "0. Quitter\n";
        cout << "Choisissez une opération: ";
        cin >> choix;

        switch(choix) {
            case 1: {
                Complex Rslt = c1 + c2;
                cout << "Résultat: ";
                Rslt.afficher();
                cout << endl;
                break;
            }
            case 2: {
                Complex Rslt = c1 - c2;
                cout << "Résultat: ";
                Rslt.afficher();
                cout << endl;
                break;
            }
            case 3: {
                Complex Rslt = c1 * c2;
                cout << "Résultat: ";
                Rslt.afficher();
                cout << endl;
                break;
            }
            case 4: {
                Complex Rslt = c1 / c2;
                cout << "Résultat: ";
                Rslt.afficher();
                cout << endl;
                break;
            }
            case 5: {
                if (c1 == c2)
                    cout << "Les nombres sont égaux." << endl;
                else
                    cout << "Les nombres sont différents." << endl;
                break;
            }
            case 0:
                cout << "Fin du programme.\n";
                break;
            default:
                cout << "Choix invalide, réessayez.\n";
        }
    } while(choix != 0);

    return 0;
}