#include <iostream>
#include <string>
using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    
    Voiture() {
        marque = "Inconnue";
        modele = "Inconnu";
        annee = 2004;
        kilometrage = 0.0;
        vitesse = 0.0;
    }

    Voiture(string Mrq , string Mod, int An, float Km, float Vi) {
        marque = Mrq;
        modele = Mod;
        annee = An;
        kilometrage = Km;
        vitesse = Vi;
    }

    void accelerer(float valeur) {
        vitesse += valeur;
        cout << "Vitesse d'acceleration actuelle de v2 : " << vitesse << " km/h" << endl;
    }

    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) 
        vitesse = 0;
        cout << "Vitesse de freinage actuelle de v2  : " << vitesse << " km/h" << endl;
    }

    
    void afficherInfo() {
        cout << "Marque : " << marque << endl;
        cout << "Modele : " << modele << endl;
        cout << "Annee : " << annee << endl;
        cout << "Kilometrage : " << kilometrage << " km" << endl;
        cout << "Vitesse : " << vitesse << " km/h" << endl;
    }

    
    void avancer(float distance) {
        kilometrage += distance;
        cout << "Nouvel kilometrage de v2: " << kilometrage << " km" << endl;
    }

    
    ~Voiture() {
        cout << "La voiture " << marque << " " << modele << " est detruite." << endl;
    }
};


int main() {
    
    Voiture v1;
    v1.afficherInfo();
    cout << endl;

    
    Voiture v2("Honda", "Civic", 2020, 25000, 0);
    v2.afficherInfo();
    cout << endl;

    
    v2.accelerer(60);
    v2.freiner(25);

    
    v2.avancer(100);

    
    cout << "\nInfos finales de la voiture :" << endl;
    v2.afficherInfo();

    return 0;
}