#include<iostream>
#include<vector>
#include<stdlib.h>
#include"Ecole.h"
using namespace std;

int main()
{

    //float val=0;
   /*
   eN CE QUI CONCERNE LA CLASSE EELLEEVVE*/
   Ecole MySchool;
   vector<float> Note;
    Note.push_back(10);
    Note.push_back(9);
    Note.push_back(18);
    Note.push_back(15);
    Note.push_back(19.5);
    string N,P,M,S;
    cout << "Entrer un nom et ensuite un prenom et sexe"<<endl;
    getline(cin,N);

    getline(cin,P);getline(cin,M);
    Eleve student(N,P,M,Note);
    //student.aff_Eleve();

    Eleve toto(student);
   // toto.aff_Eleve();

    vector<Eleve> eleve;
    eleve.push_back(student);
    eleve.push_back(toto);
    Enseignant Tch("AYIVI","Credo","Anglais","Masc");

    Classe Termo(eleve, Tch);
    Termo.MontrerCls();
    /*nstudent.setNom(N);
    student.setPrenom(P);
    student.setSexe(M);
    student.setNote(Note);
    student.aff_Eleve();
    float Moy=student.moyenne();*/
    //ncout << Moy;




    /*float val=0;
    vector<float> Note;
    Note.push_back(10);
    Note.push_back(9);
    Note.push_back(18);
    Note.push_back(15);
    Note.push_back(19.5);

   for(int i=0;i<5;i++)
    {

       val=val + Note[i];
    }
     cout << val/Note.size();*/




     //**************************************///////////////

  cout <<"Bonjour bonsoir a vous et merci d'avoir sollicite la societe Credo Boss et Cie pour resoudre ce probleme"<<endl;
  cout<<"       *************************************       "<<endl;
  cout<<"Bien commencons :"<<endl;
  string NEcole;
  cout<<"Donnez moi le nom de votre ecole" <<endl;
  cin >> NEcole;
  cout << "Entrer le nombre de classes que votre ecole disposera"<<endl;
  int NbreC; cin>> NbreC;
  vector<Enseignant> LesTeach;
  vector<Eleve> UnEleve;
  for(int k=1;k<=NbreC;k++)
  {
      cout<<"Combien d'eleve la "<< k<<"e classe aura"<<endl;
      int NbreE; cin >> NbreE;
      for(int j=0;j<NbreE;j++)
      {
         cout << "Entrer un nom et ensuite un prenom et sexe de l'Etudiant"<<endl;
         getline(cin,N);
         getline(cin,P);
         getline(cin,M);
         cout << "Entrer ces notes respectivement en Anglais,Maths,PCT,H-G,SVT"<<endl;
         float Anglais,Maths,PCT,HG,SVT;
         vector<float> Note;
         Note.push_back(Anglais);
         Note.push_back(Maths);
         Note.push_back(PCT);
         Note.push_back(HG);
         Note.push_back(SVT);
         Eleve student(N,P,M,Note);
         UnEleve.push_back(student);
      }

      cout << "Entrer un nom et un prenom puis sa matiere et enfin le sexe du prof"<<endl;
      getline(cin,N);
      getline(cin,P);
      getline(cin,M);
      getline(cin,S);
      Enseignant MyTeacher(N,P,M,S);
      LesTeach.push_back(MyTeacher);
  }










}
