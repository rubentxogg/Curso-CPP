#include <iostream>
using namespace std;

class Personaje{
	friend void modificar(Personaje &,int,int); //Funci�n amiga
	
	private:
		int ataque;
		int defensa;
		
	public:
		Personaje(int ataque,int defensa){
			this->ataque = ataque;
			this->defensa = defensa;
		}
		
		void mostrarDatos(){
			cout<<"Ataque = "<<ataque<<endl;
			cout<<"Defensa = "<<defensa<<endl;
		}
};

