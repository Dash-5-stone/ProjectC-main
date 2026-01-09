#ifndef LIVRE_H
#define LIVRE_H
#include "Date.h"
#include "Auteur.h"
#include <string>
#include <vector>

class Livre {
private:
std::string titre_;
Auteur& auteur_;
std::string genre_ ;
Date datePublication_;
int isbn_;
std::string langue_;
bool disponibilite_;
std::vector<std::string> identifiantEmprunteur_;


public:
Livre(std::string titre, Auteur& auteur, std::string langue,Date datePublication, std::string genre, int isbn, bool disponibilite);
//Livre();
std::string getTitre() const;
std::string setTitre(std::string titre);
Auteur getAuteur() const;
std::string getLangue() const;
std::string getGenre() const;
std::string setLangue(std::string langue);
std::string setGenre(std::string genre);
std::string setAuteur(std::string auteur);
int getIsbn() const;
int setIsbn(int isbn);
bool getDisponibilite() const;
bool setDisponibilite(bool disponibilite);


};



#endif