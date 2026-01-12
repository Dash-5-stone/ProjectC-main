#include "Livre.h"
#include "Auteur.h"
#include "Date.h"
#include <iostream>


Livre::Livre(std::string titre, Auteur& auteur, std::string langue,Date datePublication, std::string genre, int isbn, bool disponibilite=true):titre_(titre),auteur_(auteur),langue_(langue),datePublication_(datePublication),genre_(genre),isbn_(isbn),disponibilite_(disponibilite){
};
std::string Livre::getTitre() const {
    return titre_;
}
Auteur Livre::getAuteur() const {
    return auteur_;
}
std::string Livre::getLangue() const {
    return langue_;
}
void Livre::setTitre(std::string titre) {
    titre_=titre;
    
}
const std::vector<std::string>&  Livre::getIdentifiantEmprunteur() const {
return identifiantEmprunteur_;
}
std::vector<std::string>&  Livre::getIdentifiantEmprunteur() {
return identifiantEmprunteur_;
}




// std::string Livre::setAuteur(std::string auteur) {
//     auteur_=auteur;
// }
void Livre::setDisponibilite(bool disponibilite){
    disponibilite_=disponibilite;
}

bool Livre::getDisponibilite() const{
    return disponibilite_;
}
int Livre::getIsbn() const{
    return isbn_;
}
void Livre::setIsbn(int isbn) {
    isbn_=isbn;
   
}
void Livre::setGenre(std::string genre){
    genre_=genre;
   
}
std::string Livre::getGenre() const{
    return genre_;
}
void Livre::setLangue(std::string langue){
    langue_=langue;
   
}
std::ostream& operator<<(std::ostream& os, const Livre& livre){
    os << " Titre: " << livre.titre_ << " Auteur: " << livre.auteur_ << " Langue : " << livre.langue_ 
    << " Date de publication: " << livre.datePublication_.getJour() << "/" << livre.datePublication_.getMois() << "/" << livre.datePublication_.getAnnee() << " Genre : " << livre.genre_  << " ISBN: "<< livre.isbn_ << " Disponibilite: " ; 
    if(livre.disponibilite_){os << " Disponible ";}else{ os << " Non disponible ";}
    return os;
}

