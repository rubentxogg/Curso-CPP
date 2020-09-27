/*Ejercicio1: Considere la siguiente relaci�n de herencia. Defina las
clases Mam�fero, Felino y GatoDom�stico. Decida que atributos y m�todos
incluir de tal manera que su programa pueda:

a) Declarar un objeto llamado minino de tipo GatoDomestico y otro llamado
	estrellaCirco de tipo Felino.
	
b) Imprimir la dieta de minino y de estrellaCirco.

c) Imprimir el a�o y lugar de nacimiento de minino y de estrellaCirco.

d) Cambiar el nombre del due�o de minino.

e) Imprimir la raza de minino y de estrellaCirco.

f) Cambiar el nombre del circo en el que act�a estrellaCirco */

#include <iostream>
#include "GatoDomestico.h"
#include "Felino.h"
using namespace std;

int main(int argc, char** argv) {
	GatoDomestico* minino = new GatoDomestico(2015,"Trujillo","Gato Persa","Alejandro Taboada");
	Felino * estrellaCirco = new Felino(2014,"India","Tigre Bengala","Circo Espectacular");
	
	cout<<"Dietas: "<<endl;
	cout<<"Gato: "<<minino->imprimirDieta()<<endl;
	cout<<"Felino: "<<estrellaCirco->imprimirDieta()<<endl;
	
	cout<<"\nAnio Nacimiento - Lugar Nacimiento: "<<endl;
	cout<<"Gato: "<<minino->getAnioNacimiento()<<" - "<<minino->getLugarNacimiento()<<endl;
	cout<<"Felino: "<<estrellaCirco->getAnioNacimiento()<<" - "<<estrellaCirco->getLugarNacimiento()<<endl;
	
	cout<<"\nCambiar el nombre del duenio del Gato: "<<endl;
	string nuevoDuenio;
	cout<<"Digite el nombre del nuevo duenio: ";
	getline(cin,nuevoDuenio);
	minino->setNombreDuenio(nuevoDuenio);
	cout<<"El nuevo duenio es: "<<minino->getNombreDuenio()<<endl;
	
	cout<<"\nRaza: "<<endl;
	cout<<"Gato: "<<minino->getRaza()<<endl;
	cout<<"Felino: "<<estrellaCirco->getRaza()<<endl;
	
	cout<<"\nCambiar el nombre del circo: "<<endl;
	string nuevoCirco;
	cout<<"Digite el nombre del nuevo circo: ";
	getline(cin,nuevoCirco);
	estrellaCirco->setNombreCirco(nuevoCirco);
	cout<<"El nuevo circo es: "<<estrellaCirco->getNombreCirco()<<endl;
	
	delete minino;
	delete estrellaCirco;
	return 0;
}
