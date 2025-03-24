// gradina_zoologica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//sa se scrie un program pt gestiunea unei gradini zoologice folosind clase obiecte,derivate
#include <iostream>
#include<string>
using namespace std;

class animale {
private:
   static int nrAnimale;
public:
    void afisare()
    {
        cout <<"Numarul de animale: "<< nrAnimale << endl;
    }
    animale()
    {
       animale::nrAnimale++;

    }
};
int animale::nrAnimale = 0;
class pisici :public animale
{
private:
    string rasa;
    int varsta;
    string culoarea;
    string nume;
public:
    void afisarep()
    {
        cout << "rasa este: " << rasa << endl;
        cout << "varsta este: " << varsta<<endl;
        cout << "culoarea este: " << culoarea<<endl;
        cout << "numele este: " << nume<<endl;
         afisare();

    }
    pisici(string rasa, int varsta, string culoarea, string nume)
    {
        this->rasa = rasa;
        this->varsta = varsta;
        this->culoarea = culoarea;
        this->nume = nume;

    }
};

int main()
{
    pisici p("british", 2, "gri", "Simba");
    p.afisarep();

    return 0;

}

