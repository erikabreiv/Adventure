//
// Created by Erika on 28/05/2020.
//

#include "artefaktai.h"
#include <iostream>
#include <fstream>
using namespace std;

artefaktai c;

void artefaktai::paimtikarun (){

    c.var = "Auksinė_Karūna";
    c.dat = 1;
    c.task= 10;

    ofstream ln;
    ln.open ("artefaktai.txt", ios::app);
    ln<<c.var;
    ln<<endl;
    ln<<c.dat ;
    ln<<endl;
    ln<<c.task;
    ln<<endl;

    ln.close();
}

void artefaktai::paimtimoneta (){

    c.var = "Auksinė_Moneta";
    c.dat = 2;
    c.task= 10;

    ofstream ln;
    ln.open ("artefaktai.txt", ios::app);
    ln<<c.var;
    ln<<endl;
    ln<<c.dat ;
    ln<<endl;
    ln<<c.task;
    ln<<endl;

    ln.close();
}

void artefaktai::paimtiieti (){

    c.var = "Auksinis_Ietis";
    c.dat = 3;
    c.task= 10;

    ofstream ln;
    ln.open ("artefaktai.txt", ios::app);
    ln<<c.var;
    ln<<endl;
    ln<<c.dat ;
    ln<<endl;
    ln<<c.task;
    ln<<endl;

    ln.close();
}

void artefaktai::paimtikarda (){

    c.var = "Auksinis_Kardas";
    c.dat = 4;
    c.task= 10;

    ofstream ln;
    ln.open ("artefaktai.txt", ios::app);
    ln<<c.var;
    ln<<endl;
    ln<<c.dat ;
    ln<<endl;
    ln<<c.task;
    ln<<endl;

    ln.close();
}



void artefaktai::istrintiartefakt(){

    remove("artefaktai.txt");
}

void artefaktai::perziuretiartefakt (){

    ifstream mn;
    mn.open("artefaktai.txt");
    mn >> c.var;
    mn >> c.dat;
    mn >> c.task;


    while (!mn.eof()){


        cout<< "-----------------ARTEFAKTAI----------------"<< endl;
        cout<< "PAVADINIMAS:  "<< c.var << endl;
        cout<< "NUMERIS:  " << c.dat << endl;
        cout<< "TAŠKAI:  " << c.task << endl;
        cout<< "-----------------------------------------"<< endl;
        cout<< "                                          "<< endl;
        mn >> c.var;
        mn>> c.dat;
        mn>> c.task;

    }
    mn.close();


}



