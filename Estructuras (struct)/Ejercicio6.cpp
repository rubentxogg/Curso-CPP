/*6. Utilizar las 2 estructuras del problema 5, pero ahora pedir
los datos para N alumnos, y calcular cuál de todos tiene el mejor 
promedio, e imprimir sus datos.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
	
}alumnos[100];

int main(){
	int numero_alumnos, posM;
	float promedio_alumno[100], mayor = 0;
	
	cout<<"Digite el numero de alumnos: "; 
	cin>>numero_alumnos;
	
	for(int i=0;i<numero_alumnos;i++){
		fflush(stdin);
		cout<<i+1<<". Digite su nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
		cout<<i+1<<". Digite su sexo: "; cin.getline(alumnos[i].sexo,10,'\n');
		cout<<i+1<<". Digite su edad: "; cin>>alumnos[i].edad;
		
		cout<<"Ahora, vamos a pedir las notas: \n";
		cout<<"Digite la primera nota: "; cin>>alumnos[i].prom.nota1;
		cout<<"Digite la segunda nota: "; cin>>alumnos[i].prom.nota2;
		cout<<"Digite la tercera nota: "; cin>>alumnos[i].prom.nota3;
		cout<<"\n";
		//Vamos a sacar el promedio del alumno
		promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
		
		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			posM = i;
		}		
	}
	
	cout<<"\nMostrando los datos del alumno con mejor promedio: \n"<<endl;;
	cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
	cout<<"Sexo: "<<alumnos[posM].sexo<<endl;
	cout<<"Edad: "<<alumnos[posM].edad<<endl;
	cout<<"Promedio: "<<promedio_alumno[posM]<<endl;
	
	getch();
	return 0;
}


