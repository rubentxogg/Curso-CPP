/*6.Escriba un programa que lea la entrada est�ndar un
car�cter e indique en la salida est�ndar si el car�cter es una vocal
min�scula,es una vocal may�scula o no es una vocal.*/

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
