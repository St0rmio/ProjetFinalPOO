#pragma once
#include <vector>
#include "BienImmobilier.h"
#include "Client.h"
#include "Contrat.h"
#include "Transaction.h"

class Agence {
	vector<BienImmobilier*> biens;
	vector<Client*> clients;
	vector<Contrat*> contrats;
	vector<Transaction*> transactions;
public:
	void ajouterBien(BienImmobilier*);
	void ajouterClient(Client*);
	void creerContrat(Contrat& contrat);
	void enregistrerTransaction(Transaction& transaction);
};
