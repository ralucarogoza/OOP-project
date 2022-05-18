#include "Persoana.h"
#include <iostream>


Persoana::Persoana(){}

Persoana::Persoana(std::string nume, std::string prenume, std::string numarTelefon, int varsta)
{
    this->nume=nume;
    this->prenume=prenume;
    this->numarTelefon=numarTelefon;
    this->varsta=varsta;
}

Persoana::Persoana(const Persoana& p) {
    nume=p.nume;
    prenume=p.prenume;
    numarTelefon=p.numarTelefon;
    varsta=p.varsta;
}

Persoana& Persoana::operator=(Persoana& p){
    if (this!=&p){
        nume=p.nume;
        prenume=p.prenume;
        numarTelefon=p.numarTelefon;
        varsta=p.varsta;
    }
    return *this;
}

void Persoana::setNume(std::string nume){
    this->nume=nume;
}
void Persoana::setPrenume(std::string prenume){
    this->prenume=prenume;
}
void Persoana::setNumarTelefon(std::string numarTelefon){
    this->numarTelefon=numarTelefon;
}
void Persoana::setVarsta(int varsta){
    this->varsta=varsta;
}

std::string Persoana::getNume(){
    return this->nume;
}
std::string Persoana::getPrenume(){
    return this->prenume;
}
std::string Persoana::getNumarTelefon(){
    return this->numarTelefon;
}
int Persoana::getVarsta(){
    return this->varsta;
}


std::istream& operator>>(std::istream& is, Persoana& p){
    std::cout<<"Introduceti numele: "; is>>p.nume; std::cout<<'\n';
    std::cout<<"Introduceti prenumele: "; is>>p.prenume; std::cout<<'\n';
    std::cout<<"Introduceti numarul de telefon: ";is>>p.numarTelefon;std::cout<<'\n';
    std::cout<<"Introduceti varsta: "; is>>p.varsta; std::cout<<'\n';
    p.setNume(p.nume);
    p.setPrenume(p.prenume);
    p.setNumarTelefon(p.numarTelefon);
    p.setVarsta(p.varsta);
    return is;
}

std::ostream& operator<<(std::ostream& os, Persoana& p){
    os<<"Nume: "<<p.nume<<'\n';
    os<<"Prenume: "<<p.prenume<<'\n';
    os<<"Numar de telefon: "<<p.numarTelefon<<'\n';
    os<<"Varsta: "<<p.varsta<<'\n';
    return os;
}