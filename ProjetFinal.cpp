#include <iostream>
#include "BienImmobilier.h"
#include "Personne.h"
#include "Contrat.h"
#include "Date.h"

using namespace std;

int main() {
    cout << "Exercice 1 : \n\n";

    cout << "BienImobilier : \n";
    BienImmobilier bi(1, "Rue des Hospitaliaires", 30, "Libre");
    bi.afficherDetails();
    cout << "\nmettre a jour le statut\n\n";
    bi.mettreAJourStatut("Occupe");
    bi.afficherDetails();

    cout << "\nPersonne : \n";
    Personne p("Jean", "Rue de Gaulle", "513-513-8754");
    p.afficherInfos();

    cout << "\nContrat : \n";
    Contrat c(1, Date(2, 4, 2024), "ferme", "license dp");
    c.afficherContrat();
}
