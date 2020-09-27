//Contenedores Asociativos - map y multimap

#include <iostream>
#include <iterator>
#include <map> //para el map y multimap
using namespace std;

typedef pair<int,string> par;

int main(){
	map<int,string> valores; //Creamos un mapa <clave,valor>
	
	//Insertar elementos en el map
	valores.insert(par(5,"Alejandro"));
	valores.insert(par(2,"Fatima"));
	valores.insert(par(1,"Juan"));
	valores.insert(par(1,"Estefany"));
	
	//Mostrar el map en pantalla
	map<int,string>::iterator i;
	for(i=valores.begin();i != valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	cout<<endl;
		
	//Insertar claves duplicadas
	valores.insert(par(1,"Luis"));
	
	//Mostrar el map en pantalla
	for(i=valores.begin();i != valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	cout<<endl;
	
	//Modificar un valor de una clave existente
	valores[1] = "Luis";
	valores[8] = "Maria";
	
	//Mostrar el map en pantalla
	for(i=valores.begin();i != valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	cout<<endl;
	
	//Buscar un elemento en el map
	i = valores.find(2);
	
	if(i != valores.end()){
		cout<<"Valor encontrado "<<i->second<<endl;
	}
	else{
		cout<<"Valor no encontrado"<<endl;
	}
	
	//Eliminar un elemento del mapa
	valores.erase(1);
	
	//Mostrar el map en pantalla
	for(i=valores.begin();i != valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	cout<<endl;
	
	return 0;
}
