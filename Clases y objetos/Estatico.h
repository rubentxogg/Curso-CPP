#include<iostream>
using namespace std;

class Estatico{
	private:
		static int contador; //Declaraci�n de un atributo est�tico
		string nombre;
	
	public:
		Estatico(){
			contador++;
		}
		
		int getContador(){
			return contador;
		}
		
		static int sumar(int n1,int n2){
			int suma = n1+n2;
			return suma;
		}
};
