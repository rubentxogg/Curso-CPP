#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	
};

//Prototipos
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);

Nodo *arbol = NULL;

int main(){
	menu();
	
	getch();
	return 0;
}

//Función de menú
void menu(){
	int dato,opcion;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo: "<<endl;
		cout<<"2. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite un numero: ";
				cin>>dato;
				insertarNodo(arbol,dato); //Insertamos un nuevo nodo.
				cout<<"\n";
				system("pause");
				break;
		}
		system("cls");
	}while(opcion != 2);
}


//Función para crear un nuevo nodo
Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
		
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
}

//Función para insertar elementos en el árbol
void insertarNodo(Nodo *&arbol,int n){
	if(arbol == NULL){ //Si el árbol está vacío
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}
	else{ //Si el árbol tiene un nodo o más de un nodo
		int valorRaiz = arbol->dato; //Obtenemos el valor de la raíz
		if(n < valorRaiz){ //Si el elemento es menor a la raíz, insertamos en la izq
			insertarNodo(arbol->izq,n);
		}
		else{ //Si el elemento es mayor a la raíz, insertamos en el dcho.
			insertarNodo(arbol->der,n);
		}
	}	
}


