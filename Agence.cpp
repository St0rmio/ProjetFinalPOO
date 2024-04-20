#include "Agence.h"

void Agence::ajouterBien(BienImmobilier* bienImmo) {
	biens.push_back(bienImmo);
}

void Agence::ajouterClient(Client* client) {
	clients.push_back(client);
}

void Agence::creerContrat(Contrat& contrat)
{
	contrats.push_back(&contrat);
}

void Agence::enregistrerTransaction(Transaction& transaction)
{
	transactions.push_back(&transaction);
}

