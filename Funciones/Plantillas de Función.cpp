/*Plantillas de Funci�n

Ejemplo: Sacar el valor absoluto de un n�mero */

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funci�n
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
	int num1 = -4;
	float num2 = -56.67;
	double num3 = -123.5678;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero = numero * -1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}
