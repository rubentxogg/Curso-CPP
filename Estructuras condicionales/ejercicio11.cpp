/*11. Hacer un programa que simule un cajero autom�tico
con el saldo inicial de 1000 D�lares.*/

#include<iostream>
using namespace std;

int main(){
	int saldoInicial= 1000,opc;
	float extra,saldo = 0,retiro;
	
	cout<<"\tBienvenido a su Cajero Virtual"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero en la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo = saldoInicial + extra;
			cout<<"Dinero en cuenta: "<<saldo;break;
		case 2:
			cout<<"Digite la cantidad de dinero que va a retirar: ";
			cin>>retiro;
			
			if(retiro > saldoInicial){
				cout<<"NO tiene esa cantidad de dinero";
			}
			else{
				saldo = saldoInicial - retiro;
				cout<<"Dinero en Cuenta: "<<saldo;
			}
		case 3: break;
	}
	
	return 0;
}
