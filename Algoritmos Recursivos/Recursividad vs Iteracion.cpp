/*Ejemplo:

Dado un n�mero natural N, obtener la suma de los d�gitos de que consta.
Presentar un algoritmo recursivo y otro iterativo. */

#include <iostream>
using namespace std;

//Solucion recursiva
int sumaRecursiva(int n){
	if(n<=9){ //Caso base
		return n;
	}
	else{ //Caso Recursivo
		return sumaRecursiva (n/10) + n%10;
	}
}

//Soluci�n Iterativa
int sumaIterativa(int n){
	int suma=0;
	
	while(n > 9){
		suma += n%10;
		n /= 10;
	}
	
	return (suma+n);	
}

int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	cout<<"\nLa suma de los digitos del numero es: "<<endl;
	cout<<"Algoritmo recursivo: "<<sumaRecursiva(numero)<<endl;
	cout<<"Algoritmo iterativo: "<<sumaIterativa(numero)<<endl;
	
	return 0;
}
