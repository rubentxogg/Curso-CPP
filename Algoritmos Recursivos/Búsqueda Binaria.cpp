//B�squeda binaria Recursiva

#include <iostream>
using namespace std;

int busquedaBinaria(int a[],int dato,int inferior,int superior){
	int mitad;
	if(inferior > superior){ //No encontrado
		return -1;
	}
	else{
		mitad = (inferior+superior)/2;
		if(dato == a[mitad]){ //Caso Base
			return mitad;
		}
		else if(dato > a[mitad]){
			return busquedaBinaria(a,dato,mitad+1,superior);
		}
		else{
			return busquedaBinaria(a,dato,inferior,mitad-1);
		}
	}
}

int main(){
	int arreglo[] = {3,4,5,8,9,10};
	int dato = 4;
	
	int retorno = busquedaBinaria(arreglo,dato,0,5);
	
	if(retorno == -1){
		cout<<"El dato no ha sido encontrado"<<endl;
	}
	else{
		cout<<"El dato si ha sido encontrado"<<endl;
		cout<<"Posicion: "<<retorno<<endl; 
	}
	
	
	
	return 0;
}
