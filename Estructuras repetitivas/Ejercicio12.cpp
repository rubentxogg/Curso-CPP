/*12.Hacer un programa que calcule el resultado de la siguiente
expresi�n: 1-2+3-4+5-6...n 

par = -2-4-6....
impar = 1+3+5...

sumaTotal = pares+impar
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int par,sumaPares=0,nElementos,sumaImpares=0,sumaTotal=0;
		
	cout<<"Digite un numero de elementos a sumar: "; 
	cin>>nElementos;
	
	for(int i=1;i<=nElementos;i++){
		if(i%2==0){
			par = i*-1;
			sumaPares += par;
		}
		else{
			sumaImpares +=i;
		}
	}
	
	sumaTotal = sumaPares + sumaImpares;
	
	cout<<"\nEl resultado de la suma es: "<<sumaTotal<<endl;
	
	getch();
	return 0;
}
