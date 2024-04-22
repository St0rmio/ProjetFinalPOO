#include "Maison.h"
#include <iostream>

using namespace std;

Maison::Maison(int id, string adresse, double surface, string type, string statut, int nbPieces, int nbEtages, bool jardin) :
    BienImmobilier(id, adresse, surface, type, statut), nbPieces(nbPieces), nbEtages(nbEtages), jardin(jardin)
{
}

Maison::~Maison()
{
}

void Maison::afficherDetails() const
{
    BienImmobilier::afficherDetails();
    cout << "Nombre de pieces : " << nbPieces
        << "\nnombre d'etages : " << nbEtages
        << "\njardin : " << (jardin ? "true" : "false")
        << "\n";
}
