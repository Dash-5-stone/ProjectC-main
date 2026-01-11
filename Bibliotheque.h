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
std::vector<Livre> getLivres_() const;
std::vector<Auteur> getAuteurs_() const;

void AjouterAuteur(const Auteur& auteur);
void AjouterLivre(const Livre& livre);
void AjouterLecteur(const Lecteur& lecteur) ;
void EmprunterLivre( int isbnLivre, std::string identifiant);
void RetournerLivreEmprunter(int isbn,  std::string& identifiant);
void RechercherLivre(int identifiant) const;
void AfficherInventaire();

double CalculerPourcentageEmprunts() const;


void AfficherClassementLecteurs();

};

#endif