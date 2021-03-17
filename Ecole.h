#ifndef ECOLE_H_INCLUDED
#define ECOLE_H_INCLUDED

#include<iostream>
#include"Classe.h"
#include<vector>

using namespace std;

class Ecole
{
public:
    Ecole();
    Ecole(string name,vector<Classe> Clsroom);
    Ecole(Ecole const& School);
    ~Ecole();
    string get_n();
    void set_n(string nm);

    int NomTEleve();

    vector<Classe> get_c();
    void set_n(vector<Classe> room);
private:
    string nom;
    vector<Classe> classes;
};
#include"Ecole .cpp"
#endif // ECOLE_H_INCLUDED
