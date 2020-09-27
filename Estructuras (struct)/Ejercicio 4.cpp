/*4.Hacer un arreglo de estructura llamada atleta para N atletas 
que contenga los siguientes campos: nombre, país, numero_medallas.
y devuelva los datos (Nombre, país) del atleta que ha ganado el 
mayor número de medallas.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct atleta{
	char nombre[20];
	char pais[20];
	int nMedallas;

}atletas[100];

int main(){
	int nAtletas;
	int mayor = 0;
	int pos;
	
	cout<<"Digite el numero de atletas: ";
	cin>>nAtletas;
	
for(int i=0;i<nAtletas;i++){
	fflush(stdin);
	cout<<i+1<<". Digite su nombre: "; cin.getline(atletas[i].nombre,20,'\n');
	cout<<i+1<<". Digite su pais: "; cin.getline(atletas[i].pais,20,'\n');
	cout<<i+1<<". Digite el numero de medallas: "; cin>>atletas[i].nMedallas;
	cout<<"\n";
	
	if (atletas[i].nMedallas > mayor){
		mayor = atletas[i].nMedallas;
		pos = i;
	}
}
	
	//Imprimiendo los datos del mejor atleta
	cout<<"Nombre: "<<atletas[pos].nombre<<endl;
	cout<<"Pais: "<<atletas[pos].pais<<endl;
	
	getch();
	return 0;
}
