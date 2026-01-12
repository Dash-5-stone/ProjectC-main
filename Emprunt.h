#ifndef EMPRUNT_H
#define EMPRUNT_H
#include "Date.h"
#include <string>
#include <iostream>
class Emprunt {
    private:
Date dateEmprunt_;
int isbnLivre_;
std::string identifiantLecteur_;

    public:
Emprunt(const Date& dateEmprunt, int isbnLivre, std::string identifiantLecteur);
Date getDateEmprunt() const;
int getIsbnLivre() const;
void setIsbnLivre(int isbnLivre);
void setIdentifiantLecteur(std::string identifiantLecteur);
std::string getIdentifiantLecteur() const;
void setDateEmprunt(const Date& dateEmprunt);
Date getDateRetour() const;
void setDateRetour();


};

#endif