/*14.Realiza una función que tome como parámetros un array de enteros
y su tamaño e imprima un vector con los elementos impares del vector
recibido. */

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void impares(int vec[],int);

int vec[100],tam;

int main(){
	pedirDatos();
	impares(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tamanio del array: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
		
	}
}

void impares(int vec[],int tam){
	int vecImpares[100];
	int j=0;
	
	for(int i=0;i<tam;i++){
		if(vec[i]%2!=0){
			vecImpares[j] = vec[i];
			j++;
		}
	}
	
	cout<<"\nImprimiendo los elementos impares del vector: \n: ";
	for(int i=0;i<j;i++){
		cout<<vecImpares[i]<<" ";
	}
}
