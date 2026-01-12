#include <iostream>
#include "Date.h"
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Auteur.h"
#include "Bibliotheque.h"

int main() {
Bibliotheque cortex;

Date D(1,2,2025);
Auteur A1(1,"Asimov Isaac");
Auteur A2(2,"Adams Douglas");
Auteur A3(3,"Herbert Frank");
Lecteur lec1("hcfg","joe","dash");

Livre l5("ESIREM",A1,"francais",Date(12,05,2024),"drame",145678,false);
Livre l6("ESIREM12",A2,"japonais",Date(12,05,2024),"drame",145678,true);
Livre l1("ESIREM3",A2,"Espagnol",Date(12,05,2024),"drame",145678,false);
Livre l2("Polytech",A3,"Anglais",Date(12,05,2024),"drame",145678,true);
Livre l3("UBE",A1,"francais",Date(12,05,2024),"drame",145678,true);

Livre l7("Dijon",A3,"francais",Date(12,05,2024),"drame",145678,false);
Livre l8("Paris",A1,"francais",Date(12,05,2024),"drame",145678,true);
Livre l9("Emmanuel Macron",A1,"francais",Date(12,05,2024),"drame",145678,true);
Livre l4("Mon pays",A3,"francais",Date(12,05,2024),"drame",145678,false);
Livre l10("Musique",A2,"francais",Date(12,05,2024),"drame",145678,true);
cortex.AjouterAuteur(A1);
cortex.AjouterAuteur(A2);
cortex.AjouterAuteur(A3);
//Livre livre2("Roman","ginhac","Francais","22/05/2024", "educatif",123564);
cortex.AjouterLivre(l5);
cortex.AjouterLivre(l1);
cortex.AjouterLivre(l2);
cortex.AjouterLivre(l6);
cortex.AjouterLivre(l10);
cortex.AjouterLivre(l9);
cortex.AjouterLivre(l8);
cortex.AjouterLivre(l7);
cortex.AjouterLivre(l3);
cortex.AjouterLivre(l4);


Lecteur lec2("dginhac","Ginhac","Dominique");
Lecteur lec3("jdupont","Dupont","Jean");
Lecteur lec4("dgsmith","Smith","ALice");
cortex.AjouterLecteur(lec1);
cortex.AjouterLecteur(lec2);
cortex.AjouterLecteur(lec3);
cortex.AjouterLecteur(lec4);



cortex.AfficherInventaire();

std::cout << D;
std::cout << "l'annee est " << D.getAnnee() << D.getJour() << D.getMois() << std::endl; 
cortex.EmprunterLivre(12356,"dgsmith");

// cortex.CalculerPourcentageEmprunts();

std::cout << "Statistiques de la bibliotheque :" << std::endl;
std::cout << "Taux d'occupation : " << cortex.CalculerPourcentageEmprunts() << "%" << std::endl;


}