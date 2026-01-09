#include "Emprunt.h"
#include "Date.h"
#include <assert.h>

#include <iostream>

Emprunt::Emprunt(const Date& dateEmprunt, int isbnLivre, std::string identifiantLecteur):dateEmprunt_(dateEmprunt), isbnLivre_(isbnLivre), identifiantLecteur_(identifiantLecteur){
   if(!dateEmprunt_.isDate()){
        std::cout << "Votre date est invalide";
    }
   
};

Date Emprunt::getDateEmprunt() const{
    return dateEmprunt_;
}
int Emprunt::getIsbnLivre() const{
    return isbnLivre_;
}
void Emprunt::setIsbnLivre(int isbnLivre) {
    isbnLivre_=isbnLivre;
  
}
std::string Emprunt::getIdentifiantLecteur() const{
    return identifiantLecteur_;
}
void Emprunt::setDateEmprunt(const Date& dateEmprunt){
    dateEmprunt_=dateEmprunt;
}
void Emprunt::setIdentifiantLecteur(std::string identifiantLecteur) {
    identifiantLecteur_=identifiantLecteur;
    
}


