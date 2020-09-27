//Funciones de posicionamiento - lectura.

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir();
void leer();

int main(){
	escribir();
	leer();
	
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
//	archivo.seekp(5);
	
	archivo<<"Hola como estas?";
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	
	archivo.close();
}

void leer(){
	ifstream archivo;
	
	archivo.open("posicion.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	string linea;
	
	archivo.seekg(5);
	cout<<"\nPosicion actual: "<<archivo.tellg()<<endl;
	getline(archivo,linea);
	
	cout<<linea<<endl;
	
	archivo.close();
}
