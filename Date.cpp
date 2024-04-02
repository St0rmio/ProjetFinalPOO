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
		cerr << "Constructeur Date: Mois invalide -> remplacement par 1\n";
		mois = 1;
	}
	else
		mois = m;
	
	// Jour invalide
	if (j < 1 || j > 31) {
		cerr << "Constructeur Date: Jour invalide -> remplacement par 1\n";
		jour = 1;
	}
	// Cas du mois de février
	else if (mois == 2 && j > 28) {
		cerr << "Constructeur Date: Max 28j pour fevrier -> remplacement du jour par 28\n";
		jour = 28;
	}
	// Verification mois de 31 jours
	else if (j == 31 && (mois == 4 || mois == 6 || mois == 9 || mois == 11)) {
		cerr << "Constructeur Date: Mois de 30j -> remplacement du jour par 30\n";
		jour = 30;
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
