#include <iostream>
#include "Atleta.h"
using namespace std;

int main(int argc, char** argv) {
	Atleta* atletas;
	int numeroAtletas,indiceAtleta;
	int numeroAtleta;
	string nombre;
	float tiempoCarrera;
	
	cout<<"Digite el numero de atletas a competir: ";
	cin>>numeroAtletas;
	
	atletas = new Atleta[numeroAtletas];
	
	for(int i=0;i<numeroAtletas;i++){
		cout<<"\nDigite los atributos del Atleta: "<<(i+1)<<": "<<endl;
		
		cout<<"Digite el numero de atleta: ";
		cin>>numeroAtleta;
		fflush(stdin);
		cout<<"Digite el nombre del atleta: ";
		getline(cin,nombre);
		cout<<"Digite el tiempo de carrera: ";
		cin>>tiempoCarrera;
		
		atletas[i] = Atleta(numeroAtleta,nombre,tiempoCarrera);
	}
	
	indiceAtleta = Atleta::indiceGanador(atletas,numeroAtletas);
	
	cout<<"\nEl atleta ganador de la carrera es: "<<endl;
	(atletas+indiceAtleta)->mostrarDatos();
	
	return 0;
}
