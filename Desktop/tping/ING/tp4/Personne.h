#ifndef PERSONNE_H
#define PERSONNE_H

class personne
{
	private:
		char nom[20];
		char prenom[20];
		int age;
	public:
		void saisie();
		void affiche();
		personne(const personne &);
		~personne();
	
};

#endifif
