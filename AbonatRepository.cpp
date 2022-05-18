#include "AbonatRepository.h"
/*
Abonat* AbonatRepository::cautaNume(std::string nume){
    for(int i=0; i<mEntities.size(); i++) {
        if(mEntities[i]->getNume()==nume)
            return mEntities[i];
    }
    throw std::runtime_error("Last name could not be found");
}

Abonat* AbonatRepository::cautaPrenume(std::string prenume){
    for(int i=0; i<mEntities.size(); i++) {
        if(mEntities[i]->getPrenume()==prenume)
            return mEntities[i];
    }
    throw std::runtime_error("Last name could not be found");
}

Abonat* AbonatRepository::cautaNumarTelefon(std::string numarTelefon){
    for(int i=0; i<mEntities.size(); i++) {
        if(mEntities[i]->getNumarTelefon()==numarTelefon)
            return mEntities[i];
    }
    throw std::runtime_error("Last name could not be found");
}

Abonat* AbonatRepository::cautaNumePrenume(std::string nume, std::string prenume){
    for(int i=0; i<mEntities.size(); i++) {
        if(mEntities[i]->getNume()==nume && mEntities[i]->getPrenume()==prenume)
            return mEntities[i];
    }
    throw std::runtime_error("Last name could not be found");
}

std::vector<Abonat*> AbonatRepository::cautaVarsta(int varsta){
    std::vector<Abonat*> abonati;
    for(int i = 0; i < mEntities.size(); i++) {
        try {
            if (mEntities[i]->getVarsta()==varsta)
                abonati.push_back(mEntities[i]);
        } catch (std::runtime_error) {}
    }
    if (abonati.size() != 0)
        return abonati;
    throw std::runtime_error("Persons with this role could not be found!");
}

long AbonatRepository::size() {
    return mEntities.size();
}
 */