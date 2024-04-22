#pragma once
#include "Personne.h"

class Client : public Personne 
{
private:
    string email;

public:
    Client(string nom, string adresse, string telephone, string email);
    ~Client() override;
    void afficherInfos() const override;
};
