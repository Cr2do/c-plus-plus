#include<iostream>
#include<stdlib.h>
#include<vector>
#include"Eleve.h"
using namespace std;

Eleve::Eleve(){
}

Eleve::~Eleve(){}

Eleve::Eleve(Eleve const& Elv){
    Nom=Elv.Nom;
    Prenom=Elv.Prenom;
    Sexe=Elv.Sexe;
    Note=Elv.Note;
}
Eleve::Eleve(string nom,string pren,string Sex,vector<float> notes){
    Nom=nom;
    Prenom= pren;
    Sexe=Sex;
    Note=notes;
}


string Eleve::getNom(){
    return Nom;
}
string Eleve::getPrenom(){
    return Prenom;
}
vector<float> Eleve::getNote(){
    return Note;
}
string Eleve::getSexe(){
   return Sexe;
}

void Eleve::setSexe(string genre){
    Sexe=genre;
}
 void Eleve::setNote(vector<float> Not){
     Note=Not;
}
void Eleve::setNom(string const& LName){
    Nom=LName;
}
void Eleve::setPrenom(string const& FName){
    Prenom=FName;
}
float Eleve::moyenne(){
    float mye,val=0;
    for(int i=0; i<Note.size();i++)
    {
       val=val+Note[i];
    }
    mye=val/Note.size();
    return mye;
}

void Eleve::aff_Eleve()
{
    cout<<"Votre eleve s'appelle "<< Nom<<" "<< Prenom<<" Il est de sexe " <<Sexe << endl;
    cout <<"Voici ces notes:"<< endl;
    for(int i=0; i<Note.size();i++)
    {
       cout << Note[i] <<endl;
    }
}
