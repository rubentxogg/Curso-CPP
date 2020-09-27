//Ejemplo encontrar el mayor de 2 números

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de Función
int encontrarMax(int x, int y);

int main(){
	int n1,n2;
	
	cout<<"Digite 2 numeros: ";
	cin>>n1>>n2;
	
	cout<<"El mayor de los 2 numeros es: "<<encontrarMax(n1,n2)<<endl;
	
	getch();
	return 0;
}

//Definición de función
int encontrarMax(int x, int y){
	int numMax;
	
	if(x>y){
		numMax = x;
	}else{
		numMax = y;
	}
	
	return numMax;
}
