#include <iostream>
using namespace std;

//Destructor de objetos

class Perro{
	//Atributos
	private:
		string nombre,raza;
		
	//Métodos
	public:
		Perro(string nombre,string raza){ //Constructor
			this->nombre = nombre;
			this->raza = raza;
		}
	
	
		~Perro(){ //Destructor
		}
		void mostrarDatos();
		void jugar();
};
