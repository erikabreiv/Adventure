//
// Created by Erika on 28/05/2020.
//
#include <iostream>
#include <fstream>
using namespace std;

#include "inventorius.h"
inventorius b;


void inventorius::paimtiinvent (string invent, int id){

    b.pavadin = invent;
    b.id = id;
    b.taskai= 10;

    ofstream in;
    in.open ("inventorius.txt", ios::app);
    in<<b.pavadin;
    in<<endl;
    in<<b.id;
    in<<endl;
    in<<b.taskai;
    in<<endl;

    in.close();
}



void inventorius::istrintinvent (){

    remove("inventorius.txt");
}

void inventorius::perziuretinvent (){

    ifstream invent;
    invent.open("inventorius.txt");
    invent >> b.pavadin;
    invent >> b.id;
    invent >> b.taskai;


    while (!invent.eof()){

        cout<< "-----------------INVENTORIUS----------------"<< endl;
        cout<< "PAVADINIMAS:  "<< b.pavadin << endl;
        cout<< "ID:  " << b.id << endl;
        cout<< "TAŠKAI:  " << b.taskai << endl;
        cout<< "-----------------------------------------"<< endl;
        cout<< "                                          "<< endl;
        invent >> b.pavadin;
        invent>> b.id;
        invent>> b.taskai;

    }
    invent.close();


}



