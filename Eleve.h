#ifndef ELEVE_H_INCLUDED
#define ELEVE_H_INCLUDED

#include<iostream>
#include<vector>

using namespace std;

class Eleve
{
public:
    Eleve();
    Eleve(Eleve const& Elv);
    Eleve(string nom,string pren,string Sex,vector<float> notes);
    ~Eleve();

    //la fonction
    float moyenne();
    void aff_Eleve();
    //Les getteurs
    string getNom();
    string getSexe();
    string getPrenom();
    vector<float> getNote();
    //setteurs
    void setNote(vector<float> Not);
    void setSexe(string genre);
    void setNom(string const& LName);
    void setPrenom(string const& FName);


private:
    string Nom,Prenom;
    string Sexe;
    vector<float> Note;
};
#include "Eleve.cpp"

#endif
