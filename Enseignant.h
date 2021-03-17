#ifndef ENSEIGNANT_H_INCLUDED
#define ENSEIGNANT_H_INCLUDED

#include<iostream>
#include<stdlib.h>
using namespace std;

class Enseignant
{
    public:
        Enseignant();
        Enseignant(Enseignant const& Teach);
        //Enseignant(Enseignant const& Teacher, Classe SaClasse);
        Enseignant(string Nom,string Prenom ,string Matiere,string Genre);
        ~Enseignant();

        string get_Nom();
        string get_Prenom();
        string get_Matiere();
        string get_Genre();

        void set_Nom(string const& nom);
        void set_Prenom(string const& pren);
        void set_Matiere(string const& Mat);
        void set_Genre(string const& Sexe);

        void MontreEns();

    private:
        string Nom, Prenom , Matiere, Genre;
};
#include"Enseignant.cpp"
#endif // ENSEIGNANT_H_INCLUDED
