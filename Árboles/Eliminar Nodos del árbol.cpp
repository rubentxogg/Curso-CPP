#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};

//Prototipos
void menu();
Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&,int,Nodo *);
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void remplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);

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
		cout<<"3. Buscar un elemento en el arbol: "<<endl;
		cout<<"4. Recorrer el arbol en PreOrden: "<<endl;
		cout<<"5. Recorrer el arbol en InOrden: "<<endl;
		cout<<"6. Recorrer el arbol en PostOrden: "<<endl;
		cout<<"7. Eliminar un nodo del arbol"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite un numero: ";
				cin>>dato;
				insertarNodo(arbol,dato,NULL); //Insertamos un nuevo nodo.
				cout<<"\n";
				system("pause");
				break;
			case 2: cout<<"\nMostrando el arbol completo:\n\n";
					mostrarArbol(arbol,contador);
					cout<<"\n";
					system("pause");
					break;
			case 3: cout<<"\nDigite el elemento a buscar: ";
					cin>>dato;
					if(busqueda(arbol,dato) == true){
						cout<<"\nElemento "<<dato<<" ha sido encontrado en el arbol."<<endl;					
					}
					else{
						cout<<"\nElemento "<<dato<<" NO ha sido encontrado."<<endl;
					}
					cout<<"\n";
					system("pause");
					break;
			case 4: cout<<"\nRecorrido en PreOrden: ";
					preOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 5: cout<<"\nRecorrido en InOrden: ";
					inOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 6: cout<<"\nRecorrido en PostOrden: ";
					postOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 7: cout<<"\nDigite el Nodo a eliminar: ";
					cin>>dato;
					eliminar(arbol,dato);
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opcion != 8);
}


//Funci�n para crear un nuevo nodo
Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
		
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

//Funci�n para insertar elementos en el �rbol
void insertarNodo(Nodo *&arbol,int n,Nodo *padre){
	if(arbol == NULL){ //Si el �rbol est� vac�o
		Nodo *nuevo_nodo = crearNodo(n,padre);
		arbol = nuevo_nodo;
	}
	else{ //Si el �rbol tiene un nodo o m�s de un nodo
		int valorRaiz = arbol->dato; //Obtenemos el valor de la ra�z
		if(n < valorRaiz){ //Si el elemento es menor a la ra�z, insertamos en la izq
			insertarNodo(arbol->izq,n,arbol);
		}
		else{ //Si el elemento es mayor a la ra�z, insertamos en el dcho.
			insertarNodo(arbol->der,n,arbol);
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

//Funci�n para buscar un elemento en el �rbol
bool busqueda(Nodo *arbol,int n){
	if(arbol == NULL){ //Si el �rbol est� vac�o
		return false;
	}
	else if(arbol->dato == n){ //Si el nodo es igual al elemento
		return true;
	}
	else if(n < arbol->dato){
		return busqueda(arbol->izq,n);
	}
	else{
		return busqueda(arbol->der,n);
	}
}

//Funci�n para recorrido en profundidad - PreOrden
void preOrden(Nodo *arbol){
	if(arbol == NULL){ //Si el �rbol est� vac�o 
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

//Funci�n para recorrido InOrden
void inOrden(Nodo *arbol){
	if(arbol == NULL){
	;
	return;
	}
else{
	inOrden(arbol->izq);
	cout<<arbol->dato<<" - ";
	inOrden(arbol->der);
	}
}

//Funci�n para recorrido en profundidad.
void postOrden(Nodo *arbol){
	if(arbol == NULL){ //Si el �rbol est� vac�o
		return;
	}
	else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}

//Eliminar un nodo del �rbol
void eliminar(Nodo *arbol,int n){
	if(arbol == NULL){ //Si el �rbol est� vac�o
		return; //No haces nada
	}
	else if(n < arbol->dato){ //Si el valor es menor
		eliminar(arbol->izq,n); //Busca por la izq
	}
	else if(n > arbol->dato){ //Si el valor es mayor
		eliminar(arbol->der,n); //Busca por la dcha
	}
	else{ //Si ya encontraste el valor del nodo
		eliminarNodo(arbol);
	}
}

//Funci�n para determinar el nodo m�s izq posible
Nodo *minimo(Nodo *arbol){
	if(arbol == NULL){ //Si el �rbol est� vac�o
		return NULL; //Retornas NULL
	}
	if(arbol->izq){ //Si tiene hijo izq
		return minimo(arbol->izq); //La parte m�s izq posible
	}
	else{ //Si no tiene hijo izq
		return arbol; //Retornamos el mismo nodo
	}
}

//Funci�n para reemplazar dos nodos
void reemplazar(Nodo *arbol,Nodo *nuevoNodo){
	if(arbol->padre){
		//arbol->padre hay que asignarle su nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo){
		//Procedemos a asignarle su nuevo padre
		nuevoNodo->padre = arbol->padre;
	}
}

//Funci�n para destruir un nodo
void destruirNodo(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}

//Funci�n para eliminar el nodo encontrado
void eliminarNodo(Nodo*nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar ->der){
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}
	else if(nodoEliminar->izq){ //Si tiene hijo izq
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}
	else if (nodoEliminar->der){
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
	else{ //No tiene hijos
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
	
}
