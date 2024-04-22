#include "Client.h"
#include <iostream>

using namespace std;

Client::Client(string nom, string adresse, string telephone, string email) :
    Personne(nom, adresse, telephone), email(email)
{
}

Client::~Client()
{
}

void Client::afficherInfos() const
{
    Personne::afficherInfos();
    cout << "email : " << email << endl;
}
