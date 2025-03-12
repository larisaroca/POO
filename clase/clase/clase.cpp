// clase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

class Student {
private:
    string nume;
    int varsta;
    float medie;
public:
    //constructori cu var aux
Student(string nume_student, int varsta_student, float medie_student) {
    nume = nume_student;
    varsta = varsta_student;
    medie = medie_student;
    cout << "constructorul a fost apelat pentru: " << nume << endl;
}
//construtori folosind this
/*
Student(string nume, int varsta, floar medie) {
    this-> nume = nume;
    this->varsta = varsta;
    this->medie = medie;
cout<< "constructorul a fost apelat pentru: " << nume << endl;
}*/
~Student()
{
    cout << "destructorul a fost apelat pentru: " << nume << endl;
}
void afisare_informatii() {
    cout << "nume: " << nume << "Varsta: " << varsta << "medie: " << medie<<endl;
}
float mmedie()
{
    return medie;
}
};

int main()
{
    int i, k;
   int n = 0;
   int cmedie = -1, z;
    cout << "Introduceti numarul de studenti: ";
    cin >> k;
    n = k;
    
    Student** studenti=new Student*[n];
        for (int i = 0; i < n; i++)
        {
            string nume;
            int varsta;
            float medie;
            cout << "introdu numele studentului: " << i + 1 << ": "; cin >> nume;
            cout << "introdu varsta studentului: " << i + 1 << ": "; cin >> varsta;
            cout << "introdu media studentului: " << i + 1 << ": "; cin >> medie;
            if (medie > cmedie)
                cmedie = -1; z = i;
            studenti[i] = new Student(nume, varsta, medie);

        }
        for (int i = 0; i < n; i++)
        {
            studenti[i]->afisare_informatii();
        }
        cout << "studentul cu cea mai mare medie este: ";
        studenti[z]->afisare_informatii();
        cout << endl;

        bool ok = 0;
        do
        {
            ok = 1;
            for(int i=0;i<n;i++)
                if (studenti[i]->mmedie() > studenti[i + 1]->mmedie())
                {
                    Student* aux = studenti[i];
                    studenti[i] = studenti[i + 1];
                    studenti[i + 1] = aux;
                    ok = 0;
               }

        } while (!ok);
        for (int i = 0; i < n; i++)
        {
            studenti[i]->afisare_informatii();
        }
        
        for (int i = 0; i < n; i++)
        {
            delete studenti[i];

        }
        return 0;
}

