#pragma once
#include "BienImmobilier.h"

class Terrain : public BienImmobilier {
	string typeTerrain;
public:
	Terrain(int id, string adresse, double surface, string type, string statut, string typeTerrain);
	void afficherDetails() const override;
	// A COMPLETER
};
