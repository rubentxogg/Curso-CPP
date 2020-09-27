/*6. Hacer una funci�n para almacenar N n�meros en un arreglo din�mico,
posteriormente en otra funci�n buscar un n�mero en particular.
NOTA: Puedes utilizar cualquier m�todo de b�squeda(Secuenciall o Binaria)*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void buscarElemento(int *,int);

int nElementos, *elemento;

int main(){
	pedirDatos();
	buscarElemento(elemento,nElementos); //llamando a la funci�n para buscar un elemento del arreglo;
	
	delete[] elemento; //liberamos la memoria utilizada para el arreglo.
		
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la cantidad de numeros del array: "; cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero: ["<<i<<"]: ";
		cin>>*(elemento+i);
	}
}

void buscarElemento(int *elemento,int nElementos){
	int dato,i;
	bool band = false;
	
	cout<<"\n\nDigite un numero a buscar: ";
	cin>>dato;
	
	//B�squeda Secuencial
	i = 0;
	while((i<nElementos)&&(band == false)){
		if(*(elemento+i) == dato){
			band = true;
		}
		i++;
	}
	
	if(band == false){
		cout<<"El numero "<<dato<<" No existe en el arreglo"<<endl;
	}else{
		cout<<"El numero "<<dato<<" Si existe en el arreglo, Posicion: "<<i-1<<endl;
	}
}
