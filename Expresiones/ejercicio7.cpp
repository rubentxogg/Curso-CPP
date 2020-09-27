/* La calificación final de un estudiante es el promedio de
las tres notas:

-La nota de prácticas que cuenta un 30% del total.
-La nota teórica que cuenta un 60%.
-La nota de participación que cuenta el 10% restante.

Escriba un programa que lea las tres notas del alumno y 
escriba su nota final.*/

#include<iostream>

using namespace std;

int main(){
	
	float notaPracticas, notaTeorica, notaParticipacion, notaFinal;
	
	cout<<"Digite la nota de prácicas: "; cin>>notaPracticas;	
	cout<<"Digite la nota teórica: "; cin>>notaTeorica;
	cout<<"Digite la nota de participación: "; cin>>notaParticipacion;
	
	notaPracticas = notaPracticas *30/100;
	notaTeorica = notaTeorica *60/100;
	notaParticipacion = notaParticipacion *10/100;
	notaFinal = notaPracticas + notaTeorica + notaParticipacion;
	
	
	cout<<"\nLa nota final es: " <<notaFinal<<endl;
	
	return 0;
}
