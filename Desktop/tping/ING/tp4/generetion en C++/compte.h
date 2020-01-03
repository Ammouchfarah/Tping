#ifndef COMPTE_H
#define COMPTE_H
using namespace std; 

class compte
{
	public:
		compte();
		compte(char*,int,float);
		compte(const compte &);
		~compte();
		compte &operator=(const compte&);
		void consulter();
		void retrait(float);
		void depot(float);
		int numerocompte();
	private:
		char *nom;
		int num;
		float solde;
};

#endif
