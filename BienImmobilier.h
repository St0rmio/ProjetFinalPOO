#pragma once
#include <string>
using namespace std;

class BienImmobilier {
	int id;
	string adresse;
	double surface;
	string type;
	string statut;
public:
	BienImmobilier(int, string, double, string, string);
	virtual void afficherDetails() const;
	void mettreAJourStatut(string nouveauStatut);
    bool operator>(BienImmobilier& other) const;
};
