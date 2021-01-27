// TPVecteur3D.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "TVecteur3D.h"
#include "TVecteur2D.h"
#include "TTabVect.h"

int main()
{
    setlocale(LC_ALL, "");

    //Vecteur 3D

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

    cout << endl;
    cout << "Surcharge operateur" << endl;
    cout << v1;
    cout << v2;

    cout << endl;
    cout << "Addition : " << endl;
    v3 = v1 + v2;
    cout << v3;

    cout << endl;
    cout << "Soustraction : " << endl;
    v3 = v1 - v2;
    cout << v3;

    cout << endl;
    cout << "Produit par un scalaire (ici 2) : " << endl;
    v3 = v1 * 2;
    cout << v3;

    cout << "Produit scalaire entre 2 vecteurs : " << v1 * v2 << endl;

    cout << endl;
    cout << "Produit vectoriel : " << endl;
    v3 = v1 ^ v2;
    cout << v3;

    cout << endl;
    if (v1 == v2) {
        cout << "Les vecteurs coincident" << endl;
    }
    else {
        cout << "Les vecteurs ne coincident pas" << endl;
    }

    //Vecteur 2D

    cout << endl;
    cout << "Vecteur 2D" << endl;
    vect2D<int> v1_2D(1,2);
    vect2D<int> v2_2D(3,4);
    vect2D<int> v3_2D(v1_2D);
    cout << v1_2D;
    cout << v2_2D;

    cout << "Addition : " << endl;
    v3_2D = v1_2D + v2_2D;
    cout << v3_2D;


    cout << endl;
    cout << "Soustraction : " << endl;
    v3_2D = v1_2D - v2_2D;
    cout << v3_2D;

    cout << endl;
    cout << "Produit par un scalaire (ici 3) : " << endl;
    v3_2D = v1_2D * 3;
    cout << v3_2D;

    cout << "Produit scalaire entre 2 vecteurs : " << v1_2D * v2_2D << endl;

    cout << endl;
    cout << "Conteneur de vecteurs : " << endl;
    tabVecteur<vect3D<int>, 3> tab;

    tab[0] = v1;
    tab[1] = v2;
    tab[2] = v3;

    cout << tab[0];
    cout << tab[1];
    cout << tab[2];
}

