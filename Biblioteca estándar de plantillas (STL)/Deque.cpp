//Contenedor lineal - deque (doble cola)

#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<char> letras;
	
	// A B C
	
	letras.push_front('C'); //Agregamos un elemento por el principio
	letras.push_front('B');
	letras.push_front('A');
	
	letras.push_back('D'); //Agregamos un elemento al final del deque
	letras.push_back('E');
	letras.push_back('F');
	
	for(int i=0;i<letras.size();i++){
		cout<<letras[i]<<"|";
	}
	
	letras.pop_front(); //Elimina un elemento del frente de la cola
	letras.pop_back(); //Elimina un elemento del final del deque
	
	cout <<endl;
	
	for(int i=0;i<letras.size();i++){
		cout<<letras[i]<<"|";
	}
	
	return 0;
}
