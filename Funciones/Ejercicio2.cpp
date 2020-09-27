/*2.Escriba una función llamada al_cuadrado() que calcule el
cuadrado del valor que se le transmite y despliegue el resultado.
La función deberá ser capaz de elevar al cuadrado números flotantes.*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de Funciones
void pedirDatos();
void al_cuadrado(float x);

float num1;

int main(){
	pedirDatos();
	al_cuadrado(num1);

	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite un numero: "; cin>>num1;
}

void al_cuadrado(float x){
	float multiplicacion;
	
	multiplicacion = x * x;
	
	cout<<"El cuadrado de: "<<num1<<" es: "<<multiplicacion<<endl;
}
