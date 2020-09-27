/*4.Hacer una matriz preguntando al usuario el numero de filas y columnas,
llenarla de n�meros aleatorios, copiar el contenido a otra matriz y por
�ltimo mostrarla en pantalla.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numeros[100][100],dato,nFilas,nColumnas;
	int numeros2[100][100];
	
	cout<<"Digite el numero de filas: ";
	cin>>nFilas;
	cout<<"Digite el numero de columnas: ";
	cin>>nColumnas;
	
	srand(time(NULL));
	
	//Rellenando la matriz de n�meros aleatorios.
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nColumnas;j++){
			dato = 1+rand()%(100); //Generando n�meros aleatorios entre [1-100].
			numeros[i][j] = dato;
		}
	}
	
	//Copiando el contenido a otra matriz.
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nColumnas;j++){
			numeros2[i][j] = numeros[i][j];
		}
	}
	
	//Imprimiendo matriz numeros2 en pantalla.
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nColumnas;j++){
			cout<<numeros2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}


