/*9.Escriba una función nombrada tiempo () que tenga un parámetro en
número entero llamado totalSeg y tres parámetros de referencia enteros
nombrados horas, min y seg. La función es convertir el número de segundos
transmitido en un número equivalente de horas, minutos y segundos.*/

#include<iostream>
#include<conio.h>
using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	int totalSeg,horas,min,seg;
	
	cout<<"Digite el numero de segundos a convertir: "; cin>>totalSeg;
	
	tiempo(totalSeg, horas, min, seg);
	
	cout<<"\nEl equivalente es: "<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
	
	getch();
	return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg){
	horas = totalSeg/3600;
	totalSeg = totalSeg % 3600;
	min = totalSeg/60;
	seg = totalSeg%60;
}
