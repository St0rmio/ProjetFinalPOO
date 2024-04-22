#include "Locataire.h"
#include <iostream>

using namespace std;

Locataire::Locataire(string nom, string adresse, string telephone, string garant) :
    Personne(nom, adresse, telephone), garant(garant)
{
}

Locataire::~Locataire()
{
}

void Locataire::afficherInfos() const
{
    Personne::afficherInfos();
    cout << "garant : " << garant << endl;
}
