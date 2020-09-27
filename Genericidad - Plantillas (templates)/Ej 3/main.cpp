/*Ej3. Defina una plantilla para la clase Materia, de tal manera
que el tipo de dato del atributo calificaci�n se del tipo T.
Esto permitir� crear objetos de tipo materia que tengan 
calificaciones que sean: n�meros enteros, n�meros decimales y letras.

a)Cree un objeto de tipo Materia usando el tipo int. Imprima
los valores de los atributos del objeto creado.

b) Cree un objeto de tipo Materia usando el tipo float.

c) Cree un objeto de tipo Materia usando el tipo char.

d) Incluye un m�todo en la clase que permita modificar la
calificaci�n de una materia.*/ 

#include <iostream>
#include "Materia.h"
using namespace std;

int main(int argc, char** argv) {
	Materia <int> curso1("Algoritmos",1,15);
	Materia <float> curso2("Matematicas",2,18.89);
	Materia <char> curso3("Lenguaje",3,'A');
	
	cout<<"Mostrando datos del curso1: "<<endl;
	curso1.mostrarDatos();
	
	cout<<"\nMostrando datos del curso2: "<<endl;
	curso2.mostrarDatos();
	
	cout<<"\nMostrando datos del curso3: "<<endl;
	curso3.mostrarDatos();
	
	curso1.setCalificacion(19);
	cout<<"\nLa nueva calificacion de curso1 es: "<<curso1.getCalificacion()<<endl;
	
	return 0;
}
