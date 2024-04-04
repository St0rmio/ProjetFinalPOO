#pragma once
#include "BienImmobilier.h"

class Appartement : public BienImmobilier {
	int nbPieces;
	int etage;
	bool terrasse;
public:
	Appartement(int id, string adresse, double surface, string type, string statut, int nbPieces, int etage, bool terrasse);
	void afficherDetails() const override;
};
