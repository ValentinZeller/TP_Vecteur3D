// TPVecteur3D.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "TVecteur3D.h"

int main()
{
    setlocale(LC_ALL, "");

    vect3D<int> v1(1, 2, 3);
    v1.affiche();
    vect3D<int> v2(4, 5, 6);
    v2.affiche();
    vect3D<int> v3;
    
    cout << endl;
    cout << "Addition : " << endl;
    v3 = v1.addition(v2);
    v3.affiche();

    cout << endl;
    cout << "Soustraction : " << endl;
    v3 = v1.soustraction(v2);
    v3.affiche();

    cout << endl;
    cout << "Produit par un scalaire (ici 3) : " << endl;
    v3 = v1.prodScal(3);
    v3.affiche();

    cout << endl;
    int scale = v1.prodScalVect(v2);
    cout << "Produit scalaire entre 2 vecteurs : " << scale << endl;
    
    cout << endl;
    cout << "Produit vectoriel : " << endl;
    v3 = v1.prodVect(v2);
    v3.affiche();

    cout << endl;
    if (coincide(v1, v2)) {
        cout << "Les vecteurs coincident" << endl;
    }
    else {
        cout << "Les vecteurs ne coincident pas" << endl;
    }
    

}

