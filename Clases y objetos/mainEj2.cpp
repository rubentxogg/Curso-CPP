#include <iostream>
#include "Cuadrilatero.h"
using namespace std;

int main(int argc, char** argv) {
	Cuadrilatero* c1;
	float lado1,lado2;
	
	cout<<"Digite el lado1: ";
	cin>>lado1;
	cout<<"Digite el lado2: ";
	cin>>lado2;
	
	if(lado1==lado2){ //Es un cuadrado
		c1 = new Cuadrilatero(lado1);	
	}
	else{
		c1 = new Cuadrilatero(lado1,lado2);
	}
	
	cout<<"El perimetro es: "<<c1->obtenerPerimetro()<<endl;
	cout<<"El area es: "<<c1->obtenerArea()<<endl;
	
	return 0;
}
