/*1. Escribe un programa que defina un vector de n�meros y calcule la
suma de sus elementos. */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]= {1,2,3,4,5};
	int suma = 0;
	
	for(int i=0;i<5;i++){
		suma += numeros[i];
	}
	
	cout<<"La suma de los elementos del array es: "<<suma<<endl;
	
	getch();
	return 0;
}
