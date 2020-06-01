#include <iostream>
#include "zaidejai.h"
#include "inventorius.h"
#include "artefaktai.h"
#include <fstream>
using namespace std;

void pradinis();

string vardas;
void zaidziam ();
void meniu();
void duomenys();
void krepselis ();
void reitingai ();
void sala1 ();
void sala2 ();
void sala3 ();
void sala4 ();
void kitaslygis ();
void pasirinktilygi ();
zaidejai s1;
inventorius s2;
artefaktai s3;

int main() {

    pradinis();
    return 0;
}

void meniu() {
    string name;

        cout<< "--------------------------------------------------------"<< endl;
        cout<< "                    AUKSO IEŠKOTOJAI                    "<< endl;
        cout<< "--------------------------------------------------------"<< endl;
        cout<< "                1. Sukurti savo žaidėją                 " << endl;
        cout << "                  2. Pradėti žaidimą                   "<< endl;
        cout <<"               3. Žaisti pasirinktą lygį                " <<endl;
        cout << "            4. Peržiūrėti reitingų lentelę             " << endl;
        cout << "                     5. Išeiti                         "<< endl;
        cout<<"----------------------------------------------------------\n"<<endl;


};


void pradinis() {

    int a;
do{
    meniu();
    cout << "Įvesk pasirinkimą:\n  ";
    cin >> a;

        switch (a) {
            case 1:
                s1.zaidejosukurimas();
                cout << "Tavo žaidėjas sukurtas!" << endl;
                break;

            case 2:
                cout << "Sveikas atvykęs į AUKSO IEŠKOTOJUS! " << endl;
                cout << "Koks tavo vardas?" << endl;
                cin >> vardas;
                zaidziam();
                break;

            case 3:
                cout << "Sveikas atvykęs į AUKSO IEŠKOTOJUS! " << endl;
                cout << "Koks tavo vardas?" << endl;
                cin >> vardas;
                pasirinktilygi ();
                break;

            case 4:
                reitingai ();
                break;

            case 5:
                cout << "Iki pasimatymo!" << endl;
                break;

            default:
                cout<< "Netinkamas pasirinkimas." <<endl;


        }
    } while (a!=5);

}


void zaidziam(){


    duomenys();

    cout<<"\n\n";
    cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~PROLOGAS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << vardas << " yra nuožmus karys, pasiruošęs surasti visą žaidime besislepiantį auksą \n"
                     " Visos 4 senovės egipto aukso relikvijos gali atsidurti pas tave, tačiau \n"
                     " viskas priklauso nuo tavo pasirinkimų. Šis kelias nebus lengvas, todėl \n"
                     "rinkis atsakingai." <<vardas <<" pasiruošk atlaikyti puolimus ir surink visus\n"
                                                     "                     artefaktus!\n\n"<< endl;


    kitaslygis ();
    sala1 ();
    cout << "\n TU ĮVEIKEI PIRMĄJĮ LYGĮ!!! \n"<< endl;
    s1.levelredag(vardas);
    kitaslygis ();
    sala2 ();
    cout << "\n TU ĮVEIKEI ANTRĄJĮ LYGĮ!!! \n"<< endl;
    s1.levelredag(vardas);
    kitaslygis ();
    sala3();
    cout << "\n TU ĮVEIKEI TREČIĄJĮ LYGĮ!!! \n"<< endl;
    s1.levelredag(vardas);
    kitaslygis ();
    sala4();
    cout << "\n TU PRAĖJAI ŽAIDIMĄ!!! \n"<< endl;
    krepselis();
    cout<<"\n\n";



}


void duomenys(){

    s1.zaidname(vardas);

}

