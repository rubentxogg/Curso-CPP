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
void mostrarArbol(Nodo *,int);

Nodo *arbol = NULL;

int main(){
	menu();
	
	getch();
	return 0;
}

//Funci�n de men�
void menu(){
	int dato,opcion,contador=0;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo: "<<endl;
		cout<<"2. Mostrar el arbol completo: "<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite un numero: ";
				cin>>dato;
				insertarNodo(arbol,dato); //Insertamos un nuevo nodo.
				cout<<"\n";
				system("pause");
				break;
			case 2: cout<<"\nMostrando el arbol completo:\n\n";
					mostrarArbol(arbol,contador);
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opcion != 3);
}


//Funci�n para crear un nuevo nodo
Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
		
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
}

//Funci�n para insertar elementos en el �rbol
void insertarNodo(Nodo *&arbol,int n){
	if(arbol == NULL){ //Si el �rbol est� vac�o
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}
	else{ //Si el �rbol tiene un nodo o m�s de un nodo
		int valorRaiz = arbol->dato; //Obtenemos el valor de la ra�z
		if(n < valorRaiz){ //Si el elemento es menor a la ra�z, insertamos en la izq
			insertarNodo(arbol->izq,n);
		}
		else{ //Si el elemento es mayor a la ra�z, insertamos en el dcho.
			insertarNodo(arbol->der,n);
		}
	}	
}

//Funci�n para mostrar el �rbol completo
void mostrarArbol(Nodo *arbol,int cont){
	if(arbol == NULL){ //Si el �rbol est� vac�o
		return;
	}
	else{
		mostrarArbol(arbol->der,cont+1);
		for(int i = 0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}
