/*8. Pedir una cadena de caracteres (string) al usuario, e indicar 
cuantas veces aparece la vocal a,e,i,o,u; en la cadena de caracteres.
NOTA: Usar punteros. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

//Prototipo de función
void pedirDatos();
void contarVocales(char *);

char palabraUsuario[40];

int main(){
	pedirDatos();
	contarVocales(palabraUsuario); //&palabraUsuario[0]
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite una palabra o frase: ";
	cin.getline(palabraUsuario,40,'\n');
	
	strupr(palabraUsuario); //Pasar a mayúscula la frase/palabra.
}

void contarVocales(char *palabra){
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	while(*palabra){//Mientras palabra no sea \0
		switch(*palabra){
			case 'A': contA++;break;
			case 'E': contE++;break;
			case 'I': contI++;break;
			case 'O': contO++;break;
			case 'U': contU++;break;
		}
		palabra++;
	}
	
	cout<<"\n\nNumero de veces de la vocal A: "<<contA<<endl;
	cout<<"Numero de veces de la vocal E: "<<contE<<endl;
	cout<<"Numero de veces de la vocal I: "<<contI<<endl;
	cout<<"Numero de veces de la vocal O: "<<contO<<endl;
	cout<<"Numero de veces de la vocal U: "<<contU<<endl;
}
