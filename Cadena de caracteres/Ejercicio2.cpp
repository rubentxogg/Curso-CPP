/* Pedir al usuario una cadena de caracteres, almacenarla en un arreglo
y copiar todo su contenido hacia otro arreglo de caracteres.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char letras[20];
	char letras2[20];
	
	cout<<"Introduzca una cadena de caracteres: "; 
	cin.getline(letras,20,'\n');
	
	strcpy(letras2,letras);
		cout<<"El nuevo array de caracteres es: \n"<<letras2<<endl;
	
	getch();
	return 0;
}
