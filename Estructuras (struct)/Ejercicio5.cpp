/*5. Hacer 2 estructuras una llamada promedio que tendr� los siguientes
campos: nota1, nota2, nota3; y otro llamada alumno que tendr� los siguientes 
miembros: nombre, sexo, edad; hacer que la estructura promedio est� anidada 
en la estructura alumno, luego pedir todos los datos para un alumno, luego 
calcular su promedio, y por �ltimo imprimir todos sus datos incluidos en el promedio.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct promedio{
	float nota1,nota2,nota3;
};

struct alumno{
	char nombre[20], sexo[20];
	int edad;
	struct promedio promAlumno;
	
}alumnoDat;

int main(){
	float PromAlumno;
	
	cout<<"Digite el nombre del alumno: "; 
	cin.getline(alumnoDat.nombre,20,'\n');
	cout<<"Digite su sexo: ";
	cin.getline(alumnoDat.sexo,20,'\n');
	cout<<"Digite su edad: ";
	cin>>alumnoDat.edad;
	
	cout<<"\n.:Notas del Alumno.:\n";
	cout<<"Nota1: ", cin>>alumnoDat.promAlumno.nota1;
	cout<<"Nota2: ", cin>>alumnoDat.promAlumno.nota2;
	cout<<"Nota3: ", cin>>alumnoDat.promAlumno.nota3;
	
	PromAlumno = (alumnoDat.promAlumno.nota1+alumnoDat.promAlumno.nota2+alumnoDat.promAlumno.nota3)/3;
	
	cout<<"\nDatos del Alumno\n";
	cout<<"Nombre: "<<alumnoDat.nombre<<endl;
	cout<<"Sexo: "<<alumnoDat.sexo<<endl;
	cout<<"Edad: "<<alumnoDat.edad<<endl;
	cout<<"Promedio: "<<PromAlumno<<endl;
	
	
	getch();
	return 0;
}
