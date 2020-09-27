/*13.Realiza una función que tome como parámetros un vector de números
y su tamaño y cambie el signo de los elementos del vector.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void cambSignos(int vector[],int);
void mostrarVector(int vector[],int);

int vector[100],tam;

int main(){
	pedirDatos();
	cambSignos(vector,tam);
	mostrarVector(vector,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del array: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vector[i];
	}
}

void cambSignos(int vector[],int tam){
	for(int i=0;i<tam;i++){
		vector[i] *= -1;
	}
}

void mostrarVector(int vec[],int tam){
	cout<<"\nMostrando los elementos del vector con signo cambiado\n:";
	for(int i=0;i<tam;i++){
		cout<<vector[i]<<" ";
	}
}
