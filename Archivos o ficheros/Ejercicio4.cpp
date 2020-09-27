/*Ejercicio 4. Hacer un programa en C++. Para guardar numeros telef�nicos que
muestre un men� con las siguientes opciones:

	1. Crear(nombre,apellidos,tel�fono)
	2. Agregar m�s contactos(nombre,apellidos,tel�fono)
	3. Visualizar contactos existentes
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void menu();
void crear_contacto();
void agregar_contacto();
void visualizar_contacto();

struct Datos{
	string nombre,apellido,telefono;
}datos;

int main(){
	menu();
	
	system("pause");
	return 0;
}

void menu(){
	int opcion;
	
	do{
		cout<<"\tMENU"<<endl;
		cout<<"1. Crear(nombre,apellidos,telefono)"<<endl;
		cout<<"2. Agregar mas contactos(nombre,apellidos,telefono)"<<endl;
		cout<<"3. Visualizar contactos existentes"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: crear_contacto();
			cout<<"\n";
			system("pause");
			break;
			case 2: agregar_contacto();
			cout<<"\n";
			system("pause");
			break;
			case 3: visualizar_contacto();
			cout<<"\n";
			system("pause");
			break;
		}
		system("cls");
	}while(opcion != 4);
}

void crear_contacto(){
	ofstream archivo;
	char rpt;
	
	archivo.open("AgendaTelefonica.txt",ios::out); //Abrimos el archivo en modo escritura
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	archivo<<"\tAgenda Telefonica"<<endl;
	
	do{
		fflush(stdin);
		cout<<"Digite su nombre: ";
		getline(cin,datos.nombre);
		cout<<"Digite su apellido: ";
		getline(cin,datos.apellido);
		cout<<"Digite su telefono: ";
		getline(cin,datos.telefono);
		cout<<"\n";
		
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		cout<<"Desea agregar otro contacto?(s/n): ";
		cin>>rpt;
	}while(rpt == 'S' || rpt == 's');
	
	archivo.close(); //Cerramos el archivo	
}

void agregar_contacto(){
	ofstream archivo;
	char rpt;
	
	archivo.open("AgendaTelefonica.txt",ios::app); //Abrimos el archivo en modo a�adir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nDigite su nombre: ";
		getline(cin,datos.nombre);
		cout<<"Digite su apellido: ";
		getline(cin,datos.apellido);
		cout<<"Digite su telefono: ";
		getline(cin,datos.telefono);
		cout<<"\n";
		
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl;
		
		cout<<"Desea agregar otro contacto(s/n): ";
		cin>>rpt;
	}while(rpt == 'S' || rpt == 's');
	
	archivo.close(); //Cerramos el archivo
}

void visualizar_contacto(){
	ifstream archivo;
	string texto;
	
	archivo.open("AgendaTelefonica.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //Mientras no sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}
