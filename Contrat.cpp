#include "Contrat.h"

#include <iostream>

using namespace std;

Contrat::Contrat(int idContrat, Date date, string typeContrat, string termesContrat) {
    this->idContrat = idContrat;
    this->date = date;
    this->typeContrat = typeContrat;
    this->termesContrat = termesContrat;
}

void Contrat::afficherContrat() const
{
    cout << "idContrat : " << idContrat
        << "\ndate : " << date
        << "\ntypeContrat : " << typeContrat
        << "\ntermesContrat : " << termesContrat
        << "\n";
}
