#include<iostream>
#include<cstdlib>
#include"Eleve.h"
#include"Enseignant.h"
#include<vector>
using namespace std;

Classe::Classe(){
}
Classe::Classe(Classe const& Cls){
    this->eleves=Cls.eleves;
    this->enseignant=Cls.enseignant;
}
Classe::Classe(vector<Eleve> Student, Enseignant Teacher){
    this->eleves=Student;
    this->enseignant=Teacher;
}
Classe::~Classe(){
}
vector<Eleve> Classe::getEleves(){
    return eleves;
}
Enseignant Classe::getEnseignant(){
    return enseignant;
}

void Classe::setElv(vector<Eleve> eleves){
    //le codeeeeeee
}
void Classe::setEgt(Enseignant enseignant){
    //le ocdeeeeee
}

void Classe::MontrerCls(){
    for(int j=0;j<eleves.size();j++){
        eleves[j].aff_Eleve();
    }
    enseignant.MontreEns();
}

int Classe::NombreEleve(){
        int nomb=eleves.size();
    return nomb;
}
