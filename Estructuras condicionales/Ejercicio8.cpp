/*8.Escribe un programa que lea de la entrada est�ndar
tres n�meros.Despu�s debe leer un cuarto n�mero e indicar 
si el n�mero coincide con alguno de los
introducidos con anterioridad.*/

#include<iostream>
using namespace std;

int main(){
	int n1,n2,n3,n4;
	
	cout<<"Digite 3 numeros: "; cin>>n1>>n2>>n3;
	
	cout<<"Digite otro numero: "; cin>>n4;
	
	if((n4==n1) || (n4==n2) || (n4==n3)){
		cout<<"\nCoincice con los anteriores numeros"<<endl;
	}
	else{
		cout<<"\No coincide con los anteriores numeros"<<endl;
	}
	
	
	return 0;
}


