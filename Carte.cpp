//
// Created by Calin on 18-May-22.
//
#include "Carte.h"

Carte::Carte(std::string denumire,std::string nume_autor,std::string prenume_autor, unsigned int nr_pagini, unsigned int an, float pret, unsigned int rating)
{
    this->denumire=denumire;
    this->nume_autor=nume_autor;
    this->prenume_autor=prenume_autor;
    this->nr_pagini=nr_pagini;
    this->an=an;
    this->pret=pret;
    this->rating=rating;
}

Carte::Carte(const Carte& c)
{
    denumire=c.denumire;
    nume_autor=c.nume_autor;
    prenume_autor=c.prenume_autor;
    nr_pagini=c.nr_pagini;
    an=c.an;
    pret=c.pret;
    rating=c.rating;
}

Carte::Carte() {}



void Carte::setDenumire(std::string denumire)
{
    this->denumire=denumire;
}

void Carte::setNume_Autor(std::string nume_autor)
{
    this->nume_autor=nume_autor;
}

void Carte::setPrenume_Autor(std::string prenume_autor)
{
    this->prenume_autor=prenume_autor;
}

void Carte::setNr_Pagini(unsigned int nr_pagini)
{
    this->nr_pagini=nr_pagini;
}

void Carte::setAn(unsigned int an)
{
    this->an=an;
}

void Carte::setPret(float pret)
{
    this->pret=pret;
}

void Carte::setRating(unsigned int rating)
{
    this->rating=rating;
}

std::string Carte::getDenumire()
{
    return this->denumire;
}

std::string Carte::getNume_Autor()
{
    return this->nume_autor;
}

std::string Carte::getPrenume_Autor()
{
    return this->prenume_autor;
}

unsigned int Carte::getNr_Pagini()
{
    return this->nr_pagini;
}

unsigned int Carte::getAn()
{
    return this->an;
}

float Carte::getPret()
{
    return this->pret;
}

unsigned int Carte::getRating()
{
    return this->rating;
}

std::istream& operator>>(std::istream& is, Carte& c)
{
    std::cout<<"Denumire: ";
    is>>c.denumire;
    std::cout<<'\n';
    std::cout<<"Nume autor: ";
    is>>c.nume_autor;
    std::cout<<"\nPrenume autor: ";
    is>>c.prenume_autor;
    std::cout<<"\nNumar pagini: ";
    is>>c.nr_pagini;
    std::cout<<"\nAnul publicarii cartii: ";
    is>>c.an;
    std::cout<<"\nPret: ";
    is>>c.pret;
    std::cout<<"\nRating: ";
    is>>c.rating;
    return is;
}

std::ostream& operator<<(std::ostream& os, Carte& c)
{
    std::cout<<"Denumire: ";
    os<<c.denumire<<'\n';
    std::cout<<"Nume autor: ";
    os<<c.nume_autor<<'\n';
    std::cout<<"Prenume autor: ";
    os<<c.prenume_autor<<'\n';
    std::cout<<"Numar pagini: ";
    os<<c.nr_pagini<<'\n';
    std::cout<<"Anul publicarii cartii: ";
    os<<c.an<<'\n';
    std::cout<<"Pret: ";
    os<<c.pret<<'\n';
    std::cout<<"Rating: ";
    os<<c.rating<<'\n';
    return os;
}

bool operator==(Carte& c1, Carte& c2)
{
    return c1.denumire==c2.denumire && c1.nume_autor==c2.nume_autor && c1.prenume_autor==c2.prenume_autor && c1.pret==c2.pret;
}

bool operator!=(Carte& c1, Carte& c2)
{
    return c1.nume_autor!=c2.nume_autor || c1.prenume_autor!=c2.prenume_autor;
}

Carte operator+=(Carte& c1,int scumpire)
{
    c1.pret+=scumpire;
    return c1;
}

Carte operator-=(Carte& c1,int ieftinire)
{
    c1.pret-=ieftinire;
    return c1;
}

Carte operator+(Carte& c1,int scumpire)
{
    c1.pret=c1.pret+scumpire;
    return c1;
}

Carte operator-(Carte& c1,int ieftinire)
{
    c1.pret=c1.pret-ieftinire;
    return c1;
}


void Carte::actualizareRating(unsigned int rating_nou)
{
    this->rating=(this->rating+rating_nou)/2;
}

void Carte::carteMaiBuna(Carte &c2)
{
    if(this->rating==c2.rating) std::cout<<"Cartile '"<<this->denumire<<"' de "<<this->nume_autor<<" "<<this->prenume_autor<<" si '"<<c2.denumire<<"' de "<<c2.nume_autor<<" "<<c2.prenume_autor<< " sunt la fel de bune.";
    else if(this->rating>c2.rating) std::cout<<"Cartea '"<<this->denumire<<"' scrisa de "<<this->nume_autor<<" "<<this->prenume_autor<< " este mai buna decat cartea '"<<c2.denumire<<"' scrisa de "<<c2.nume_autor<<" "<<c2.prenume_autor<<".";
    else std::cout<<"Cartea '"<<c2.denumire<<"' scrisa de "<<c2.nume_autor<<" "<<c2.prenume_autor<<" este mai buna decat cartea '"<<this->denumire<<"' scrisa de "<<this->nume_autor<<" "<<this->prenume_autor<<".";
}

void Carte::carteMaiLunga(Carte &c2)
{
    if(this->nr_pagini==c2.nr_pagini) std::cout<<"Cartile '"<<this->denumire<<"' de "<<this->nume_autor<<" "<<this->prenume_autor<<" si '"<<c2.denumire<<"' de "<<c2.nume_autor<<" "<<c2.prenume_autor<< " sunt la fel de lungi.";
    else if(this->nr_pagini>c2.nr_pagini) std::cout<<"Cartea '"<<this->denumire<<"' scrisa de "<<this->nume_autor<<" "<<this->prenume_autor<< " este mai lunga decat cartea '"<<c2.denumire<<"' scrisa de "<<c2.nume_autor<<" "<<c2.prenume_autor<<".";
    else std::cout<<"Cartea '"<<c2.denumire<<"' scrisa de "<<c2.nume_autor<<" "<<c2.prenume_autor<<" este mai lunga decat cartea '"<<this->denumire<<"' scrisa de "<<this->nume_autor<<" "<<this->prenume_autor<<".";
}

void Carte::scumpire(float p)
{
    this->pret=this->pret+(float)this->pret*p/100;
}

void Carte::ieftinire(float p)
{
    this->pret=this->pret-(float)this->pret*p/100;
}

void Carte::vechime()
{
    std::cout<<"Cartea '"<<this->denumire<<"' scrisa de "<<this->nume_autor<<" "<<this->prenume_autor<<" are o vechime de "<<2022-this->an<<" ani."<<'\n';
}

int Carte::promotie(Carte& c2)
{
    if(this->nume_autor==c2.nume_autor && this->prenume_autor==c2.prenume_autor)
        if(this->pret>c2.pret) return this->pret;
        else return c2.pret;
    else return 0;
}

