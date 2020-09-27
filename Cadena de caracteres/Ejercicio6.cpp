/*6.Convertir dos cadenas de minúsculas a mayúsculas. Compararlas, 
y decir si son iguales o no.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[] = "cachimba", cad2[] = "cachimba";
	
	strupr(cad1);
	strupr(cad2);
	
	cout<<cad1<<endl<<cad2<<endl;
	
	if(strcmp(cad1,cad2)==0){
		cout<<" Las cadenas son iguales";
	}else{
		cout<<" Las cadenas NO son iguales";
	}
	
	
	getch();
	return 0;
}
