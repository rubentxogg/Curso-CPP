/*Ejercicio1. Definir una plantilla dentro de un archivo de 
cabecera llamado "intercambio.h" que pueda intercambiar el valor
de dos elementos del mismo tipo. */

#include <iostream>
#include "Intercambio.h"
using namespace std;


int main(int argc, char** argv) {
	int dato1,dato2;
	
	cout<<"Digite el valor de dato1: ";
	cin>>dato1;
	cout<<"Digite el valor de dato2: ";
	cin>>dato2;
	
	//Intercambiar el valor de las 2 variables
	intercambiar(dato1,dato2);
	
	cout<<"\nLos nuevos valores son: "<<endl;
	cout<<"Dato1 = "<<dato1<<endl;
	cout<<"Dato2 = "<<dato2<<endl;
	
	
	return 0;
}
