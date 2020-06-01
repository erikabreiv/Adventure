//
// Created by Erika on 31/05/2020.
//
#include <iostream>
#include <fstream>
#include "zaidejai.h"

using namespace std;


zaidejai a;

void zaidejai::zaidejosukurimas() {

    cout << "Koks tavo vardas ?" << endl;
    cin >> a.vardas;
    a.taskai = 100;
    a.level =1;
    a.inventorius = 0;

    ofstream adata;
    adata.open ("zaidejai.txt", ios::app);
    adata<<a.vardas;
    adata<<endl;
    adata<<a.taskai;
    adata<<endl;
    adata<<a.level;
    adata<<endl;
    adata<<a.inventorius;
    adata<<endl;
    adata.close();
}

void zaidejai::zaidejoduomenys() {

    ifstream bdata;
    bdata.open("zaidejai.txt");
    bdata >> a.vardas;
    bdata >> a.taskai;
    bdata >> a.level;
    bdata >> a.inventorius;


    while (!bdata.eof()){

        cout<< "-----------------------------------------------"<< endl;
        cout<<"| " <<a.vardas<< " -    " << a.taskai << " |     " << a.level << " |      " << a.inventorius<< "| "<<endl;
        cout<< "-----------------------------------------------"<< endl;

        bdata >> a.vardas;
        bdata >> a.taskai;
        bdata >> a.level;
        bdata >> a.inventorius;
    }
    bdata.close();

}

void zaidejai::zaidname(string b){

    ifstream adata;
    adata.open("zaidejai.txt");
    adata >> a.vardas;
    adata >> a.taskai;
    adata >> a.level;
    adata >> a.inventorius;

    while (!adata.eof())
     {

         if (a.vardas == b){

            cout << "-----------------DUOMENYS----------------" << endl;
            cout << "ŽAIDĖJAS:  " << a.vardas << endl;
            cout << "TAŠKAI:  " << a.taskai << endl;
            cout << "LYGIS:  " << a.level << endl;
            cout << "INVENTORIUS:  " << a.inventorius << endl;
            cout << "-----------------------------------------" << endl;
            cout << "-----------------------------------------" << endl;

        }
         adata >> a.vardas;
         adata >> a.taskai;
         adata >> a.level;
         adata >> a.inventorius;
     }
    if (a.vardas != b){
        cout<<"Tokio vardo nėra!"<< endl;
    }
    adata.close();
}

void zaidejai::zaidejoistrinimas(){

    string b;
    cout << "Įveskite vardą žaidėjo, kurio duomenis norite ištrinti: " << endl;
    cin >>b;
    ifstream d;
    d.open ("zaidejai.txt");
    ofstream e;
    e.open ("naujas.txt");

    d >> a.vardas;
    d >> a.taskai;
    d >> a.level;
    d >> a.inventorius;

    while (!d.eof()){

        if (a.vardas != b){
            e << a.vardas;
            e << endl;
            e << a.taskai;
            e << endl;
            e << a.level;
            e << endl;
            e << a.inventorius;
            e << endl;
        }
        else {
            cout <<"\n Žaidėjas ištrintas."<<endl;
        }
        d >> a.vardas;
        d >> a.taskai;
        d >> a.level;
        d >> a.inventorius;
    }
    d.close();
    e.close();

    remove("zaidejai.txt");
    rename("naujas.txt","zaidejai.txt");

}

void zaidejai::taskairedag(string b){

    string c;
    int g;
    int h;
    int r;

    ifstream d;
    d.open ("zaidejai.txt");
    ofstream e;
    e.open ("naujas.txt");

    d >> a.vardas;
    d >> a.taskai;
    d >> a.level;
    d >> a.inventorius;

    while (!d.eof()){

        if (a.vardas != b){
            e << a.vardas;
            e << endl;
            e << a.taskai;
            e << endl;
            e << a.level;
            e << endl;
            e << a.inventorius;
            e << endl;
        }
        else {

            c = a.vardas;
            g = a.taskai + 10;
            h = a.level;
            r = a.inventorius;

            e<<endl;
            e<<c;
            e<<endl;
            e<<g;
            e<<endl;
            e<<h;
            e<<endl;
            e<<r;
            e<<endl;

        }
        d >> a.vardas;
        d >> a.taskai;
        d >> a.level;
        d >> a.inventorius;
    }
    d.close();
    e.close();

    remove("zaidejai.txt");
    rename("naujas.txt","zaidejai.txt");
}

void zaidejai::taskairedagmin(string b){

   string c;
    int g;
    int h;
    int r;

    ifstream d;
    d.open ("zaidejai.txt");
    ofstream e;
    e.open ("naujas.txt");

    d >> a.vardas;
    d >> a.taskai;
    d >> a.level;
    d >> a.inventorius;

    while (!d.eof()){

        if (a.vardas != b){
            e << a.vardas;
            e << endl;
            e << a.taskai;
            e << endl;
            e << a.level;
            e << endl;
            e << a.inventorius;
            e << endl;
        }
        else {

            c = a.vardas;
            g = a.taskai - 10;
            h = a.level;
            r = a.inventorius;

            e<<endl;
            e<<c;
            e<<endl;
            e<<g;
            e<<endl;
            e<<h;
            e<<endl;
            e<<r;
            e<<endl;

        }
        d >> a.vardas;
        d >> a.taskai;
        d >> a.level;
        d >> a.inventorius;
    }
    d.close();
    e.close();

    remove("zaidejai.txt");
    rename("naujas.txt","zaidejai.txt");
}

void zaidejai::inventorioredag(string b){

    string c;
    int g;
    int h;
    int r;


    ifstream d;
    d.open ("zaidejai.txt");
    ofstream e;
    e.open ("naujas.txt");

    d >> a.vardas;
    d >> a.taskai;
    d >> a.level;
    d >> a.inventorius;

    while (!d.eof()){

        if (a.vardas != b){
            e << a.vardas;
            e << endl;
            e << a.taskai;
            e << endl;
            e << a.level;
            e << endl;
            e << a.inventorius;
            e << endl;
        }
        else {

            c = a.vardas;
            g = a.taskai;
            h = a.level;
            r = a.inventorius +1;

            e<<endl;
            e<<c;
            e<<endl;
            e<<g;
            e<<endl;
            e<<h;
            e<<endl;
            e<<r;
            e<<endl;

        }
        d >> a.vardas;
        d >> a.taskai;
        d >> a.level;
        d >> a.inventorius;
    }
    d.close();
    e.close();

    remove("zaidejai.txt");
    rename("naujas.txt","zaidejai.txt");
}

void zaidejai::levelredag(string b){

    string c;
    int g;
    int h;
    int r;


    ifstream d;
    d.open ("zaidejai.txt");
    ofstream e;
    e.open ("naujas.txt");

    d >> a.vardas;
    d >> a.taskai;
    d >> a.level;
    d >> a.inventorius;

    while (!d.eof()){

        if (a.vardas != b){
            e << a.vardas;
            e << endl;
            e << a.taskai;
            e << endl;
            e << a.level;
            e << endl;
            e << a.inventorius;
            e << endl;
        }
        else {


            c = a.vardas;
            g = a.taskai;
            h = a.level +1;
            r = a.inventorius;

            e<<endl;
            e<<c;
            e<<endl;
            e<<g;
            e<<endl;
            e<<h;
            e<<endl;
            e<<r;
            e<<endl;

        }
        d >> a.vardas;
        d >> a.taskai;
        d >> a.level;
        d >> a.inventorius;
    }
    d.close();
    e.close();

    remove("zaidejai.txt");
    rename("naujas.txt","zaidejai.txt");
}