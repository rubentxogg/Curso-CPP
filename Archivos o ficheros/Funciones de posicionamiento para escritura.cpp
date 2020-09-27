//Funciones de posicionamiento - escritura

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir();

int main(){
	escribir();
	
	getch();
	return 0;
}

void escribir(){
	ofstream archivo;
	
	archivo.open("posicion.txt",ios::out);
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	
	//Posiciona el cursor en N para escribir a partir de ahí.
	archivo.seekp(5);
	
	archivo<<"Como estas?";
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	
	archivo.close();
}
