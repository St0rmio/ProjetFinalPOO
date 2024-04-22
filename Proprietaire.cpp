#include "Proprietaire.h"
#include <iostream>

using namespace std;

Proprietaire::Proprietaire(string nom, string adresse, string telephone, string numeroSIRET) :
    Personne(nom, adresse, telephone), numeroSIRET(numeroSIRET)
{
}

Proprietaire::~Proprietaire()
{
}

void Proprietaire::afficherInfos() const
{
    Personne::afficherInfos();
    cout << "numero SIRET : " << numeroSIRET << endl;
}
