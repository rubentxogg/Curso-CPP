/*La sentencia do ehile

	do{
		conjunto de instrucciones;
	}while(expresi�n l�gica);
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int i;
	
	i = 10;
	
	do{
		cout<<i<<endl;
		i--;//decrementa el iterador de uno en uno
	}while(i>=1);
	
	system("pause");
	return 0;
}
