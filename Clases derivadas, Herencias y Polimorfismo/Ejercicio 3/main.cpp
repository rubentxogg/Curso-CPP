/*3. Crear un programa para simular un equipo de f�tbol (futbolista,
entrenador y doctor), para lo cual tendremos lo siguiente:

- Una clase base Persona, que tendr� los siguientes datos:
  nombre,apellido,edad.
  
- La clase derivada Futbolista tendr� los siguientes datos:
  dorsal y posici�n.

- La clase derivada Entrenador tendr� de dato la estrategia que utiliza.

- La clase derivada M�dico, la titulaci�n y los a�os de experiencia. 

Hacer un men� donde se tengan las siguientes opciones:

a) Viaje en equipo
b) Entrenamiento
c) Partido de f�tbol
d) Planificar el entrenamiento
e) Entrevista
f) Curar lesi�n
*/

#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"

using namespace std;

Persona* equipo[4];

void viajarE(){
	for(int i=0;i<4;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
		equipo[i]->viajar();
	}
}

void entrenamientoE(){
	for(int i=0;i<4;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
		equipo[i]->entrenamiento();
	}
}

void partidoFutbolE(){
	for(int i=0;i<4;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
		equipo[i]->partidoFutbol();
	}
}

void planificarEntrenamientoE(){
		cout<<equipo[2]->getNombre()<<" "<<equipo[2]->getApellido()<<" -> ";
		((Entrenador *)equipo[2])->planificarEntrenamiento();
	
}

void entrevistaE(){
		cout<<equipo[0]->getNombre()<<" "<<equipo[0]->getApellido()<<" -> ";
		((Futbolista *)equipo[0])->entrevista();
		
		cout<<equipo[1]->getNombre()<<" "<<equipo[1]->getApellido()<<" -> ";
		((Futbolista *)equipo[1])->entrevista();	
}

void curarLesionE(){
	cout<<equipo[3]->getNombre()<<" "<<equipo[3]->getApellido()<<" -> ";
		((Medico *)equipo[3])->curarLesion();
}

void menu(){
	int opcion;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Viaje de equipo"<<endl;
		cout<<"2. Entrenamiento"<<endl;
		cout<<"3. Partido de futbol"<<endl;
		cout<<"4. Planificar entrenamiento"<<endl;
		cout<<"5. Entrevista"<<endl;
		cout<<"6. Curar lesion"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"Digite una opcion: ";
		cin>>opcion;
		cout<<endl;
		
		switch(opcion){
			case 1: //Viaje de equipo
					viajarE();
					break;
			case 2: //Entrenamiento
					entrenamientoE();
					break;
			case 3: //Partido de F�tbol
					partidoFutbolE();
					break;
			case 4: //Planificar entrenamiento
					planificarEntrenamientoE();
					break;
			case 5: //Entrevista
					entrevistaE();
					break;
			case 6: //Curar lesi�n
					curarLesionE();
					break;
			case 7: break;
			default: cout<<"\nSe equivoco de opcion de menu"<<endl;			
		
		}
		cout<<endl;
		system("pause");
		system("cls");
	}while(opcion != 7);
}

int main(int argc, char** argv) {
	equipo[0] = new Futbolista("Gonzalo","Higuain",30,9,"Delantero");
	equipo[1] = new Futbolista("Paulo","Dybala",24,10,"Delantero");
	equipo[2] = new Entrenador("Massimiliano","Alegri",50,"Defensiva");
	equipo[3] = new Medico("Alex","Marroni",59,"Fisioterapeuta",20);
	
	//menu
	menu();
	
	return 0; 
}

