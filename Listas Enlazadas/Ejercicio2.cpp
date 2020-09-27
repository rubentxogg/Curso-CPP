/*Ejercicio 2. Crear una lista que almacene "n" números reales y 
calcular su suma y promedio de estos.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	float dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main(){
	Nodo *lista = NULL;	
	float dato;
	char respuesta;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		insertarLista(lista,dato); //Insertamos el numero en lista
		
		cout<<"Desea agregar un nuevo elemento en lista (s/n): ";
		cin>>respuesta;
	}while(respuesta == 's' || respuesta == 'S');
	
	cout<<"\nElementos en lista:\n";
	mostrarLista(lista);
	
	calcularSumaPromedio(lista);
	
	getch();
	return 0;
}

//Inserta elementos al final de la lista
void insertarLista(Nodo *&lista,float n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){ //Si la lista está vacía
		lista = nuevo_nodo;
	}else{
		aux = lista;
		while(aux->siguiente != NULL){ //Recorrer la lista
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo; //Agregamos el nuevo nodo
	}
	cout<<"\tElemento "<<n<<" insertado en lista correctamente"<<endl;
}

//Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista){
	while(lista != NULL){//Mientras no sea el final de la lista
		cout<<lista->dato<<" -> ";
		lista = lista->siguiente; //Avanzar en lista
	}
}

//Calcular la suma y promedio de los elementos de la lista
void calcularSumaPromedio(Nodo *lista){
	float suma=0,promedio;
	int contador = 0;
	
	while(lista != NULL){ //Mientras no sea el final de la lista
		suma += lista->dato; //Suma iterativa
		contador++; //Contar el número de elementos de la lista
		lista = lista->siguiente; //Avanzar en lista
	}
	
	promedio = suma/contador;
	
	cout<<"\n\nLa suma es: "<<suma<<endl;
	cout<<"El promedio es: "<<promedio<<endl;
}
