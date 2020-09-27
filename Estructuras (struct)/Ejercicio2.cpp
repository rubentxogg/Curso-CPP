/*2.Hacer una estructura llamada alumno, en la cual se tendrán
los siguientes campos: Nombre, edad, promedio, pedir datos al usuario 
para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio
y posteriormente imprimir los datos del alumno.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
	
}alumno[3];

int main(){
	float mayor=0;
	int pos;
	
	for(int i=0;i<3;i++){
		//Guardando los datos para 3 alumnos
		cout<<i+1<<". Introduzca el nombre: "; cin.getline(alumno[i].nombre,20,'\n');
		cout<<i+1<<". Introduzca la edad: "; cin>>alumno[i].edad;
		cout<<i+1<<". Introduzca el promedio: "; cin>>alumno[i].promedio;
		cout<<"\n";
		
	fflush(stdin);
	
	//Comprobando cual de los 3 alumnos tiene el mayor promedio
		if(alumno[i].promedio > mayor){
			mayor = alumno[i].promedio;
			pos = i;
		
		}
	}
	
	//Imprimiendo los datos del mejor promedio
	cout<<"\nDatos del alumno\n"<<endl;
	
	cout<<"\nNombre: "<<alumno[pos].nombre<<endl;
	cout<<"Edad: "<<alumno[pos].edad<<endl;
	cout<<"Promedio: "<<alumno[pos].promedio<<endl;

	getch();
	return 0;
}
