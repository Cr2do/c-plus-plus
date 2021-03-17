#include<iostream>
#include<cstdlib>
#include"Ecole.h"
#include<vector>
using namespace std;

Ecole::Ecole(){

}
Ecole::Ecole(string name,vector<Classe> Clsroom){
    this->nom=name;
    this->classes=Clsroom;
}
Ecole::Ecole(Ecole const& School){
    this->nom=School.nom;
    this->classes=School.classes;
}

Ecole::~Ecole(){

}

string Ecole::get_n(){
    return nom;
}

void Ecole::set_n(string nm){
    nom=nm;
}

vector<Classe> Ecole::get_c(){
    return classes;
}

void Ecole::set_n(vector<Classe> room){
    classes=room;
}

int Ecole::NomTEleve(){
    int p;
    for(int i=0;i<classes.size();i++)
    {
        p=classes[i].NombreEleve();
    }

    return p;
}
