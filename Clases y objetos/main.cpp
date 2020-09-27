//Visibilidad de los miembros de la clase (encapsulamiento)

#include <iostream>
#include "Punto.h"

using namespace std;

int main(int argc, char** argv) {
	Punto p1(2,1); //Creaci�n de un objeto est�tico
	
	p1.setX(10);
	
	
	cout<<"El valor de X es: "<<p1.getX()<<endl;
	cout<<"El valor de Y es: "<<p1.getY()<<endl;
	
	Punto* p2 = new Punto(); //Creaci�n de un objeto din�mico
	
	p2->setX(5);
	p2->setY(8);
	
	cout<<"El valor de X es: "<<p2->getX()<<endl;
	cout<<"El valor de Y es: "<<p2->getY()<<endl;
	
	return 0;
}
