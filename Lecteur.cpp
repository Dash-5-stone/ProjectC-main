#include "Lecteur.h"
#include <iostream>

Lecteur::Lecteur(std::string identifiant, std::string nom,std::string prenom):identifiant_(identifiant),nom_(nom),prenom_(prenom){};

std::string Lecteur::getIdentifiant() const{
    return identifiant_;
}

std::vector<int>& Lecteur::getIsbnEmprunter() {
    return isbnEmprunter_;
}
void Lecteur::setIsbnEmprunter(int isbnEmprunter){
    // Corrige l'affectation: on ajoute l'ISBN au vecteur et on retourne le vecteur
    isbnEmprunter_.push_back(isbnEmprunter);
   
}

std::string Lecteur::getNom() const{
    return nom_;
}
std::string Lecteur::getPrenom() const{
    return prenom_;
}
void Lecteur::setNom(std::string nom){
    nom_=nom;
}

void Lecteur::setIdentifiant(std::string identifiant){
    identifiant_=identifiant;
}
void Lecteur::setPrenom(std::string prenom){
    prenom_=prenom;
}
std::ostream& operator<<(std::ostream& os, const Lecteur& lecteur){
    os << "ID: " << lecteur.identifiant_ 
    << "Nom: " << lecteur.nom_    
    << "Prenom: " << lecteur.prenom_   << "Les livres emprunter : " ;
    if(lecteur.isbnEmprunter_.empty()){
        std::cout << "Aucun" << std::endl;
    } 
    else{
           for (size_t i = 0; i < lecteur.isbnEmprunter_.size(); i++)
           {
            os << lecteur.isbnEmprunter_[i];
           }      
    }   
    return os;

}  