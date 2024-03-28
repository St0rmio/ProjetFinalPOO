#pragma once
#include "BienImmobilier.h"
#include "Client.h"

class Agence {
	// A COMPLETER
public:
	void ajouterBien(BienImmobilier&);
	void ajouterClient(Client&);
	void creerContrat();
	void enregistrerTransaction();
};
