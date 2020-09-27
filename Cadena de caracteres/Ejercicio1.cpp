/*1. Hacer un programa que pida al usuario que digite una cadena de 
caracteres, luego verificar la longitud de la cadena, y si esta supera 
a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char frase[50];
	int longitud = 0;
	
	cout<<"Digite una frase: "; 
	cin.getline(frase,50,'\n');
	
	longitud = strlen(frase);
	
	if(longitud > 10){
		cout<<"Supera las 10 caracteres";
	}else{
		cout<<"La cadena no supera a 10 caracteres"<<endl;
	}
	
	
	
	getch();
	return 0;
}
