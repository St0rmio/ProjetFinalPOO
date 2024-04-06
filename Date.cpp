#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	this->jour = 1;
	this->mois = 1;
	this->annee = 1;
}

Date::Date(int j, int m, int a) {
	annee = a;
	if (m < 1 || m > 12) {
		throw invalid_argument("Constructeur Date: Mois invalide");
	}
	else
		mois = m;
	
	// Jour invalide
	if (j < 1 || j > 31) {
		throw invalid_argument("Constructeur Date: Jour invalide");
	}
	// Cas du mois de février
	else if (mois == 2 && j > 28) {
		throw invalid_argument("Constructeur Date: Max 28j pour fevrier");
	}
	// Verification mois de 31 jours
	else if (j == 31 && (mois == 4 || mois == 6 || mois == 9 || mois == 11)) {
		throw invalid_argument("Constructeur Date: Mois de 30j");
	}
	// Jour valide
	else 
		jour = j;
}

Date::Date(const Date& autre)
{
	this->jour = autre.jour;
	this->mois = autre.mois;
	this->annee = autre.annee;
}

void Date::afficher() const {
	cout << jour << "/" << mois << "/" << annee;
}

ostream& operator<<(ostream& sortie, const Date& date)
{
	sortie << date.jour << "/" << date.mois << "/" << date.annee;
	return sortie;
}
