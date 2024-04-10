#include "Agence.h"

void Agence::ajouterBien(BienImmobilier* bienImmo) {
	biens.push_back(bienImmo);
}

void Agence::ajouterClient(Client* client) {
	clients.push_back(client);
}
