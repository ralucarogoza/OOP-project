#ifndef _PERSOANA_H
#define _PERSOANA_H
#include <iostream>


class Persoana{
public:
    Persoana();
    Persoana(std::string, std::string, std::string, int);
    Persoana(const Persoana&);
    Persoana& operator=(Persoana&);
    void setNume(std::string);
    void setPrenume(std::string);
    void setNumarTelefon(std::string);
    void setVarsta(int);
    std::string getNume();
    std::string getPrenume();
    std::string getNumarTelefon();
    int getVarsta();
    friend std::istream& operator>>(std::istream&, Persoana&);
    friend std::ostream& operator<<(std::ostream&, Persoana&);
private:
    std::string nume;
    std::string prenume;
    std::string numarTelefon;
    int varsta;
};


#endif //_PERSOANA_H
