#include <iostream>
#include "Date.h"
#include <assert.h>

Date::Date(int jour, int mois, int annee):jour_(jour),mois_(mois),annee_(annee){ 
}
bool Date::isDate(){
    if ((jour_ < 1) || (jour_ > 31)) return false; 
    if ((mois_ < 1) || (mois_ > 12)) return false; 
    if ((mois_ == 2) && (jour_ > 28)) return false; 
    if (((mois_ == 4) || (mois_ == 6)  || (mois_ == 9) || (mois_ == 11)) && (jour_ > 30)) return false; 
    if(annee_ <= 0) return false;
    return true; 
};

int Date::getAnnee() const{
     return annee_;
}
int Date::getJour() const{
     return jour_;
}
int Date::getMois() const{
     return mois_;
}
void Date::setMois(int mois){
     mois_=mois;
   
}
void Date::setJour(int jour){
     jour_=jour;
    
}
void Date::setAnnee(int annee){
     annee_=annee;
     
}
std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.jour_ << "/" << date.mois_ << "/" << date.annee_;
    return os;
}