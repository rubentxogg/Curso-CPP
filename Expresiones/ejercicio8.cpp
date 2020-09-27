/*8. Escriba un programa que lea la entrada estándar los dos
catetos de un triángulo rectángulo y escriba en la salida estándar
su hipotenusa.*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float a,b,hipotenusa;
	
	cout<<"El cateto a, es: "; cin>>a;
	cout<<"El cateto b, es: "; cin>>b;
	
	hipotenusa = sqrt(pow(a,2)+pow(b,2));
	
	cout.precision(2);
	cout<<"\nLa hipotenusa es: " <<hipotenusa<<endl;
	
	return 0;
}
