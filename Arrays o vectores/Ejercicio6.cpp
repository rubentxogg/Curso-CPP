/*6.Escribe un programa que defina un vector de n�meros y calcule
si existe alg�n n�mero en el vector cuyo valor equivale a la suma del
resto de n�meros del vector.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[5] = {1,2,3,4,10};
	int suma = 0,mayor=0;
	
	for(int i=0;i<5;i++){
		suma += numeros[i];
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	
	if(mayor == suma-mayor){
		cout<<"El numero "<<mayor<<" equivale a la suma de los demas";
	}
	else{
		cout<<"No existe ningun numero que sea igual a la suma de los demas";
	}
	
	getch();
	return 0;
}
