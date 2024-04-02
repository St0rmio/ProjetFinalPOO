#pragma once

#include <iostream>

using namespace std;

class Date {
protected:
	int jour;
	int mois;
	int annee;
public:
	Date();
	Date(int, int, int);
	Date(const Date&);
	void afficher() const;
	friend ostream& operator<<(ostream&, const Date&);
};
