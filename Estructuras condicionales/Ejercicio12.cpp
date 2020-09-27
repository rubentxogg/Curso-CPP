/* Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un número
Caso 2: Número par o impar
Caso 3: Salir. */

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int opcion,num;
	float numero,cubo;
	
	cout<<"\t.:Menu:."<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"\Digite un numero: ";
				cin>>numero;
				cubo = pow(numero,3);
				cout<<"\nEl cubo del numero es: "<<cubo<<endl;
				break;
		case 2: cout<<"\nDigite un numero: ";
				cin>>num;
				if(num%2==0){
				cout<<"\nEl numero es par"<<endl;
				}			
				else{
					cout<<"\nEl numero es impar"<<endl;
				}
				break;
		case 3: break;
	}
	
	
	
	return 0;
}
