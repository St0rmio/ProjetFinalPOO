#pragma once

#include "Date.h"
#include <string>
#include "Personne.h"
#include "BienImmobilier.h"
#include <vector>

using namespace std;

class Contrat {
	int idContrat;
	Date date;
	string typeContrat;
	string termesContrat;
	vector<Personne*> clients;
	BienImmobilier* bien;
	bool estSigne;

public:
	Contrat(int, Date, string, string, vector<Personne*>, BienImmobilier*);
	void afficherContrat() const;
	void signerContrat();
};

