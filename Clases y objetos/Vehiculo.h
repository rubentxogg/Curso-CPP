/*Ej4. Construir un programa que dada una serie de veh�culos caracterizados
por su marca, modelo y precio, imprima las propiedades del veh�culo m�s barato.
Para ello, se deber�n leer por teclado las caracter�sticas de cada veh�culo
y crear una clase que represente a cada uno de ellos. */

#include <iostream>
using namespace std;

class Vehiculo{
	private:
		string marca,modelo;
		float precio;
	
	public:
		Vehiculo(string marca,string modelo,float precio){
			this->marca = marca;
			this->modelo = modelo;
			this->precio = precio;
		}
		
		Vehiculo(){ //Constructor por defecto
			
		}
		
		~Vehiculo(){
			
		}
		
		float getPrecio();
		void mostrarDatos();
		static int indiceMBarato(Vehiculo coches[],int n);
};

