#include "banque.h"
#include"compte.h"
#include<iostream>
using namespace std;
banque::banque(int nl)
{
	nbrelimite=nl;
	agence=new compte[nbrelimite];
	nbreel=0;
}
banque::~banque()
{
	delete []agence;
}
void banque::add(compte c)
{
	agence[nbreel]=c;
	nbreel++;
}
void banque::deletee(int numc)
{
	int i,j;
	for(i=0;i<nbreel;i++)
	{
		if(agence[i].numerocompte()==numc)
		{
			break;
		}
	}
	for(j=i+1;j<nbreel;j++)
	{
		nbreel--;
	}
}
compte banque::getcompte(int numc)
{
	int i;
	for(i=0;i<nbreel;i)
	{
		if(agence[i].numerocompte()==numc)
		{
			break;
		}
	}
	return agence[i];
}
void banque::affichage()
{
	int i;
	for(i=0;i<nbreel;i++)
	{
		cout<<"compte"<<i+1<<endl;
		agence[i].numerocompte();
		cout<<"***********************"<<endl;
	}
}
