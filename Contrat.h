#pragma once

#include "Date.h"
#include <string>

using namespace std;

class Contrat {
	int idContrat;
	Date date;
	string typeContrat;
	string termesContrat;
public:
	Contrat(int, Date, string, string);
	void afficherContrat() const;
	void signerContrat();
};

