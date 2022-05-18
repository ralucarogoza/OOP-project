#ifndef _BIBLIOTECA_H
#define _BIBLIOTECA_H
#include <iostream>
#include <vector>
#include "Abonat.h"
#include "Repository.h"

class Biblioteca: public Repository<Abonat>{
public:
    Biblioteca();
    Biblioteca(std::string, std::vector <Abonat>);
    //Biblioteca(const Biblioteca&);
    Biblioteca& operator=(Biblioteca&);
    ~Biblioteca();
    void setDenumireBiblioteca(std::string);
    std::string getDenumireBiblioteca();
    friend std::istream& operator>>(std::istream&, Biblioteca&);
    friend std::ostream& operator<<(std::ostream&, Biblioteca&);
    void adaugaAbonat(Abonat&);
    void costAbonat(int);
    float sumaIncasata();
    int numarAbonati();
private:
    std::string denumire;
    //std::vector <Abonat> abonati;
};


#endif //_BIBLIOTECA_H
