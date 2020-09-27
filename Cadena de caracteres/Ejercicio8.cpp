/*8. Pedir al usuario 2 cadenas de caracteres de numeros, 
uno entero y el otro real, convertirlos a sus respectivos valores
y por último sumarlos.*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	char cad[10];
	char real[10];
	float numero2;
	int numero;
	
	cout<<"Digite un valor entero: "; cin.getline(cad,10,'\n');
	cout<<"Digite un valor flotante: "; cin.getline(real,10,'\n');
	
	
	numero = atoi(cad);
	numero2 = atof(real);
	
	cout<<"La suma de los arrays de caracteres es: "<<numero+numero2<<endl;
	
	getch();
	return 0;
}
