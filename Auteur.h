#ifndef AUTEUR_H
#define AUTEUR_H
#include <string>
#include <iostream>
class Auteur
{
private:
    int identifiant_;
    std::string nom_;
    
public:
    Auteur(int identifiant, std::string nom);
    std::string getNom() const;
    int getIdentifiant() const;
 friend std::ostream& operator<<(std::ostream& os, const Auteur& auteur);
    
};







#endif