#include "compte.h"
#include<iostream>
#include<string.h>
using namespace std;
compte::compte()
{
	nom=new char[10];
	strcpy(nom,"khawla");
	num=0;
	solde=0.0;
}
compte::compte(char *no,int nu,float so)
{
	nom=new char[strlen(no)];
	strcpy(nom,no);
	num=nu;
	solde=so;
}
compte::compte(const compte&obj)
{
	num=obj.num;
	solde=obj.solde;
	nom=new char[strlen(obj.nom)];
	strcpy(nom,obj.nom);
}
compte::~compte()
{
	delete[]nom;
}
compte& compte::operator=(const compte &obj)
{
	num=obj.num;
	solde=obj.solde;
	delete[]nom;
	nom=new char[strlen(obj.nom)];
	strcpy(nom,obj.nom);
	return *this;
}
void compte::consulter()
{
	cout<<"le nom du client"<<nom<<endl;
	cout<<"le numero de compte est"<<num<<endl;
	cout<<"le solde est"<<solde<<endl;
}
void compte::retrait(float x)
{
	solde+=x;
}
void compte::depot(float y)
{
	solde-=y;
}

int compte::numerocompte()
{
	return num;
}
