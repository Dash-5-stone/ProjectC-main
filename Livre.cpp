#include "Livre.h"
#include "Auteur.h"



Livre::Livre(std::string titre, Auteur& auteur, std::string langue,Date datePublication, std::string genre, int isbn, bool disponibilite=true):titre_(titre),auteur_(auteur),langue_(langue),genre_(genre),datePublication_(datePublication),disponibilite_(disponibilite){
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
std::string Livre::setTitre(std::string titre) {
    titre_=titre;
    
}
std::vector<std::string>  Livre::getIdentifiantEmprunteur() const {
return identifiantEmprunteur_;
}
// std::string Livre::setAuteur(std::string auteur) {
//     auteur_=auteur;
// }
bool Livre::setDisponibilite(bool disponibilite){
    disponibilite_=disponibilite;
    
}

bool Livre::getDisponibilite() const{
    return disponibilite_;
}
int Livre::getIsbn() const{
    return isbn_;
}
int Livre::setIsbn(int isbn) {
    isbn_=isbn;
   
}
std::string Livre::setGenre(std::string genre){
    genre_=genre;
   
}
std::string Livre::getGenre() const{
    return genre_;
}
std::string Livre::setLangue(std::string langue){
    langue_=langue;
   
}


