#include "BienImmobilier.h"

#include <iostream>
#include <string>

using namespace std;

BienImmobilier::BienImmobilier(int id, string adresse, double surface, string type, string statut) {
	this->id = id;
	this->adresse = adresse;
	this->surface = surface;
	this->type = type;
	this->statut = statut;
}

BienImmobilier::~BienImmobilier()
{
}

void BienImmobilier::afficherDetails() const {
	cout << "id : " << id
		<< "\nadresse : " << adresse
		<< "\nsurface : " << surface
		<< "\ntype : " << type
		<< "\nstatus : " << statut
		<< "\n";
}

void BienImmobilier::mettreAJourStatut(string nouveauStatut) {
	statut = nouveauStatut;
}

bool BienImmobilier::operator>(BienImmobilier& other) const {
    return surface > other.surface;
}




