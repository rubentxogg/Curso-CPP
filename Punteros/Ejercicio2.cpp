/* Ejercicio 2: Determinar si un número es primo o no; con punteros
y además indicar en que posición de memoria se guardó el número. 
2,3,5,7,11,13,17,19,23,29,31,...
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *dir_numero, cont = 0;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	dir_numero = &numero;
	
	//Determinar si el número es primo o no.
	for(int i=1;i<*dir_numero;i++){
		if(*dir_numero%i==0){
			cont++;
		}
	}
	
	if(cont>2){
		cout<<"El numero "<<*dir_numero<<" NO es primo"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}else{
		cout<<"El numero "<<*dir_numero<<" ES primo"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	
	getch();
	return 0;
}
