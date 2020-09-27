/*Escriba un programa que calcule el valor de:
1!+2!+3!+...+n! (suma de factoriales).*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int nElementos,factorial=1,suma=0;
		cout<<"Digite el numero de elementos a sumar: "; 
		cin>>nElementos;
		
	for(int i=1;i<=nElementos;i++){
		factorial *= i;
		suma += factorial;
	}
		cout<<"\nLa suma de factoriales es: "<<suma<<endl;
	
	getch();
	return 0;
}
