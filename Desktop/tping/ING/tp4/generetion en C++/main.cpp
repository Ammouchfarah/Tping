#include <iostream>
#include"compte.h"
#include"banque.h"
using namespace std;


int main(int argc, char** argv) {
	
	compte c;
	    compte d("khawla",1,1000);
		float x=10, y=33;
		c.consulter();
		c.retrait(x);
		c.depot(y);
		c.numerocompte();
	banque b;
		//banque q(20);
	
		b.add(c);
		b.deletee(1);
		b.getcompte(2);
		b.affichage();	
	
	return 0;
}
