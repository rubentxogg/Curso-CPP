/*Ejercicio 19: Realice una función recursiva que sume los primeros 
n enteros positivos. 
Nota: para plantear la función recursiva tenga en cuenta que la suma puede
expresarse mediante la siguiente concurrencia:

	suma(n) = 1             , si n=1
			  n+suma(n-1)   , si n>1
*/

#include<iostream>
#include<conio.h>
using namespace std;

int sumar(int);

int main(){
	int nElementos;
	
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nElementos;
	}while(nElementos <=0);
	
	cout<<"\nLa suma es: "<<sumar(nElementos)<<endl;
	
	getch();
	return 0;
}

//Función Recursiva
int sumar(int n){
	int suma = 0;
	
	if(n==1){//Caso Base
		suma = 1;
	}else{//Caso General
		suma = n+sumar(n-1);
	}
	return suma;
}
