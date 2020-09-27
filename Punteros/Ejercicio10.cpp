/*10. Realice un programa que lea una matriz dinámica de NxM y cree
su matriz traspuesta.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **,int,int);

int **puntero_matriz,nFilas,nCol;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	
	//Liberando memoria de la matriz.
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nFilas;
	cout<<"Digite el numero de columnas: ";
	cin>>nCol;
	
	//Reservar memoria para la matriz
	puntero_matriz = new int*[nFilas]; //Reservando memoria para las filas.
	for(int i=0;i<nFilas;i++){
		puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas.
	}
	
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j); //puntero_matriz[i][j]
		}
	}
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
	cout<<"\nImprimiendo la matriz original: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nImprimiendo la matriz traspuesta: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+j)+i)<<" ";
		}
		cout<<"\n";
	}
}
