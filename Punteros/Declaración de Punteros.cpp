/*Punteros - Declaración de Punteros

&n = la dirección de n
*n = la variable cuya dirección está almacenada en n

*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num,*dir_num;
	
	num=20;
	dir_num = &num;
	
	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"Direccion de mem: "<<dir_num<<endl;
	
	getch();
	return 0;
}
