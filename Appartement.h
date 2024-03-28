#pragma once
#include "BienImmobilier.h"

class Appartement : public BienImmobilier {
	int nbPieces;
	bool terrasse;
public:
	void afficherDetails() const override;
	// A COMPLETER
};
