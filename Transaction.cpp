#include "Transaction.h"
#include <iostream>

using namespace std;

Transaction::Transaction(int idTransaction, double montant, Date dateTransaction) :
    idTransaction(idTransaction), montant(montant), dateTransaction(dateTransaction)
{
    estEffectue = false;
}

void Transaction::afficherTransaction() const
{
    cout << "Contrat :\Id = " << idTransaction << "\nmontat = " << montant << "\nDate transaction = " << dateTransaction << endl;
}

void Transaction::effectuerTransaction()
{
    estEffectue = true;
    cout << "La transaction a ete effectuee.\n";
}
