//Algoritmos - Iniciando con algorithm

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <cstdlib>
using namespace std;

int numerosAleatorios(){
	return rand()%10;
}

int main(){
	list<int> valores(10); //Lista de 10 elementos enteros
	
	//Generado numeros aleatorios en un rango de la lista
	generate(valores.begin(),valores.end(),numerosAleatorios);
	
	
	//Mostrando los elementos de la lista
	ostream_iterator<int> salida(cout,"|");
	copy(valores.begin(),valores.end(),salida);
	
	//Buscamos la primera aparici�n del n�mero 8 en la lista
	list<int>::iterator i;
	i = find(valores.begin(),valores.end(),4);
	
	cout<<endl;
	
	//Analizamos si el valor de i no sobrepasa los rangos de la lista
	if(i != valores.end()){
		cout<<"El elemento "<<*i<<" si ha sido encontrado en la lista"<<endl;
	}
	else{
		cout<<"El elemento no ha sido encontrado"<<endl;
	}
	
	return 0;
}
