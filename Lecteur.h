#ifndef LECTEUR_H
#define LECTEUR_H
#include <string>
#include <vector>
#include <iostream>
class Lecteur{
    private:
std::string identifiant_;
std::string nom_;
std::string prenom_;
std::vector<int> isbnEmprunter_;

    public:
    Lecteur(std::string identifiant, std::string nom,std::string prenom);
   void setIdentifiant(std::string identifiant);
    std::string getIdentifiant() const;
    std::string getNom() const;
    std::string getPrenom() const;
   void setNom(std::string nom);
   void setPrenom(std::string prenom);
    std::vector<int>& getIsbnEmprunter() ;
    void setIsbnEmprunter(int isbn);
friend std::ostream& operator<<(std::ostream& os, const Lecteur& lecteur);

};

#endif