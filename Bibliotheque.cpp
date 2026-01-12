#include "Bibliotheque.h"
#include "Livre.h"
#include <iostream>

Bibliotheque::Bibliotheque() {}

std::vector<Livre> Bibliotheque::getLivres_() const {
 return livres_;
}

std::vector<Auteur> Bibliotheque::getAuteurs_() const {
return auteurs_;
}

void Bibliotheque::AjouterAuteur(const Auteur& auteur){
 auteurs_.push_back(auteur);
}

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

void Bibliotheque::EmprunterLivre(int isbn, std::string identifiant) {
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

void Bibliotheque::RetournerLivreEmprunter(int isbn, std::string& identifiant){
for(Livre& livre: livres_){
    if(livre.getIsbn()==isbn && livre.getDisponibilite() && livre.getIdentifiantEmprunteur().back()==identifiant){
        livre.setDisponibilite(true);
        std::cout << "le livre est restitue avec succes !" << std::endl;

    }else{
        std::cout << " ERREUR: vous ne pouvez pas restituer ce livre" << std::endl;
    }
}

}

void Bibliotheque::AfficherInventaire(){
for (const auto& livre : livres_) {       
        std::cout << livre << std::endl;
    }
}


double Bibliotheque::CalculerPourcentageEmprunts() const {
    if (livres_.empty()) {
        return 0.0; 
    }

    int compteurEmprunts = 0;

    for (const Livre& l : livres_) {
       
        if (!l.getDisponibilite()) {
            compteurEmprunts++;
        }     
    }

    return (static_cast<double>(compteurEmprunts) / livres_.size()) * 100.0;
}


void Bibliotheque::AfficherClassementLecteurs() {
 
    std::vector<Lecteur> listeTriee = lecteurs_;
    int n = listeTriee.size();

  
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (listeTriee[j].getIsbnEmprunter().size() < listeTriee[j + 1].getIsbnEmprunter().size()) {
               
                Lecteur tmp = listeTriee[j];
                listeTriee[j] = listeTriee[j + 1];
                listeTriee[j + 1] = tmp;
            }
        }
    }
}