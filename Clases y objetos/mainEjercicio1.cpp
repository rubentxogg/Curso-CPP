/*Ejercicio 1: Definir una clase DiaAnio con los atributos mes y d�a, los 
m�todos igual() visualizar(). El mes se registra como un valor entero (1,
Enero, 2, Febrero, etc.). El d�a del mes se registra en otra variable entera
el d�a. Escribir un programa que compruebe si una fecha es su cumplea�os.*/

#include <iostream>
#include <stdlib.h>
#include "DiaAnio.h"

using namespace std;

int main(int argc, char** argv) {
	DiaAnio* hoy;
	DiaAnio* cumple;
	int d,m;
	
	cout<<"Introduzca la fecha de hoy, dia: ";
	cin>>d;
	cout<<"Introduzca el numero de mes: ";
	cin>>m;
	hoy = new DiaAnio(d,m);
	
	cout<<"\nIntroduzca la fecha de su cumpleanios, dia: ";
	cin>>d;
	cout<<"Introduzca el numero de mes: ";
	cin>>m;
	cumple = new DiaAnio(d,m);
	
	//Mostramos las fechas
	hoy->visualizar();
	cout<<endl;
	cumple->visualizar();
	
	if(hoy->igual(*cumple)){
		cout<<"\nFeliz Cumplea�os!!!"<<endl;
	}
	else{
		cout<<"\nQue tenga un buen dia"<<endl;
	}
	
	system("pause");
	return 0;
}
