#ifndef BIBLIOTHEQUE_
#define BIBLIOTHEQUE_
#include <vector>
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Auteur.h"
class Bibliotheque{
private:
std::vector<Auteur> auteurs_;
std::vector<Livre> livres_;
std::vector<Lecteur> lecteurs_;
std::vector<Emprunt> emprunts_;

std::string nom_;

public:
Bibliotheque();
void AjouterAuteur(const Auteur& auteur);
void AjouterLivre(const Livre& livre);
void AjouterLecteur(const Lecteur& lecteur) ;
void EmprunterLivre(std::string identifiant, int isbnLivre, Date emprunt);
void RetournerLivreEmprunter(const Livre& livre);
void RechercherLivre(int identifiant) const;


};

#endif