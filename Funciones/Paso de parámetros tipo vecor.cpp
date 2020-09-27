/*Paso de par�metros de tipo vector

Par�metros de la funci�n:
	void nombreDeFuncion(tipo nombreArreglo[],int tama�oArreglo)
	
llamada a la funci�n
	nombreDeFuncion(nombreAreglo, tama�oArreglo)
*/

//Cuadrados de los elementos del vector

#include<iostream>
#include<conio.h>
using namespace std;

void cuadrado(int vec[],int);
void muestra(int vec[],int);

int main(){
	const int TAM = 5;
	int vec[TAM] = {1,2,3,4,5};
	
	cuadrado(vec,TAM);
	muestra(vec,TAM);
	
	getch();
	return 0;
}

void cuadrado(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i] *= vec[i];
	}
}

void muestra(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
