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
	BienImmobilier(int, string, double, string);	// Le type sera automatiquement d�termin� par la sous-classe o� on ex�cute le constructeur
	virtual void afficherDetails() const;
	void mettreAJourStatut(string nouveauStatut);
};