void sala1 (){

    cout<<"\n";
    duomenys();
    cout<<"\n";

    cout << "---------------------Pirmasis Lygis-----------------------"<<endl;
    cout <<"-----------------------Dykumos sala------------------------"<<endl;
    cout <<"Tu atsibudai saloje, kurioje matai, tik dykumą ir nieko daugiau. Staiga tolumoje \n"
           "pamatai einantį žmogų. Tavo veiksmai: \n"
           "1. Pradedi bėgti link jo.\n"
           "2. Lieki ten, kur buvai" <<endl;
    cout<< "Įvesk pasirinkimą: "<< endl;
    int op;
    cin>>op;
    switch (op){
        case 1:{
            cout << "Tu pasileidai bėgti link žmogaus. Pribėgęs jį, tu turi kelias galimybės \n"
                    "1. Apiplėšti jį.\n"
                    "2. Paprašyti jo padėti" <<endl;
            int ap;
            cin >> ap;
            switch (ap){
                case 1:{
                    cout <<"Tu pasirinkai apiplėšti jį. Tu radai peilį ir Auksinę Karūną." << endl;
                    cout<< "Šiame lygyje pelnei taškų, bei radai artefaktą"<<endl;
                    s1.taskairedag(vardas);
                    s1.taskairedag(vardas);
                    s3.paimtikarun ();
                    s2.paimtiinvent ("Peilis", 1);
                    s1.inventorioredag(vardas);
                    break;
                }
                case 2:{
                    cout <<"Tu gavai peilį."<<endl;
                    s2.paimtiinvent ("Peilis", 1);
                    s1.inventorioredag(vardas);
                    break;
                }
                default:
                    cout << "Tokio pasirinkimo nėra" << endl;
            }
            break;


        }
        case 2:{

            cout << "Tu paprašei padėti ir žmogus užpuolė tave. Šiame lygyje praradai taškų." <<endl;
            s1.taskairedagmin(vardas);
            break;
        }
        default:
            cout << "Tokio pasirinkimo nėra" << endl;


    }

}

void sala2 (){

    cout<<"\n";
    duomenys();
    cout<<"\n";

    cout << "----------------------Antrasis Lygis-----------------------"<<endl;
    cout <<"-----------------------Beždžionių sala------------------------"<<endl;
    cout <<"Ištrūkęs iš dykumos tu atsiduri miške. Aplinkui matai, tik medžius. \n"
           "Tu turi šias galimybes: \n"
           "1. Eiti į kairę.\n"
           "2. Eiti į dešinę." <<endl;
    cout<< "Įvesk pasirinkimą: "<< endl;
    int op;
    cin>>op;
    switch (op){
        case 1:{
            cout << "Tu eini į kairę. Pamatai didžiulį medį: \n"
                    "1. Lipsi į jį.\n"
                    "2. Eisi toliau." <<endl;
            int ap;
            cin >> ap;
            switch (ap){
                case 1:{
                    cout <<"Medyje tavęs laukė beždžionė, kuri tave užpuolė. Šiame lygyje tu praradai taškų." << endl;
                    s1.taskairedagmin(vardas);
                    break;
                }
                case 2:{
                    cout <<"Einant toliau ant žemės tu radai maisto. Šiame lygyje gavai taškų."<<endl;
                    s1.taskairedag(vardas);
                    s2.paimtiinvent ("Maistas", 2);
                    s1.inventorioredag(vardas);
                    break;
                }
                default:
                    cout << "Tokio pasirinkimo nėra" << endl;


            }
            break;


        }
        case 2:{

            cout << "Einant į dešinę tu aptikai apleistą šventyklą, kurioje radai Auksinę monetą." <<endl;
            cout << "Tai yra antroji relikvija iš 4, kurias tau reikės rasti. Šiame lygyje pelnei taškų."<< endl;
            s1.taskairedag(vardas);
            s3.paimtimoneta();
            break;
        }
        default:
            cout << "Tokio pasirinkimo nėra" << endl;

    }

}


