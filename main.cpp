#include <iostream>
#include <vector>

#include "BienImmobilier.h"
#include "Maison.h"
#include "Appartement.h"
#include "Terrain.h"


#include "Personne.h"
#include "Client.h"
#include "Proprietaire.h"
#include "Locataire.h"


#include "Agence.h"
#include "Contrat.h"
#include "Date.h"

using namespace std;

// EXERCICE 5
// La fonction est conçue pour être utilisée avec les classes BienImmobilier & Personne.
template <class T> bool superComparison(T theFirst, T theSecond) {
    return theFirst > theSecond;
}

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

    Client* client2 = new Client("Jean Dupont", "15 avenue des Lilas", "0123456789", "jean.dupont@gmail.com");
    Client* client3 = new Client("Alice Martin", "30 rue de la Paix", "9876543210", "alice.martin@gmail.com");

    vector<Client*> clients = { client2, client3 };
    BienImmobilier* bien = new BienImmobilier(1, "10 rue de la Paix", 150.0, "Maison", "� vendre");
    cout << "\nContrat : \n";
    try {
        Contrat contrat1(1, Date(2, 4, 2024), "ferme", "license dp", clients, bien);
        contrat1.afficherContrat();
    }
    catch (const invalid_argument& e) {
        cerr << "Erreur: " << e.what() << endl;
    }

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

    // Appel des m�thodes pour afficher les d�tails des diff�rents biens
    cout << "Maison : \n";
    bien1->afficherDetails();
    cout << endl;
    cout << "Appartement : \n";
    bien2->afficherDetails();
    cout << endl;
    cout << "Terrain : \n";
    bien3->afficherDetails();
    cout << endl;

    // Lib�ration de la m�moire
    delete bien1;
    delete bien2;
    delete bien3;

    cout << "\nExercice 4 : \n\n";

    

    try {
        // Cr�ation d'un contrat avec des termes de contrat vides.
        Contrat contrat2(101, Date(1, 4, 2024), "Location", "", clients, bien);
        cout << "Le contrat2 a ete cree : \n";
        contrat2.afficherContrat();
    }
    catch (const invalid_argument& e) {
        cerr << "Erreur contrat2: " << e.what() << endl;
    }

    try {
        // Cr�ation d'un contrat avec une mauvaise date.
        Contrat contrat3(101, Date(0, 4, 2024), "Location", "Le contrat est contrarie", clients, bien);
        cout << "Le contrat3 a ete cree\n";
        contrat3.afficherContrat();
    }
    catch (const invalid_argument& e) {
        cerr << "Erreur contrat3: " << e.what() << endl;
    }

    try {
        // Cr�ation d'un contrat avec des bons param�tres.
        Contrat contrat4(101, Date(1, 4, 2024), "Location", "Le contrat est contrarie", clients, bien);
        cout << "Le contrat4 a ete cree\n";
        contrat4.afficherContrat();
    }
    catch (const invalid_argument& e) {
        cerr << "Erreur contrat4: " << e.what() << endl;
    }

    // EXERCICE 5
    BienImmobilier* b1 = new Maison(4, "121 Bd Saint-Germain", 150.0, "Maison", "Occupe", 2, 1, false);
    BienImmobilier* b2 = new Appartement(5, "92 Bd de Sebastopol", 80.0, "Appartement", "Libre", 3, 5, false);
    Personne* p1 = new Client("Raoul", "1 Rue du Deux", "0607080910", "oui@non.fr");
    Personne* p2 = new Proprietaire("Anakin", "36 Avenue Tatooine", "1234567890", "68000");

    cout << "\nExercice 5 : \n\n";

    cout << "b1 :" << endl;
    b1->afficherDetails();
    cout << "\nb2 :" << endl;
    b2->afficherDetails();

    cout << "\np1 :" << endl;
    p1->afficherInfos();
    cout << "\np2 :" << endl;
    p2->afficherInfos();

    cout << "\nOperation 1 : superComparison(b1, b2)\n Excpected : true\n Result : " << boolalpha << superComparison(b1, b2) << endl;

    cout << "\nOperation 2 : superComparison(p1, p2)\n Excpected : false\n Result : " << boolalpha << superComparison(p1, p2) << endl;

    delete b1;
    delete b2;
    delete p1;
    delete p2;


    cout << "Exercice 6 :\n";
    cout << "1 et 2 : \n\n";

    BienImmobilier* ex6_2_bien1 = new Maison(1, "123 Rue A", 150.0, "Maison", "Libre", 3, 1, true);
    BienImmobilier* ex6_2_bien2 = new Appartement(2, "456 Rue B", 80.0, "Appartement", "Occupe", 3, 4, false);
    BienImmobilier* ex6_2_bien3 = new Terrain(3, "789 Rue C", 500.0, "Terrain", "Occupe", "Agricole");

    Agence ag;
    ag.ajouterBien(ex6_2_bien1);
    ag.ajouterBien(ex6_2_bien2);
    ag.ajouterBien(ex6_2_bien3);
    cout << "Ajout de 3 biens dans l'agence.\n";
    cout << "Le nombre de bien dans l'agence est : " << ag.GetBiens().size() << endl;

    Client* ex6_2_p1 = new Client("Raoul", "1 Rue du Deux", "0607080910", "oui@non.fr");
    Client* ex6_2_p2 = new Client("Anakin", "36 Avenue Tatooine", "1234567890", "68000");
    ag.ajouterClient(ex6_2_p1);
    ag.ajouterClient(ex6_2_p2);
    cout << "Ajout de 2 clients dans l'agence.\n";
    cout << "Le nombre de clients dans l'agence est : " << ag.GetPersonnes().size() << endl;

    vector<Client*> ex6_2_clients = { ex6_2_p1, ex6_2_p2 };
    ag.creerContrat(Date(22, 04, 2024), "Vente", "Termes du contrat", ex6_2_clients, ex6_2_bien1);
    cout << "Ajout de 1 contrat dans l'agence avec les clients dans un vecteur et un bien.\n";
    cout << "Le nombre de contrats dans l'agence est : " << ag.GetContrats().size() << endl;
    cout << "Le seul contrat est :\n";
    ag.GetContrats().at(0).afficherContrat();
    cout << endl;

    Transaction ex6_2_transaction(1, 600, Date(2, 2, 2014));
    ag.enregistrerTransaction(ex6_2_transaction);
    cout << "Ajout de 1 transaction dans l'agence.\n";
    cout << "Le nombre de transaction dans l'agence est : " << ag.GetTransactions().size() << endl;

    ag.~Agence();
}
