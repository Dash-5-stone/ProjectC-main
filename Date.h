#ifndef DATE_H
#define DATE_H

class Date {
    private:
int jour_;
int mois_;
int annee_;

    public:
Date(int jour, int mois, int annee);
bool isDate();
int getJour() const;
void setJour(int jour);
int getMois() const ;
void setMois(int mois) ;
int getAnnee() const;
void setAnnee(int annee);

};

#endif