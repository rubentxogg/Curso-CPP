/*4. Crear una cadena que tenga la siguiente frase 
"Hola que tal", luego crear otra cadena para preguntarle al usuario 
su nombre, por ultimo añadir el nombre al final de la primera cadena y 
mostrar el mensaje completo "Hola que tal (NombreDelUsuario".*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cadena[] = "Hola que tal ";
	char cadenaName[50];
	
	cout<<"Digite el nombre del usuario: ";
	cin.getline(cadenaName,50,'\n');
	
	strcat(cadena,cadenaName);
	
	cout<<cadena<<endl;
	
	getch();
	return 0;
}
