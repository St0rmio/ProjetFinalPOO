#include <iostream>

#include "BienImmobilier.h"
#include "Maison.h"
#include "Appartement.h"
#include "Terrain.h"


#include "Personne.h"
#include "Client.h"
#include "Proprietaire.h"
#include "Locataire.h"


#include "Contrat.h"
#include "Date.h"

using namespace std;

int main() {
    cout << "Exercice 1 : \n\n";

    cout << "BienImobilier : \n";
    BienImmobilier bi(1, "Rue des Hospitaliaires", 30, "Notype", "Libre");
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

    cout << "\nExercice 2 : \n\n";

    Maison maison1(1, "123 Rue A", 150.0, "Maison", "Libre", 3, 1, true);
    Appartement appartement1(2, "456 Rue B", 80.0, "Appartement", "Occupe", 3, 4, false);
    Terrain terrain1(3, "789 Rue C", 500.0, "Terrain", "Occupe", "Agricole");

    Client client1("John Doe", "10 Rue X", "123-456-7890", "john.doe@example.com");
    Proprietaire proprietaire1("Jane Smith", "20 Rue Y", "987-654-3210", "123456789");
    Locataire locataire1("Alice Johnson", "30 Rue Z", "456-789-0123", "Bob Smith");

    cout << "Details de la Maison:" << endl;
    maison1.afficherDetails();
    cout << endl;

    cout << "Details de l'Appartement:" << endl;
    appartement1.afficherDetails();
    cout << endl;

    cout << "Details du Terrain:" << endl;
    terrain1.afficherDetails();
    cout << endl;

    cout << "Informations du Client:" << endl;
    client1.afficherInfos();
    cout << endl;

    cout << "Informations du Proprietaire:" << endl;
    proprietaire1.afficherInfos();
    cout << endl;

    cout << "Informations du Locataire:" << endl;
    locataire1.afficherInfos();
    cout << endl;

    cout << "\nExercice 3 : \n\n";

    BienImmobilier* bien1 = new Maison(1, "123 Rue A", 150.0, "Maison", "Libre", 3, 1, true);
    BienImmobilier* bien2 = new Appartement(2, "456 Rue B", 80.0, "Appartement", "Occupe", 3, 4, false);
    BienImmobilier* bien3 = new Terrain(3, "789 Rue C", 500.0, "Terrain", "Occupe", "Agricole");

    // Appel des méthodes pour afficher les détails des différents biens
    bien1->afficherDetails();
    cout << endl;
    bien2->afficherDetails();
    cout << endl;
    bien3->afficherDetails();
    cout << endl;

    // Libération de la mémoire
    delete bien1;
    delete bien2;
    delete bien3;
}
