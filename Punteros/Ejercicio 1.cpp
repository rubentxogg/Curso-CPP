/*Ejercicio 1: Comprobar si un n�mero es par o impar, y se�alar la 
posici�n de memoria donde se est� guardando el n�mero. Con punteros. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *dir_numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	dir_numero = &numero; //Guardando la posici�n de memoria.
	
	if(*dir_numero%2==0){
		cout<<"El numero "<<*dir_numero<<" es par"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	else{
		cout<<"El numero "<<*dir_numero<<" es impar"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	
	getch();
	return 0;
}
