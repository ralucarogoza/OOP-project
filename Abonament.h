#ifndef _ABONAMENT_H
#define _ABONAMENT_H
#include <iostream>
#include "Repository.h"
#include "Carte.h"
class Abonament: public Repository<Carte>{
public:
    Abonament();
    Abonament(int);
    Abonament(const Abonament&);
    Abonament& operator=(const Abonament&);
    void setNumarCartiImprumutate(int);
    int getPerioada();
    float getPret();
    int getNumarMaximCarti();
    int getNumarCartiImprumutate();
    friend std::istream& operator>>(std::istream&, Abonament&);
    friend std::ostream& operator<<(std::ostream&, Abonament&);
    virtual float calculeazaAbonament();
    virtual void adaugaCarte(Carte&);
private:
    static int perioada; //numar de luni
    static float pret; //pretul pe luna
    static int numarMaximCarti;
    int numarCartiImprumutate;
};


#endif //_ABONAMENT_H
