//Transformar una cadena a numeros - Función atoi() y atof()

//"123.45" -> 123.45

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[] = "123.456";
	float numero;
	
	numero = atof(cad);
	
	cout<<numero<<endl;
	
	getch();
	return 0;
}
