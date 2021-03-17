#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

#include<iostream>
#include"Eleve.h"
#include"Enseignant.h"
#include<vector>
using namespace std;

class Classe
{
public:
    Classe();
    Classe(Classe const& Cls);
    Classe(vector<Eleve> Student, Enseignant Teacher);
    ~Classe();

    int NombreEleve();

    vector<Eleve> getEleves();
    Enseignant getEnseignant();

    void setElv(vector<Eleve> eleves);
    void setEgt(Enseignant enseignant);

    void MontrerCls();
private:
    vector<Eleve> eleves;
    Enseignant enseignant;
};
#include"Classe.cpp"
#endif // CLASSE_H_INCLUDED
