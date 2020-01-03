#include "personne.h"
#include<iostream>
#include<string.h>
using namespace std;

void personne::saisie()
{
	cout<<"taper nom: ";
	cin>>nom;
	cout<<"taper prenom : ";
	cin>>prenom;
	cout<<"taper age :";
	cin>>age;
}
void personne::affiche()
{
	cout<<nom<<endl;
	cout<<prenom<<endl;
	cout<<age<<endl;
}
personne::personne(const personne & obj)
{
	strcpy(nom,obj.nom);
	strcpy(prenom,obj.prenom);
	age=obj.age;
	cout<<"constructeur de recopie "<<endl;
}