void sala3 (){

    cout<<"\n";
    duomenys();
    cout<<"\n";


    cout << "------------------------Trečiasis Lygis-----------------------"<<endl;
    cout <<"-----------------------Srauniosios upės sala------------------------"<<endl;
    cout <<"Toliau keliaujant mišku prieini srauniąją Sandžilos upę. Jos dugne pamatai, kažką blizgaus. \n"
           "Tu turi šias galimybes: \n"
           "1. Eiti toliau.\n"
           "2. Šoki į upę." <<endl;
    cout<< "Įvesk pasirinkimą: "<< endl;
    int op;
    cin>>op;
    switch (op){
        case 1:{
            cout << "Einat toliau tu randi žvėjybinį tinklą, kurį tu: \n"
                    "1. Panaudoji ištraukti daiktui iš upės dugno.\n"
                    "2. Pasilieki vėlesniam panaudojimui." <<endl;
            int ap;
            cin >> ap;
            switch (ap){
                case 1:{
                    cout <<"Su šiuo tinklu tu ištraukei trečiajį artefaktą - Auksinį ietį. Šiame lygyje tu pelnei taškų." << endl;
                    s1.taskairedag(vardas);
                    s3.paimtiieti ();
                    break;
                }
                case 2:{
                    cout <<"Žvejybinis tinklas atsirado tavo krepšelyje. Šiame lygyje gavai taškų."<<endl;
                    s1.taskairedag(vardas);
                    s2.paimtiinvent ("Žvejybinis_tinklas", 3);
                    s1.inventorioredag(vardas);
                    break;
                }
                default:
                    cout << "Tokio pasirinkimo nėra" << endl;


            }
            break;


        }
        case 2:{

            cout << "Išokus į upę, tave pradėjo nešti smarki srovė ir tu niekaip nesugebi tam pasipriešinti" <<endl;
            cout << "Upė nešė tave tol, kol pasiekė krioklį ir juo tu nukritai, taip susižalodamas ir prasdamas taškų"<< endl;
            s1.taskairedagmin(vardas);
            break;
        }
        default:
            cout << "Tokio pasirinkimo nėra" << endl;

    }

}

void sala4 (){

    cout<<"\n";
    duomenys();
    cout<<"\n";


    cout << "------------------------Ketvirtasis Lygis-----------------------"<<endl;
    cout <<"-----------------------Senovės Piramidžių sala------------------------"<<endl;
    cout <<"Tik praėjus upę, pamatai vartus, kuriuos praėjęs atsiduri naujoje saloje visai kitame pasaulio krašte. \n"
           "Prieš tavo akis stovi dvi piramidės. Tu turi šias galimybes: \n"
           "1. Eiti į piramidę kairėje.\n"
           "2. Eiti į piramidę dėšinėje." <<endl;
    cout<< "Įvesk pasirinkimą: "<< endl;
    int op;
    cin>>op;
    switch (op){
        case 1:{
            cout << "Pasirinkęs piramidę kairėje pusėje, tu pasirinkai karo dievo piramidę. Tik įejus \n"
                    "tave užpuola piramidės sargybiniai. Tavo pasirinkimas:\n"
                    "1. Bandai kautis su jais.\n"
                    "2. Tiesiog vykdai jų įsakymus" <<endl;
            int ap;
            cin >> ap;
            switch (ap){
                case 1:{
                    cout <<"Ilgai pasipriešinti prieš penkis karius tu nesugebėjai ir buvai išmestas iš piramidės.\n"
                           "Šiame lygyje tu praradai taškų." << endl;
                    s1.taskairedagmin(vardas);
                    break;
                }
                case 2:{
                    cout <<"Tu paklusai kariams ir jie nuvedė tave iki piramidėje esančios šventyklos. \n"
                           "Šventykloje tu randi paskutinį artefaktą - Auksinį karo dievo kardą. Šiame lygyje gavai taškų."<<endl;
                    s1.taskairedag(vardas);
                    s3.paimtikarda ();
                    break;
                }
                default:
                    cout << "Tokio pasirinkimo nėra" << endl;


            }
            break;


        }
        case 2:{

            cout << "Nuėjęs į dėšinės pusės piramidę, tu supranti, kad tai keršto deivės piramidė" <<endl;
            cout << "Apėjęs ją viską tu nieko nerandi ir staiga žemė po kojomis pradeda judėti. Tu pradedi bėgti iš piramidės. \n"
                    "Kai išbėgi iš piramidės, pamatai, kad abi piramidės sugriuvo. Šiame lygyje tu taškų nepelnei, bet praradai."<< endl;
            s1.taskairedag(vardas);
            break;
        }
        default:
            cout << "Tokio pasirinkimo nėra" << endl;


    }

}



