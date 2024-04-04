#pragma once
#include "Personne.h"

class Locataire : public Personne 
{
private:
    string garant;

public:
    Locataire(string nom, string adresse, string telephone, string garant);
    void afficherInfos() const override;
};
