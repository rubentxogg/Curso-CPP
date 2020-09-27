/*20.Realice una función recursiva para la serie Fibonacci.
Nota: La serie de Fibonacci está formada por la secuencia de 
números: 0,1,1,2,3,5,8,13,21,34... */

#include<iostream>
#include<conio.h>
using namespace std;

int fibonacci(int);

int main(){
	int nElementos;
	
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nElementos;
	}while(nElementos <= 0);
	
	cout<<"\nSerie Fibonacci: ";
	for(int i=0;i<nElementos;i++){
		cout<<fibonacci(i)<<" , ";
	}
	
	getch();
	return 0;
}

int fibonacci(int n){
	if(n<2){
		return n;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}	
}
