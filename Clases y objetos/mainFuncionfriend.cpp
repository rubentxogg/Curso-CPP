//Funciones Amigas (friend)

#include <iostream>
#include "Personaje.h"
using namespace std;

//Funci�n para modificar los valores de ataque y defensa de un objeto Personaje
void modificar(Personaje &p,int at,int def){
	p.ataque = at;
	p.defensa = def;
}


int main(int argc, char** argv) {
	Personaje * principal = new Personaje(100,90);
	
	principal->mostrarDatos();
	
	modificar(*principal,60,50);
	
	principal->mostrarDatos();
	
	return 0;
}
