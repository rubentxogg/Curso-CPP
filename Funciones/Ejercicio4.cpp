/*4.Escriba un programa en C++ que devuelva la parte fraccionaria de
cualquier n�mero introducido por el usuario.
Por ejemplo, si se introduce el n�mero 256.879, deber�a desplegarse el 
n�mero 0.879. */

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funciones:
void pedirDatos();
float parteFraccionaria(float n);

float numero;

int main(){
	pedirDatos();
	
	cout<<"La parte fraccionaria del numero es: "<<parteFraccionaria(numero);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
}

//24.567 => 24
float parteFraccionaria(float n){
	int entero = n;
	//24.567 - 24 = 0.567
	float resultado = n - entero;
	
	return resultado;
}
