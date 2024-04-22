#pragma once
#include <vector>
#include "BienImmobilier.h"
#include "Personne.h"
#include "Client.h"
#include "Contrat.h"
#include "Transaction.h"

class Agence {
	vector<BienImmobilier*> biens; // Tout est composition.
	vector<Personne*> personnes;
	vector<Contrat> contrats;
	vector<Transaction> transactions;

public:
	Agence();
	~Agence();
	void ajouterBien(BienImmobilier*);
	void ajouterClient(Client*);
	void creerContrat(Date date, string typeContrat, string termesContrat, vector<Client*> clients, BienImmobilier* bien);
	void enregistrerTransaction(const Transaction& transaction);
	
	vector<BienImmobilier*> GetBiens() const;
	vector<Personne*> GetPersonnes() const;
	vector<Contrat> GetContrats() const;
	vector<Transaction> GetTransactions() const;
};