void kitaslygis (){


    cout << "\nAR ESI PASIRENGĘS PRADĖTI NAUJĄ LYGĮ?" <<endl;
    cout <<"        1. Taip | 2. Ne "<< endl;
    cout<< "Įvesk pasirinkimą: \n" << endl;
    int nt;
    cin >> nt;
    if (nt == 1) {

        cout << "Keliaujam..."<< endl;
    }
    else {
    pradinis();
    }
}

void krepselis (){

    cout<< "-----------------------------------------------"<<endl;
    cout<< "              ŽAIDIMO APIBENDRINIMAS           "<<endl;
    cout<< "-----------------------------------------------"<<endl;
    duomenys();
    s2.perziuretinvent ();
    s3.perziuretiartefakt ();
    s2.istrintinvent();
    s3.istrintiartefakt();
    cout<< "-----------------------------------------------\n"<<endl;
}

void pasirinktilygi (){

    cout << "-----------------------------------------------"<< endl;
    cout <<"                  PASIRINK LYGĮ                 " <<endl;
    cout << "-----------------------------------------------"<< endl;
    cout << "               1. Pirmasis lygis               "<< endl;
    cout << "              2. Antrasis lygis                "<< endl;
    cout << "             3. Trečiasis lygis                "<< endl;
    cout << "            4. Ketvirtasis lygis               "<< endl;
    cout << "                  5. Grįžti                    \n"<< endl;

    int s;
    cin >> s;
    switch (s){

        case 1:
            sala1 ();
            cout << "\n TU ĮVEIKEI PIRMĄJĮ LYGĮ!!! \n"<< endl;
            s1.levelredag(vardas);
            duomenys();
            pradinis();
            break;
        case 2:
            sala2 ();
            cout << "\n TU ĮVEIKEI ANTRAJĮ LYGĮ!!! \n"<< endl;
            s1.levelredag(vardas);
            duomenys();
            pradinis();
            break;
        case 3:
            sala3 ();
            cout << "\n TU ĮVEIKEI TREČIĄJĮ LYGĮ!!! \n"<< endl;
            s1.levelredag(vardas);
            duomenys();
            pradinis();
            break;
        case 4:
            sala4 ();
            cout << "\n TU ĮVEIKEI KETVIRTĄJĮ LYGĮ!!! \n"<< endl;
            s1.levelredag(vardas);
            duomenys();
            pradinis();
            break;
        case 5:
            pradinis();
            break;
        default:
            cout<<"Neteisingas pasirinkimas"<<endl;
    }

}

void reitingai (){

    cout <<"=========================================================" <<endl;
    cout << "                   REITINGŲ LENTELĖ                     " <<endl;
    cout <<"=========================================================" <<endl;
    cout<<"| " <<"VARDAS"<< " | " << "TAŠKAI" << " | " << "LYGIS" << " | " << "INVENT.SK"<< " | "<<endl;
    cout <<"=========================================================" <<endl;
    s1.zaidejoduomenys();
    cout << "\n\n";
    cout << " 1. Ištrinti vartotoją." <<endl;
    cout << " 2. Grįžti į meniu" << endl;
    cout << " Įvesk pasirinkimą: " << endl;
    int f;
    cin >> f;
    if (f == 1){
        s1.zaidejoistrinimas();
    }
}