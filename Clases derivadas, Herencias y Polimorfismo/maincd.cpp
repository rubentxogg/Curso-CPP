#include <iostream>
#include "Triangulo.h"
using namespace std;


int main(int argc, char** argv) {
	Triangulo* t1 = new Triangulo(3,5,6,7);
	
	cout<<"Numero de lados: "<<t1->getNlados()<<endl;
	cout<<"Area: "<<t1->areaTriangulo()<<endl;
	
	return 0;
}
