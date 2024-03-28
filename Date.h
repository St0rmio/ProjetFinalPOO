#pragma once

class Date {
protected:
	int jour;
	int mois;
	int annee;
public:
	Date(int, int, int);
	void afficher() const;
};
