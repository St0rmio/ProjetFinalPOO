#pragma once
#include <vector>
#include "BienImmobilier.h"
#include "Client.h"
#include "Contrat.h"

class Agence {
	vector<BienImmobilier*> biens;
	vector<Client*> clients;
	vector<Contrat*> contrats;
public:
	void ajouterBien(BienImmobilier*);
	void ajouterClient(Client*);
	void creerContrat();
	void enregistrerTransaction();
};
