//Arreglo de Objetos

#include <iostream>
#include "Alumno.h"
using namespace std;

int main(int argc, char** argv) {
	Alumno alumnos[4]; //Creaci�n de un array de objetos est�tico
	Alumno* alumnos2 = new Alumno[3]; //Creaci�n de un arreglo de objetos din�micos
	
	for(int i=0;i<3;i++){
		(alumnos2+i)->pedirDatos();
		cout<<endl;
	}
	
	cout<<"Mostrando las notas: "<<endl;
	
	for(int i=0;i<3;i++){
		(alumnos2+i)->mostrarNotas();
		cout<<endl;
	}
	
	return 0;
}
