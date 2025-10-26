#include <iostream>
#include <cmath> 
using namespace std;

class Vecteur3d {
private:
    float x, y, z;

public:
    
    Vecteur3d(float a = 0, float b = 0, float c = 0) {
        x = a; y = b; z = c;
    }

    
    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }

    Vecteur3d somme(const Vecteur3d &v) const {
        return Vecteur3d(x + v.x, y + v.y, z + v.z);
    }

    float produitScalaire(const Vecteur3d &v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    bool coincide(const Vecteur3d &v) const {
        return (x == v.x && y == v.y && z == v.z);
    }

    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    static Vecteur3d normax(const Vecteur3d &v1, const Vecteur3d &v2) {
        return (v1.norme() >= v2.norme()) ? v1 : v2;
    }

    static void normax(const Vecteur3d *v1, const Vecteur3d *v2, Vecteur3d *Rslt) {
        *Rslt = (v1->norme() >= v2->norme()) ? *v1 : *v2;
    }

    static Vecteur3d& normax(const Vecteur3d &v1, const Vecteur3d &v2, Vecteur3d &Rslt) {
        Rslt = (v1.norme() >= v2.norme()) ? v1 : v2;
        return Rslt;
    }
};


int main() {
    Vecteur3d v1(0 , 1 , 2);
    Vecteur3d v2(3 , 4 , 5);

    cout << "Vecteurs initiaux: ";
    v1.afficher();
    cout << " et ";
    v2.afficher();
    cout << endl;

    Vecteur3d Sum = v1.somme(v2);
    cout << "Somme: ";
    Sum.afficher();
    cout << endl;

    cout << "Produit scalaire: " << v1.produitScalaire(v2) << endl;

    cout << "Coincident ? " << (v1.coincide(v2) ? "O" : "N") << endl;

    cout << "Norme v1: " << v1.norme() << ", Norme v2: " << v2.norme() << endl;

  
    Vecteur3d nv = Vecteur3d::normax(v1, v2);
    cout << "Normax (valeur): ";
    nv.afficher();
    cout << endl;

    Vecteur3d nr;
    Vecteur3d::normax(&v1, &v2, &nr);
    cout << "Normax (adresse): ";
    nr.afficher();
    cout << endl;

    Vecteur3d nr_ref;
    Vecteur3d &r_ref = Vecteur3d::normax(v1, v2, nr_ref);
    cout << "Normax (référence): ";
    r_ref.afficher();
    cout << endl;

    return 0;
}