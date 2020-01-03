#ifndef BANQUE_H
#define BANQUE_H
#include"compte.h"
using namespace std;
class banque
{
	public:
		banque(int=20);
		~banque();
		void add(compte c);
		void deletee(int numc);
		compte getcompte(int numc);
		void affichage();
	private:
		compte *agence;
		int nbreel;
		int nbrelimite;
};

#endif
