//B�squeda Secuencial

//a[5] = {3,4,2,1,5}; dato = 4;

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char a[] = {'a','e','i','o','u'};
	int i,dato;
	char band = 'F';
	
	dato= 'o';
	//B�squeda Secuencial
	i=0;
	while((band == 'F') && (i<5)){
		if(a[i]==dato){
			band = 'V';
		}
		i++;
	}
	
	if(band=='F'){
		cout<<"El numero a buscar no existe en el arreglo";
	}else if(band=='V'){
		cout<<"El numero ha sido encontrado en la pos:  "<<i-1<<endl;
	}
	
	getch();
	return 0;
}
