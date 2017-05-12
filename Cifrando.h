#include <iostream>

#ifndef ARCHIVO
#define ARCHIVO
using namespace std;

class Cifrar{
	
	public:
		void setCifrar(string c, int numero);
		void setDescifrar (string c, int numero);
        void setCadena(string c);
	
		
		string getCadena();
		
		
		void addCadena(string Cadena);
		
		
		Cifrar();
		
		~Cifrar();
        		
	private:
		
		string Cadena;

};
#endif
