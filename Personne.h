#pragma once
#include <string>
using namespace std;

class Personne {
	string nom;
	string telephone;
protected:
    string adresse;
public:
	Personne(string, string, string);
	virtual void afficherInfos() const;
    bool operator>(Personne& other) const;

};

