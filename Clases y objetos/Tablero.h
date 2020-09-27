/*Ej 3: Construir un programa que permita dirigir el movimiento de un
objeto dentro de un tablero y actualice su posici�n dentro del mismo.
Los movimientos posibles son ARRIBA, ABAJO, IZQUIERDA y DERECHA. Tras
cada movimiento el programa mostrar� la nueva direcci�n elegida y las
coordenadas de situaci�n del objeto dentro del tablero. */

#include<iostream>
using namespace std;

class Tablero{
	private:
		int x,y;
	
	public:
		Tablero(int x,int y){ //Constructor
			this-> x = x;
			this-> y = y;
		}
	
		void moverArriba(int);
		void moverAbajo(int);
		void moverDerecha(int);
		void moverIzquierda(int);
		int getX();
		int getY();
};
