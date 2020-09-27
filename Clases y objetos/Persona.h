//Implementaci�n de la clase Persona

#include<iostream>
using namespace std;

class Persona{
	//Atributos
	private:
		string nombre;
		int edad;
		string dni;
		
	//M�todos
	public:
		Persona(string _nombre, int _edad){ //Constructor 1
			nombre = _nombre;
			edad = _edad;
		}
	
		Persona(string _dni){ //Constructor 2
			dni = _dni;
		}
	
		void correr(){
			cout<<"Soy "<<nombre<<", tengo "<<edad<<" a�os y estoy corriendo una maraton"<<endl;
		}
	
		void correr(int km){
			cout<<"He corrido "<<km<<" kilometros"<<endl;
		}
};
