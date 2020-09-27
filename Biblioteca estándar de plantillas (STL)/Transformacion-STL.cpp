//Algoritmos STL - Transformaci�n

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

//Funci�n para pasar las letras a MAY�SCULA
void mayusculas(char &letra){
	if(letra>= 'a' && letra <= 'z'){
		letra = letra - ( 'a' - 'A');
	}
}

//Funci�n unaria para determinar si una letra es una vocal
char vocales(char letra){
	return (letra=='A'||letra=='E'||letra=='I'||letra=='O' ||letra=='U') ? letra : '-';
}

int main(){
	vector<char> letras;
	
	//Generamos letras para el vector
	for(int i=0;i<10;i++){
		letras.push_back('a' + i);
	}
	
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
	cout<<endl;
	
	//Desordenamos el vector letras
	random_shuffle(letras.begin(),letras.end());
	
	cout<<"\nVector desordenado"<<endl;
	
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
	cout<<endl;
	
	//Pasamos a may�sculas las letras del vector
	for_each(letras.begin(),letras.end(),mayusculas);
	
	cout<<"\nVector en Mayusculas"<<endl;
	
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
	cout<<endl;
	
	cout<<"\nVocales del Vector"<<endl;
	
	//Imprimir solo las vocales
	transform(letras.begin(),letras.end(),
		ostream_iterator<char> (cout, "|"), vocales);
	
	return 0;
}
