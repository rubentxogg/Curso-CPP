//Contenedores Asociativos - Set y Multiset

#include <iostream>
#include <iterator>
#include <algorithm>
#include <set> //Para set y multiset
using namespace std;

int main(){
	multiset<int> valores;
	
	//Insertamos elementos al multiset(MultiConjunto)
	valores.insert(10);
	valores.insert(2);
	valores.insert(5);
	valores.insert(20);
	valores.insert(3);
	
	//Mostrar en pantalla 
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	//Insertar valores duplicados
	valores.insert(10);
	valores.insert(3);
	valores.insert(3);
	valores.insert(3);
	
	//Mostrar en pantalla 
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	//Buscar un elemento en el multiset
	multiset<int>::iterator i  = valores.find(15);
	
	if(i != valores.end()){
		cout<<"\nEl elemento "<<*i<<" si ha sido encontrado"<<endl;
	}
	else{
		cout<<"\nEl elemento no ha sido encontrado"<<endl;
	}
	
	//Contar cuantas veces aparece un determinado elemento, el 3 por ejemplo
	cout<<"El numero 10 aparece "<<valores.count(10)
	<<" veces en el multiset"<<endl;
	
	//Eliminar un elemento del multiset
	valores.erase(3);
	
	//Mostrar en pantalla 
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	return 0;
}
