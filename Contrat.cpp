#include "Contrat.h"

#include <iostream>

using namespace std;

Contrat::Contrat(int idContrat, Date date, string typeContrat, string termesContrat, vector<Client*> clients, BienImmobilier* bien) {
    this->idContrat = idContrat;
    this->date = date;
    this->typeContrat = typeContrat;
    if (termesContrat.empty())
        throw invalid_argument("Le termesContrat est vide");
    else
        this->termesContrat = termesContrat;
    this->clients = clients;
    this->bien = bien;
    estSigne = false;
}

void Contrat::afficherContrat() const
{
    cout << "idContrat : " << idContrat
        << "\ndate : " << date
        << "\ntypeContrat : " << typeContrat
        << "\ntermesContrat : " << termesContrat
        << "\nnombre de client : " << clients.size()
        << "\n";
}

void Contrat::signerContrat()
{
    estSigne = true;
    cout << "Le contrat n°" << idContrat << " est signe.\n";
}

int Contrat::GetIdContrat() const
{
    return idContrat;
}

vector<Client*> Contrat::GetClients() const
{
    return clients;
}
