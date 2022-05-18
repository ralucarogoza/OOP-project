#include <iostream>
#include <vector>
#include "Biblioteca.h"
#include "Abonat.h"
#include "Repository.h"


Biblioteca::Biblioteca(){}

Biblioteca::Biblioteca(std::string denumire, std::vector<Abonat> abonati){
    this->denumire=denumire;
    this->mEntities=abonati;
}

/*
Biblioteca::Biblioteca(const Biblioteca& b){
    denumire=b.denumire;
    for(Abonat a: b.mEntities){
        abonati.push_back(a);
    }
}
 */

Biblioteca::~Biblioteca(){
    this->mEntities.clear();
}

Biblioteca& Biblioteca::operator=(Biblioteca& b){
    if(this!=&b){
        denumire=b.denumire;
        mEntities=b.mEntities;
    }
    return *this;
}


void Biblioteca::setDenumireBiblioteca(std::string denumire){
    this->denumire=denumire;
}

std::string Biblioteca::getDenumireBiblioteca() {
    return this->denumire;
}

std::istream& operator>>(std::istream& is, Biblioteca& b){
    is>>b.denumire;
    std::cout<<'\n';
    b.setDenumireBiblioteca(b.denumire);
    return is;
}


std::ostream& operator<<(std::ostream& os, Biblioteca& b) {
    int i=1;
    os<<"Denumire biblioteca: "<<b.denumire<<'\n';
    if(b.mEntities.size()==0)
        os<<"Nu exista niciun abonat\n";
    for(Abonat a: b.mEntities){
        std::cout<<"Abonatul "<<i<<":\n";
        i++;
        os<<a<<'\n';
    }
    return os;
}

void Biblioteca::adaugaAbonat(Abonat& a){
    this->adauga(a);
}

/*
void Biblioteca::stergeAbonat(Abonat& a){
    this->sterge(a);
}
 */

int Biblioteca::numarAbonati(){
    Abonat* a;
    return a->getNumarAbonati();
}

float Biblioteca::sumaIncasata(){
    float s=0;
    for(Abonat a: this->mEntities)
        s=s+a.cheltuieliAbonat();
    return s;
}

void Biblioteca::costAbonat(int i){
    this->getEntity(i).cheltuieliAbonat();
}
