/*15. Realice un programa que solicite al usuario
que piense un n�mero entero entre el 1 y el 100.
El programa debe generar un numero aleatorio en el mismo rango
[1-100],e indicarle al usuario si el numero que digit� es
menor o mayor al numero aleatorio, as� hasta que lo adivine y
por ultimo, mostrarle el n�mero de intentos que le llev�.

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/

#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, dato, contador = 0;
	
	srand(time(NULL)); //Generar un n�mero aleatorio;
	dato = 1 + rand()%(100); //25
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		
		if(numero>dato){
			cout<<"\nDigite un numero menor\n";
		}
		if(numero<dato){
			cout<<"\nDigite un numero mayor\n";
		}
		contador++;
	}while(numero != dato);
	
	cout<<"\nFelicicades, adivinaste el numero.\n";
	cout<<"\nNumero de intentos:"<<contador<<endl;
	
	getch();
	return 0;
}
