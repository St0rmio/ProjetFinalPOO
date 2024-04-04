#include "Terrain.h"
#include <iostream>

using namespace std;

Terrain::Terrain(int id, string adresse, double surface, string type, string statut, string typeTerrain) :
    BienImmobilier(id, adresse, surface, type, statut), typeTerrain(typeTerrain)
{
}

void Terrain::afficherDetails() const
{
    BienImmobilier::afficherDetails();
    cout << "type de terrain : " << typeTerrain 
        << "\n";
}
