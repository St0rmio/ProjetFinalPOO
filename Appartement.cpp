#include "Appartement.h"
#include <iostream>

Appartement::Appartement(int id, string adresse, double surface, string type, string statut, int nbPieces, int etage, bool terrasse) :
    BienImmobilier(id, adresse, surface, type, statut), nbPieces(nbPieces), etage(etage), terrasse(terrasse)
{
}

void Appartement::afficherDetails() const
{
    BienImmobilier::afficherDetails();
    cout << "nombre de pieces : " << nbPieces
        << "\netage : " << etage
        << "\nterrasse : " << (terrasse ? "true" : "false")
        << "\n";
}
