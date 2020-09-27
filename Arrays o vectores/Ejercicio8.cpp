/*8.Hacer un programa que lea 5 numeros en un arreglo, los copie
 a otro arreglo multiplicados por 2 y muestre el segundo arreglo.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[5] = {1,2,3,4,5};
	int numeros2[5];
	
	//Primero pedimos los elementos del array.
	for(int i=0;i<5;i++){
		cout<<i<<". Digite los elementos del array: ",
		cin>>numeros[i];
	}
	
	//Ahora, vamos a multiplicar * 2 los números del array.
	for(int i=0;i<5;i++){
		numeros2[i] = numeros[i]*2;
	}
	
	cout<<"\nMostrando los elementos del arreglo multiplicados por 2: \n";
	for(int i=0;i<5;i++){
		cout<<numeros2[i]<<" ";
	}
	
	getch();
	return 0;
}

