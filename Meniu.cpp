#include "Meniu.h"
#include "Abonat.h"

Singleton::Singleton(){}

Singleton Singleton::getInstance(){
    return instance;
}

void Singleton::startMeniu(){
    Biblioteca b;
    int optiune;
    std::cout<<"Introduceti denumirea bibliotecii: ";
    std::cin>>b;
    std::cout<<"1. Afisati persoanele abonate la biblioteca\n";
    std::cout<<"2. Introduceti un nou abonat\n";
    std::cout<<"3. Afisati numarul de abonati\n";
    std::cout<<"4. Afisati suma totala incasata de catre biblioteca\n";
    std::cout<<"5. Afisati cheltuielile unui abonat\n";
    do{
        std::cin>>optiune;
        if(optiune==1)
            std::cout<<b;
        else if(optiune==2){
            Abonat a;
            std::cin>>a;
            b.adaugaAbonat(a);
        }
        else if(optiune==3){
            std::cout<<b.numarAbonati()<<'\n';
        }
        else if(optiune==4){
            std::cout<<"Suma totala incasata de biblioteca este: "<<b.sumaIncasata()<<" lei\n";
        }
    }while(optiune==1 || optiune==2 || optiune==3 || optiune==4);
}
