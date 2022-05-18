#ifndef _ABONAT_H
#define _ABONAT_H
#include <iostream>
#include "Abonament.h"
#include "Persoana.h"
#include "AbonamentPremium.h"
#include "Carte.h"
#include <iostream>
#include <vector>
#include "Repository.h"

class Abonat: public Persoana{
public:
    Abonat();
    Abonat(std::string, std::string, std::string, int, Abonament);
    Abonat(const Abonat&);
    Abonat& operator=(Abonat);
    int getNumarAbonati();
    float cheltuieliAbonat();
    //void adaugaCarte(Carte&);
    friend std::istream& operator>>(std::istream&, Abonat&);
    friend std::ostream& operator<<(std::ostream&, Abonat&);
private:
    Abonament* abonamentAbonat;
    static int numarAbonati;
};


#endif //_ABONAT_H
