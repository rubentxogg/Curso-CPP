/*Ejercicio4. Rellenar un arreglo con n números, posteriormente utilizando
punteros, determinar el menor elemento del arreglo. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int nElementos, numeros[100], *dir_numeros,menor=999999;
	
	cout<<"Digite el numero de elementos: "; cin>>nElementos;
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero["<<i<<"]: "; cin>>numeros[i];
	}
	
	dir_numeros = numeros;
	
	for(int i=0;i<nElementos;i++){
		if(*dir_numeros < menor){
			menor= *dir_numeros;
		}
		dir_numeros++;
	}
	
	cout<<"\nEl menor elemento es: "<<menor<<endl;
	
	getch();
	return 0;
}
