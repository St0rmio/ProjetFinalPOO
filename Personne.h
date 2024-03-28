#pragma once
#include <string>
using namespace std;

class Personne {
	string nom;
	string adresse;
	string telephone;
public:
	Personne(string, string, string);
	void afficherInfos() const;
};

