#include "Personne.h"

#include <iostream>

using namespace std;

Personne::Personne(string nom, string adresse, string telephone) {
    this->nom = nom;
    this->adresse = adresse;
    this->telephone = telephone;
}

void Personne::afficherInfos() const
{
    cout << "nom : " << nom
        << "\nadresse : " << adresse
        << "\ntelephone : " << telephone
        << "\n";
}
