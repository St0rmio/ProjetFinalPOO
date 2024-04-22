#pragma once
#include "Date.h"
using namespace std;

class Transaction {
	int idTransaction;
	double montant;
	Date dateTransaction;
	bool estEffectue;
public:
	Transaction(int, double, Date);
	void afficherContrat() const;
	void effectuerTransaction();
};
