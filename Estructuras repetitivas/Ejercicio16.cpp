/*16. Realice un programa que calcule la descomposición en factores primos
de un número entero.

Por ejemplo: 20 = 2*2*5.

20|2
10|2
5|5
1|

*/


#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	//20 - 10 - 5 
	//2 2 5
	
	for(int i=2;numero>1;i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero /= i;
		}
	}

	getch();
	return 0;
}
