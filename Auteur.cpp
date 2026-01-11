#include "Auteur.h"
#include <iostream>
#include <string>

Auteur::Auteur(int id, std::string nom):identifiant_(id),nom_(nom){};
std::string Auteur::getNom() const{
    return nom_;
}
int Auteur::getIdentifiant() const{
    return identifiant_;
}
std::ostream& operator<<(std::ostream& os, const Auteur& auteur){
os << auteur.nom_ << "(ID :" << auteur.identifiant_ << ")";
return os;

}