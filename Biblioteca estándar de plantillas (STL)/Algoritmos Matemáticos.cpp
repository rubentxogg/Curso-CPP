//Algoritmos STL - Matemáticas

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric> //Para utilizar su funcion accumulate
using namespace std;

//Función lógica para comprobar si un número es positivo
template <class T>
bool esPositivo(T valor){
	return (valor>=0);
}

int main(){
	vector<float> numeros;
	
	//Abrimos el archivo en modo lectura
	ifstream archivo("archivoNumerico.txt",ios::in);
	
	//Copiamos todos los elementos del archivo hacia el vector numeros
	copy(istream_iterator<float>(archivo),istream_iterator<float>(),back_inserter(numeros));
	
	//Calculamos el maximo y minimo de los elementos del vector
	cout<<"Maximo: "<<*max_element(numeros.begin(),numeros.end())<<endl;
	cout<<"Minimo: "<<*min_element(numeros.begin(),numeros.end())<<endl;
	
	//Calculamos el valor promedio de los elementos del vector
	cout<<"\nValor promedio: "
	<<accumulate(numeros.begin(),numeros.end(),0.0)/numeros.size()<<endl;
	
	//Calcular el conteo de los numeros positivos
	cout<<"Cantidad de numeros positivos: "
	<<count_if(numeros.begin(),numeros.end(),esPositivo<float>)<<endl;
	
	
	return 0;
}
