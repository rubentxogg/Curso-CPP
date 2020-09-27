/*Matrices Din�micas

Ejemplo: Rellenar una matriz de NxM y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int] [int]
					*puntero_fila -> [int] [int] [int]
					*puntero_fila -> [int] [int] [int]
					
1 2 3   1   -> 2 3
4 5 6   4   -> 5 6
7 8 9   7   -> 8 9

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//Prototipo de funci�n
void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz,nFilas,nCol;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	
	//Liberar la memoria que hemos utilizado en la matriz.
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz[i];
	}
	
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de Filas: ";
	cin>>nFilas;
	cout<<"Digite el numero de columnas: ";
	cin>>nCol;
	
	//Reservar memoria para la matriz din�mica
	puntero_matriz = new int*[nFilas]; //Reservando memoria para las filas
	for(int i=0;i<nFilas;i++){
		puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas
	}
	
	cout<<"\nDigitando elementos de la matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
	cout<<"\n\nImprimiendo matriz:\n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" "; //puntero_matriz[i][j]
		}
		cout<<"\n";
	}
}
