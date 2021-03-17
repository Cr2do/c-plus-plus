#include<iostream>
#include<stdlib.h>
#include"Enseignant.h"
using namespace std;

Enseignant::Enseignant(){
}
Enseignant::Enseignant(Enseignant const& Teach){
    this->Nom=Teach.Nom;
    this->Prenom=Teach.Prenom;
    this->Matiere=Teach.Matiere;
    this->Genre=Teach.Genre;
}
Enseignant::Enseignant(string Nom,string Prenom ,string Matiere,string Genre){
    this->Nom=Nom;
    this->Prenom=Prenom;
    this->Matiere=Matiere;
    this->Genre=Genre;
}
Enseignant::~Enseignant(){
}

string Enseignant::get_Nom(){
    return Nom;
}
string Enseignant::get_Prenom(){
    return Prenom;
}
string Enseignant::get_Matiere(){
    return Matiere;
}
string Enseignant::get_Genre(){
    return Genre;
}

void Enseignant::set_Nom(string const& nom){
    Nom=nom;
}
void Enseignant::set_Prenom(string const& pren){
    Prenom=pren;
}
void Enseignant::set_Matiere(string const& Mat){
    Matiere=Mat;
}
void Enseignant::set_Genre(string const& Sexe){
    Genre=Sexe;
}
void Enseignant::MontreEns(){
    cout<<"Je m'appelle "<<Nom<<" "<<Prenom<<" J'enseigne la matiere "<<Matiere <<" Et je suis de sexe "<<Genre <<endl;
}
