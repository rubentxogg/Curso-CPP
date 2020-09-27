/*1. Realice un programa que pida al usuario el nombre de un 
fichero de texto y, a continuación permita almacenar al usuario 
tantas frases como el usuario desee. */

#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribirFrase();

int main(){
	escribirFrase();
	
	system("pause");
	return 0;
}

void escribirFrase(){
	ofstream archivo;
	string nombreArchivo,frase;
	char rpt;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out); //Abriendo el archivo
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite una frase: ";
		getline(cin,frase);
		archivo<<frase<<endl;
		
		cout<<"Desea agregar otra frase? (s/n): ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close(); //Cerramos el archivo
	
}
