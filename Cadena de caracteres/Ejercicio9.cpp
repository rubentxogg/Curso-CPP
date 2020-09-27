/*9.Realice un programa que lea una cadena de caracteres de la entrada
estándar y muestre en la salida estándar cuántas ocurrencias de cada
vocal existen en la cadena.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char frase[30];
	int vocalA=0,vocalE=0,vocalI=0,vocalO=0,vocalU=0;
	
	cout<<"Digite una frase: ";
	cin.getline(frase,30,'\n');
	
	for(int i=0;i<30;i++){
		switch(frase[i]){
			case 'a': vocalA++; break;
			case 'e': vocalE++; break;
			case 'i': vocalI++; break;
			case 'o': vocalO++; break;
			case 'u': vocalU++; break;
		}
	}
	
	cout<<"Vocal a: "<<vocalA<<endl;
	cout<<"Vocal e: "<<vocalE<<endl;
	cout<<"Vocal i: "<<vocalI<<endl;
	cout<<"Vocal o: "<<vocalO<<endl;
	cout<<"Vocal u: "<<vocalU<<endl;
	
	getch();
	return 0;
}
