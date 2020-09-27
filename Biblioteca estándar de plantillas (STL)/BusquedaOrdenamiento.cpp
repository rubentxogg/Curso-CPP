//Algoritmos de b�squeda y ordenamiento
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>
using namespace std;

//Funci�n para generar valores aleatorios
int numerosAleatorios(){
	return rand()%30;
}

//Funci�n l�gica para calcular si un n�mero es par
template <class T>
bool esPar(T valor){
	return ((valor%2) == 0);
}

int main(){
	vector<int> valores(10);
	
	//Generamos n�meros aleatorios y los guardamos dentro de vector
	generate(valores.begin(),valores.end(),numerosAleatorios);
	
	//Mostrar en pantalla el vector
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	
	//Creamos un nuevo vector para almacenar los elementos pares
	vector<int> pares;
	
	//Iterador para recorrer el vector valores
	vector<int>::iterator i = valores.begin();
	
	while((i=find_if(i,valores.end(),esPar<int>)) != valores.end()){
		pares.push_back(*i);
		i++;
	}

	cout<<endl;
		
	cout<<"\nArreglo de numeros pares"<<endl;
	
	//Ordena el vector pares
	sort(pares.begin(),pares.end());
	
	//Mostramos el vector pares en pantalla
	copy(pares.begin(),pares.end(),ostream_iterator<int> (cout,"|"));
	
	
	
	return 0;
}
