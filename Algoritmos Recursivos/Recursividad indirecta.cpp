/*Ejemplo:

Hacer un probrama que muestre el alfabeto, carácter a carácter, utilizando
recursividad mutua o indirecta */

#include <iostream>
using namespace std;

//Prototipos de función
void funcionA(char);
void funcionB(char);

int main(){
	cout<<"Alfabeto: ";
	funcionA('Z');
	cout<<endl;
	
	return 0;
}

void funcionA(char letra){
	if(letra > 'A'){
		funcionB(letra);
	}
	
	cout<<letra<<" ";
}

void funcionB(char letra){
	funcionA(--letra);
}
