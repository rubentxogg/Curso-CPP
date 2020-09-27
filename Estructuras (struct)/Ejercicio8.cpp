/*8. Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos: el nombre de la persona y un valor
de tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores:
uno que contenga las personas que no tienen ninguna discapacidad y otro que 
contenga a las personas con discapacidad.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Persona{
	char nombre[30];
	bool discapacidad;
}personas[100],personasSinD[100],personasConD[100];
//personasSinD = personas sin discapacidad
//personasConD = personas con discapacidad

int main(){
	int numero_personas,j=0,k=0;
	
	cout<<"Digite el numero de personas: ";
	cin>>numero_personas;
	
	//Rellenando el vector con los datos de las personas
	for(int i=0;i<numero_personas;i++){
		fflush(stdin);
		cout<<"Digite su nombre: "; cin.getline(personas[i].nombre,20,'\n');
		cout<<"La persona tiene discapacidad(1/0): "; cin>>personas[i].discapacidad;
		
		//Almacenando personas con discapacidad
		if(personas[i].discapacidad == 1){
			strcpy(personasConD[j].nombre,personas[i].nombre);
			j++;
		}else{
			strcpy(personasSinD[k].nombre,personas[i].nombre);
			k++;
		}
	}	
	
	cout<<"\nMostrando las personas sin Discapacidad:\n";
	for(int i=0;i<k;i++){
		cout<<personasSinD[i].nombre<<endl;
	}
	
	cout<<"\nMostrando las personas con Discapacidad:\n";
	for(int i=0;i<j;i++){
		cout<<personasConD[i].nombre<<endl;
	}
	
	getch();
	return 0;
}
