#ifndef LIVRE_H
#define LIVRE_H
#include "Date.h"
#include "Auteur.h"
#include "Lecteur.h"
#include <string>
#include <vector>
#include <iostream>
class Livre {
private:
std::string titre_;
Auteur& auteur_;
std::string langue_;
Date datePublication_;
std::string genre_;
int isbn_;

bool disponibilite_;
std::vector<std::string> identifiantEmprunteur_;


public:
Livre(std::string titre, Auteur& auteur, std::string langue,Date datePublication, std::string genre, int isbn, bool disponibilite);
//Livre();
// std::vector<std::string>  getIdentifiantEmprunteur() const ;
std::vector<std::string>& getIdentifiantEmprunteur();

const std::vector<std::string>& getIdentifiantEmprunteur() const;
std::string getTitre() const;
void setTitre(std::string titre);
Auteur getAuteur() const;
std::string getLangue() const;
std::string getGenre() const;
void setLangue(std::string langue);
void setGenre(std::string genre);
void setAuteur(std::string auteur);
int getIsbn() const;
void setIsbn(int isbn);
bool getDisponibilite() const;
void setDisponibilite(bool disponibilite);
friend std::ostream& operator<<(std::ostream& os, const Livre& livre);

};



#endif