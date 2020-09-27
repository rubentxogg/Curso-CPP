/*Ej4. Construir un programa que dada una serie de vehículos caracterizados
por su marca, modelo y precio, imprima las propiedades del vehículo más barato.
Para ello, se deberán leer por teclado las características de cada vehículo
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

