#include "Agence.h"
#include <vector>

using namespace std;

Agence::Agence()
{
	biens = vector<BienImmobilier*>();
	personnes = vector<Personne*>();
	contrats = vector<Contrat>();
	transactions = vector<Transaction>();
}

void Agence::ajouterBien(BienImmobilier* bienImmo) {
	biens.push_back(bienImmo);
}

void Agence::ajouterClient(Client* client) {
	personnes.push_back(client);
}

void Agence::creerContrat(Date date, string typeContrat, string termesContrat, vector<Personne*> clients, BienImmobilier* bien)
{
	try
	{
		int idContrat;
		if (contrats.size() > 0)
			idContrat = contrats.back().GetIdContrat() + 1;
		else
			idContrat = 1;
		contrats.push_back(Contrat(idContrat, date, typeContrat, termesContrat, clients, bien));
	}
	catch (const invalid_argument& e)
	{
		cerr << "Agence : creerContrat: " << e.what() << endl;
		exit(EXIT_FAILURE);
	}
}

void Agence::enregistrerTransaction(const Transaction& transaction)
{
	transactions.push_back(transaction);
}

vector<BienImmobilier*> Agence::GetBiens() const
{
	return biens;
}

vector<Personne*> Agence::GetPersonnes() const
{
	return personnes;
}

vector<Contrat> Agence::GetContrats() const
{
	return contrats;
}

vector<Transaction> Agence::GetTransactions() const
{
	return transactions;
}

