/*Ejercicio 3: Rellenar un array de 10 n�meros, posteriormente utilizando
punteros indicar cuales son n�meros pares y su posici�n en memoria. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[10], *dir_numeros;
	
	for(int i=0;i<10;i++){
		cout<<"Digite un numero["<<i<<"]: ";
		cin>>numeros[i];
	}
	
	dir_numeros = numeros; //Posicion de memoria comienza numeros
	
	for (int i=0;i<10;i++){
		if(*dir_numeros%2==0){
			cout<<"El numero "<<*dir_numeros<<" es par"<<endl;
			cout<<"Posicion: "<<dir_numeros<<endl;
		}
		dir_numeros++;
	}
	
	getch();
	return 0;
}
