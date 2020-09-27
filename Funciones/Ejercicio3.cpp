/*3.Escriba una función nombrada funpot() que eleve un número
entero que se le transmita a una potencia en número entero positivo y
despliegue el resultado.El número entero positivo deberá ser el segundo
valor transmitido a la función.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funciones:
void pedirDatos();
void funpot(int x,int y);

int numero, exponente;

int num1,num2;

int main(){
	pedirDatos();
	funpot(numero,exponente);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"Digite el exponente de elevacion: ";
	cin>>exponente;
}

void funpot(int x,int y){
	long resultado=1;
	for(int i=1;i<=y;i++){
		resultado *= x;
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
}

