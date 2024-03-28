#pragma once
#include "BienImmobilier.h"

class Maison : public BienImmobilier {
	int nbPieces;
	int nbEtages;
	bool jardin;
public:
	void afficherDetails() const override;
	// A COMPLETER
};
