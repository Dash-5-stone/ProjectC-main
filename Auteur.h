#ifndef AUTEUR_H
#define AUTEUR_H
#include <string>

class Auteur
{
private:
     std::string nom_;
     int identifiant_;
public:
    Auteur(int identifiant_ , std::string nom);
    std::string getNom() const;
    int getIdentifiant() const;
 
    
};







#endif