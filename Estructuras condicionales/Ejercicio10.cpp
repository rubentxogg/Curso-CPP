/*10. Mostrar los meses del a�o, pidi�ndole al 
usuario un n�mero entre (1-12),
y mostrar el mes al que corresponde.*/

#include<iostream>
using namespace std;

int main(){
	int numero;
	cout<<"Digite un numero entre 1-12: "; cin>>numero;
	
	switch(numero){
		case 1: cout<<"Enero"<<endl;break;
		case 2: cout<<"Febrero"<<endl; break;
		case 3: cout<<"Marzo"<<endl; break;
		case 4: cout<<"Abril"<<endl; break;
		case 5: cout<<"Mayo"<<endl; break;
		case 6: cout<<"Junio"<<endl; break;
		case 7: cout<<"Julio"<<endl; break;
		case 8: cout<<"Agosto"<<endl; break;
		case 9: cout<<"Septiembre"<<endl; break;
		case 10: cout<<"Octubre"<<endl; break;
		case 11: cout<<"Noviembre"<<endl; break;
		case 12: cout<<"Diciembre"<<endl; break;
		default: cout<<"No ha digitado un numero entre 1-12"; break;
	}
	
	
	return 0;
}
