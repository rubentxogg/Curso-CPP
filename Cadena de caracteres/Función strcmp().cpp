//Comparar cadenas - Funci�n strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

//avion - becerro

int main(){
	char palabra1[] = "becerro";
	char palabra2[] = "avion";
	
	if(strcmp(palabra1,palabra2) > 0){
		cout<<palabra1<<" esta despues alfabeticamente";
	}
	
	
	getch();
	return 0;
}
