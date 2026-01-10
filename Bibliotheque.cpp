#include "Bibliotheque.h"
#include "Livre.h"
#include <iostream>

std::vector<Livre> Bibliotheque::getLivres_() const {
 return livres_;
};
std::vector<Auteur> Bibliotheque::getAuteurs_() const {
return auteurs_;
}
void Bibliotheque::AjouterAuteur(const Auteur& auteur){
 auteurs_.push_back(auteur);}
void Bibliotheque::AjouterLivre(const Livre& livre){
    livres_.push_back(livre);}

void Bibliotheque::AjouterLecteur(const Lecteur& lecteur){
    lecteurs_.push_back(lecteur);
}
void Bibliotheque::RechercherLivre(int identifiant) const {
    for(const Livre& l: livres_ ){
        if (l.getAuteur().getIdentifiant()==identifiant)
        {
           std::cout << l.getAuteur().getNom() << ' ' << l.getTitre() << std::endl;
        }
        else{
            std::cout << "Aucun livre n'a ete trouve.";
        }
            }
         }

void Bibliotheque::EmprunterLivre(int isbn, std::string& identifiant) {
    for(Livre& livre: livres_){
        if(livre.getIsbn()==isbn && livre.getDisponibilite()){
            livre.getIdentifiantEmprunteur().push_back(identifiant);
            std::cout <<  identifiant << " a emprunte le livre" << std::endl;
            livre.setDisponibilite(false);
        }
        else{
             std::cout << "vous ne pouvez pas emprunter le livre" <<std::endl;
            
        }
    }
}

void Bibliotheque::RetournerLivreEmprunter(int isbn, const std::string& identifiant){


}