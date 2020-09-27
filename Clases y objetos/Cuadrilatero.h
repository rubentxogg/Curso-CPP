/* Construir un programa que calcule el área y el perímetro de un
cuadrilátero dada la longitud de sus dos lados. Los valores de la
longitud deberán introducirse por línea de ordenes. Si es un cuadrado, sólo
se proporcionará la longitud de uno de los lados al constructor. */

#include <iostream>
using namespace std;

class Cuadrilatero{
	//Atributos
	private:
		float lado1,lado2;
	
	//Métodos
	public:
		Cuadrilatero(float lado1,float lado2){ //Constructor 1
			this->lado1 = lado1;
			this->lado2 = lado2;
		}
		
		Cuadrilatero(float lado){ //Constructor 2
			this->lado1 = this->lado2 = lado;
		}
		
		float obtenerPerimetro();
		float obtenerArea();

};
