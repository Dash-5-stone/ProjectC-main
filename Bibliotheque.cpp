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


void Bibliotheque::RechercherLivreParLecteur(std::string identifiant) {

    std::cout << "Livres actuellement detenus par [" << identifiant << "] :" << std::endl;

    for (const Livre& livre : livres_) {

        const std::vector<std::string>& historique = livre.getIdentifiantEmprunteur();
        
        if (!livre.getDisponibilite() && !historique.empty()) {

            if (historique.back() == identifiant) {
                std::cout << "- " << livre.getTitre() << " (ISBN: " << livre.getIsbn() << ")" << std::endl;
                
            }
        }
    }
}

void Bibliotheque::EmprunterLivre(int isbn, std::string identifiant) {
    for(Livre& livre: livres_){
        if(livre.getIsbn()==isbn){
        if(livre.getDisponibilite()){
            livre.getIdentifiantEmprunteur().push_back(identifiant);
            
            livre.setDisponibilite(false);
        
        for (Lecteur& lecteur : lecteurs_) {
                if (lecteur.getIdentifiant() == identifiant) {
                        lecteur.getIsbnEmprunter().push_back(isbn);
                    }
                }
        
             std::cout << "Succes : " << identifiant << " a emprunte \"" << livre.getTitre() << "\"" << std::endl;
                return; 
            } else {
                std::cout << "Erreur : Le livre est deja emprunte." << std::endl;
                return;
            
            }  
        } 
    }
    std::cout << "Erreur : Aucun livre avec l'ISBN " << isbn << " n'existe dans la bibliotheque." << std::endl;
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
        for (int j = 0; j < n -1; j++) {
            if (listeTriee[j].getIsbnEmprunter().size() < listeTriee[j + 1].getIsbnEmprunter().size()) {
               
                Lecteur tmp = listeTriee[j];
                listeTriee[j] = listeTriee[j + 1];
                listeTriee[j + 1] = tmp;
            }
        }
    }
    std::cout << "- CLASSEMENT DES LECTEURS -" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << i + 1 << ". " << listeTriee[i].getNom() 
        << " (" << listeTriee[i].getIsbnEmprunter().size() << " livres)" << std::endl;
    }
}