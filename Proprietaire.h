#pragma once
#include "Personne.h"

class Proprietaire : public Personne 
{
private:
    string numeroSIRET;

public:
    Proprietaire(string nom, string adresse, string telephone, string numeroSIRET);
    void afficherInfos() const override;
};
