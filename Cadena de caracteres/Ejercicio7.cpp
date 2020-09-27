/*7. Pedir su nombre al usuario en MAYÚSCULAS, si su nombre comienza
por la letra A, convertir su nombre a minúsculas, caso contrario, 
no convertirlo.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[50];
		cout<<"Introduzca su nombre en MAYUSCULAS: ";
		cin.getline(nombre,50,'\n');
	
	if(strncmp(nombre,"A",1)==0){ //(strncmp(___,___,1)==0) --> comprobar el numero de caracteres que desees.
		strlwr(nombre);
		cout<<nombre<<endl;
	}else{
		cout<<"El nombre no comienza con la letra A"<<endl;
	}
	
	getch();
	return 0;
}
