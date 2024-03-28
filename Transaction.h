#pragma once
#include "Date.h"
using namespace std;

class Transaction {
	int idTransaction;
	double montant;
	Date dateTransaction;
public:
	Transaction(int, double, Date);
	void effectuerTransaction();
};
