#include "Bibliotheque.h"
#include "Livre.h"
#include <iostream>


void Bibliotheque::AjouterAuteur(const Auteur& auteur){
 auteurs_.push_back(auteur);}
void Bibliotheque::AjouterLivre(const Livre& livre){
    livres_.push_back(livre);}

void Bibliotheque::AjouterLecteur(const Lecteur& lecteur){
    lecteurs_.push_back(lecteur);
}
// void Bibliotheque::RechercherLivre(int identifiant) const {
//     for(const Livre& l: livres_ ){
//         if (l.getAuteur().getIdentifiant()==identifiant)
//         {
//            std::cout << l.getAuteur() << l.getTitre() << std::endl;
//         }
        
//     }
// }
// void EmprunterLivre(std::string identifiant, int isbn, Date emprunt){
//     for(Livre& livre: livres_){
//         if(livre.getIsbn()==isbn && livre.getDisponibilite()){
//             std::cout << "vous pouvez emprunter le livre" <<std::endl;
//             livre.setDisponibilite(false);
//         }
//         else{
//              std::cout << "vous ne pouvez pas emprunter le livre" <<std::endl;
            
//         }
//     }
// }

void RetournerLivreEmprunter(){

}