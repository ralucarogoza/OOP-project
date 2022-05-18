#include "AbonamentPremium.h"
#include "Abonament.h"
#include <iostream>


float AbonamentPremium::costSuplimentarCarte=3;


AbonamentPremium::AbonamentPremium(){}

AbonamentPremium::AbonamentPremium(int numarCartiImprumutate, int cartiAditionale):Abonament(numarCartiImprumutate){
    this->cartiAditionale=cartiAditionale;
}

AbonamentPremium::AbonamentPremium(const AbonamentPremium& abp):Abonament(abp){
    cartiAditionale=abp.cartiAditionale;
}

AbonamentPremium& AbonamentPremium::operator=(AbonamentPremium abp){
    if(this!=&abp){
        Abonament::operator=(abp);
        cartiAditionale=abp.cartiAditionale;
    }
    return *this;
}

void AbonamentPremium::setCartiAditionale(int cartiAditionale){
    this->cartiAditionale=cartiAditionale;
}

float AbonamentPremium::getCostSuplimentarCarte(){
    return this->costSuplimentarCarte;
}

int AbonamentPremium::getCartiAditionale(){
    return this->cartiAditionale;
}


std::istream& operator>>(std::istream& is, AbonamentPremium& abp){
    int numarCartiImprumutate;
    std::cout<<"Ati ales un abonament premium\n";
    std::cout<<"Perioada abonamentului: "; std::cout<<abp.getPerioada(); std::cout<<" luni\n";
    std::cout<<"Pretul abonamentului: "; std::cout<<abp.getPret(); std::cout<<" lei\n";
    std::cout<<"Cost suplimentar pentru o carte: "<<abp.costSuplimentarCarte<<" lei\n";
    try{
        std::cout<<"Introduceti numarul de carti imprumutate: "; is>>numarCartiImprumutate; std::cout<<'\n';
        if(abp.getNumarMaximCarti()<numarCartiImprumutate)
            throw numarCartiImprumutate;
    }
    catch(int x){
        std::cout<<"Numarul de carti care pot fi imprumutate este mai mare decat numarul maxim de carti.\n";
        std::cout<<"Reintroduceti numarul de carti imprumutate: "; is>>numarCartiImprumutate; std::cout<<'\n';
    }
    std::cout<<"Introduceti numarul de carti aditionale solicitate: "; is>>abp.cartiAditionale; std::cout<<'\n';

    abp.setNumarCartiImprumutate(numarCartiImprumutate);
    abp.setCartiAditionale(abp.cartiAditionale);
    return is;
}

std::ostream& operator<<(std::ostream& os, AbonamentPremium& abp){
    os<<"Cost suplimentar pentru o carte: "<<abp.costSuplimentarCarte<<" lei\n";
    os<<"Numarul de carti aditionale solicitate: "<<abp.cartiAditionale<<'\n';
    return os;
}


float AbonamentPremium::calculeazaAbonament(){
    float plata=this->getPret()*this->getPerioada()+this->costSuplimentarCarte*this->cartiAditionale;
    return plata;
}


