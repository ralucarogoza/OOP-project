#include "Abonat.h"
#include "Persoana.h"
#include "Abonament.h"
#include "AbonamentPremium.h"


int Abonat::numarAbonati=0;

Abonat::Abonat(std::string nume, std::string prenume, std::string numarTelefon, int varsta, Abonament abonamentAbonat):Persoana(nume, prenume, numarTelefon, varsta) {
    this->abonamentAbonat=&abonamentAbonat;
    numarAbonati++;
}

Abonat::Abonat(const Abonat& a):Persoana(a){
    abonamentAbonat=a.abonamentAbonat;
}

Abonat::Abonat():Persoana(){
    numarAbonati++;
}

Abonat& Abonat::operator=(Abonat a){
    if(this!=&a){
        Persoana::operator=(a);
        abonamentAbonat=a.abonamentAbonat;
    }
    return *this;
}


int Abonat::getNumarAbonati(){
    return this->numarAbonati;
}


std::istream& operator>>(std::istream& is, Abonat& a){
    Persoana* p=&a;
    is>>*p;
    int x;
    /*
    std::cout<<"Alege un abonament:\n";
    std::cout<<"1. Abonament normal\n";
    std::cout<<"2. Abonament premium\n";
    std::cin>>x;
    if(x==2){
        Abonament *b = new AbonamentPremium();
        AbonamentPremium* c;
        try {
            c = dynamic_cast<AbonamentPremium *>(b);
        }
        catch (const std::bad_cast& e) {
            std::cout << e.what();
        }
        is>>*c;
        a.abonamentAbonat=c;
    }
    else if(x==1){
        a.abonamentAbonat = new Abonament;
        is>>*a.abonamentAbonat;
    }
     */
    a.abonamentAbonat = new Abonament;
    is>>*a.abonamentAbonat;
    return is;
}

std::ostream& operator<<(std::ostream& os, Abonat& a){
    Persoana* p=&a;
    os<<*p;
    AbonamentPremium* c;
    c = dynamic_cast<AbonamentPremium*>(a.abonamentAbonat);
    os<<*a.abonamentAbonat;
    if(c!=NULL){
        os<<*c;
    }
    return os;
}


float Abonat::cheltuieliAbonat(){
    Abonament* ab=this->abonamentAbonat;
    AbonamentPremium* c;
    c = dynamic_cast<AbonamentPremium*>(this->abonamentAbonat);
    if(c!=NULL)
        return c->calculeazaAbonament();
    else
        return ab->calculeazaAbonament();
}
/*
void Abonat::adaugaCarte(Carte& c){
    this->adauga(c);
}
 */
