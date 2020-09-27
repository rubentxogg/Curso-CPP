/*2.Realice un programa que lea de la entrada
estándar números hasta que se introduzca un cero.
En ese momento el programa debe terminar y mostrar en la
salida estándar el número de valores mayores que cero leídos.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero,conteo = 0;
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		
		if(numero>0){
			conteo++;
		}
	
	}while(numero != 0);
	
	cout<<"\nEl numero de valores mayores a cero introducidos es: "<<conteo<<endl;
	
	getch();
	return 0;
}
