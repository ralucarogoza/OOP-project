//
// Created by Calin on 18-May-22.
//

#ifndef PROIECT3_CARTE_H
#define PROIECT3_CARTE_H
#include <iostream>
class Carte{
public:
    Carte(std::string denumire,std::string nume_autor,std::string prenume_autor, unsigned int nr_pagini, unsigned int an, float pret, unsigned int rating);
    Carte(const Carte&);
    Carte();
    void setDenumire(std::string);
    void setNume_Autor(std::string);
    void setPrenume_Autor(std::string);
    void setNr_Pagini(unsigned int);
    void setAn(unsigned int);
    void setPret(float);
    void setRating(unsigned int);
    std::string getDenumire();
    std::string getNume_Autor();
    std::string getPrenume_Autor();
    unsigned int getNr_Pagini();
    unsigned int getAn();
    float getPret();
    unsigned int getRating();
    friend bool operator==(Carte&, Carte&);
    friend bool operator!=(Carte&, Carte&);
    friend Carte operator+=(Carte&, int );
    friend Carte operator-=(Carte&, int );
    friend Carte operator+(Carte&, int );
    friend Carte operator-(Carte&, int );
    friend std::istream& operator>>(std::istream&, Carte&);
    friend std::ostream& operator<<(std::ostream&, Carte&);
    void actualizareRating(unsigned int);
    void carteMaiBuna(Carte&);
    void carteMaiLunga(Carte&);
    int promotie(Carte&);
    void scumpire(float);
    void ieftinire(float);
    void vechime();
private:
    std::string denumire;
    std::string nume_autor;
    std::string prenume_autor;
    unsigned int nr_pagini;
    unsigned int an;
    float pret;
    unsigned int rating;
};

#endif //PROIECT3_CARTE_H
