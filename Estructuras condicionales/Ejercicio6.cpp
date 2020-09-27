/*6.Escriba un programa que lea la entrada estándar un
carácter e indique en la salida estándar si el carácter es una vocal
minúscula,es una vocal mayúscula o no es una vocal.*/

#include<iostream>
using namespace std;

int main(){
	char letra;
	
	cout<<"Digite una letra: "; 
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"\nEs una vocal minuscula"<<endl;break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"\nEs una vocal mayuscula"<<endl;break;
		default : cout<<"\nNo es una vocal"<<endl;break;
	}
	
	return 0;
}
