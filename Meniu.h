#ifndef PROIECT_MENIU_H
#define PROIECT_MENIU_H
#include "Biblioteca.h"


class Singleton{
public:
    static Singleton getInstance();
    void startMeniu();
private:
    static Singleton instance;
    Singleton();
};


#endif //PROIECT_MENIU_H
