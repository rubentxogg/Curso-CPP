/*7.Escriba un programa que solicite una edad (un entero)
e indique en la salida estándar si la edad introducida está en el rango
[18-25].*/

#include<iostream>
using namespace std;

int main(){
	int edad = 0;
	cout<<"Digite la edad: "; cin>>edad;
	
	if(edad<18){
		cout<<"\nNo esta en el rango"<<endl;
	}
	else if(edad<=25){
		cout<<"\nEsta en el rango"<<endl;
	}
	else{
		cout<<"\nNo esta en el rango"<<endl;
	}
	
	return 0;
}




