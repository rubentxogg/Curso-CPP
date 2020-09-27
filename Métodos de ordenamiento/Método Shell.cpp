//Ordenamiento Shell

#include<iostream>
#include<conio.h>
using namespace std;

void intercambio(float &x,float &y){
	float aux;
	
	aux = x;
	x = y;
	y = aux;
}

void ordenacionShell(float a[],int n){
	int salto,i,j,k;
	salto = n/2;
	
	while(salto>0){
		for(i=salto;i<n;i++){
			j = i - salto;
			while(j>=0){
				k = j + salto;
				if(a[j] <= a[k]){ //Par de elementos est�n ordenados.
					j = - 1;
				}else{ //Par de elementos est�n desordenados.
					intercambio(a[j],a[k]);
					j -= salto;
				}
			}
		}
		salto = salto/2;
	}
}

int main(){
	float arreglo[] = {4,6,1,9,5,10,2,11,19,7};
	
	ordenacionShell(arreglo,10);
	
	cout<<"Arreglo Ordenado - Forma Ascendente"<<endl;
	for(int i=0;i<10;i++){
		cout<<arreglo[i]<<"|";
	}
		
	cout<<"\n\nArreglo Ordenado - Forma Descendente"<<endl;
	for(int i=9;i>=0;i--){
		cout<<arreglo[i]<<"|";
	}
	
	cout<<endl;
	
	getch();
	return 0;
}
