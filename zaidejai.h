//
// Created by Erika on 31/05/2020.
//
#include <iostream>
using namespace std;


#ifndef ZAIDIMAS_PAGRINDINIS_ZAIDEJAI_H
#define ZAIDIMAS_PAGRINDINIS_ZAIDEJAI_H



class zaidejai {

public:
    string vardas;
    int taskai;
    int level;
    int inventorius;
    void zaidejosukurimas();
    void zaidejoistrinimas();
    void zaidejoduomenys();
    void taskairedag(string b);
    void taskairedagmin(string b);
    void inventorioredag(string b);
    void levelredag(string b);
    void zaidname(string b);

};


#endif //ZAIDIMAS_PAGRINDINIS_ZAIDEJAI_H
