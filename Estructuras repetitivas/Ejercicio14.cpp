/*14.En una clase de 5 alumnos se han realizado tres ex�menes y se
requiere determinar el n�mero de:

a)Alumnos que aprobaron todos los ex�menes.
b)Alumnos que aprobaron al menos un examen.
c)Alumnos que aprobaron �nicamente el �ltimo examen.

Realice un programa que permita la lectura de los datos y el 
c�lculo de las estad�sticas.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	float examen1,examen2,examen3;
	int aprobadosTodos=0,aprobadosUno=0,aprobadosUltimo=0;
	
	for(int i=1;i<=5;i++){
		cout<<i<<". Digite la nota del primer examen: "; cin>>examen1;
		cout<<i<<". Digite la nota del segundo examen: "; cin>>examen2;
		cout<<i<<". Digite la nota del tercer examen: "; cin>>examen3;
		cout<<"\n";
		
		if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
			aprobadosTodos++;
		}
		if((examen1>10.5)||(examen2>10.5)||(examen3>10.5)){
			aprobadosUno++;
		}
		
		if((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5)){
			aprobadosUltimo++;
		}
	}
	
	cout<<"\nAlumnos que aprobaron todos los examenes: "<<aprobadosTodos<<endl;
	cout<<"Alumnos que aprobaron un examen: "<<aprobadosUno<<endl;
	cout<<"Alumnos que aprobaron solo el ultimo examen: "<<aprobadosUltimo<<endl;
	
	system("pause");
	return 0;
}
