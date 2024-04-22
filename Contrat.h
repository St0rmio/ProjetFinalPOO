#pragma once

#include "Date.h"
#include <string>
#include "Personne.h"
#include "BienImmobilier.h"
#include "Client.h"
#include <vector>

using namespace std;

class Contrat {
	int idContrat;
	Date date;
	string typeContrat;
	string termesContrat;
	vector<Client*> clients;
	BienImmobilier* bien;
	bool estSigne;

public:
	Contrat(int, Date, string, string, vector<Client*>, BienImmobilier*);
	void afficherContrat() const;
	void signerContrat();

	int GetIdContrat() const;
	vector<Client*> GetClients() const;
};

