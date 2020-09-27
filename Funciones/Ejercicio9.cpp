/*9.Escriba una funci�n nombrada tiempo () que tenga un par�metro en
n�mero entero llamado totalSeg y tres par�metros de referencia enteros
nombrados horas, min y seg. La funci�n es convertir el n�mero de segundos
transmitido en un n�mero equivalente de horas, minutos y segundos.*/

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
