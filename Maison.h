#pragma once
#include "BienImmobilier.h"

class Maison : public BienImmobilier {
	int nbPieces;
	int nbEtages;
	bool jardin;
public:
	Maison(int id, string adresse, double surface, string type, string statut, int nbPieces, int nbEtages, bool jardin);
	~Maison() override;
	void afficherDetails() const override;
};
