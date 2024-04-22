#include "Personne.h"

#include <iostream>

using namespace std;

Personne::Personne(string nom, string adresse, string telephone) {
    this->nom = nom;
    this->adresse = adresse;
    this->telephone = telephone;
}

Personne::~Personne()
{
}

void Personne::afficherInfos() const
{
    cout << "nom : " << nom
        << "\nadresse : " << adresse
        << "\ntelephone : " << telephone
        << "\n";
}

bool Personne::operator>(Personne& other) const {
    return adresse.compare(other.adresse);
}
