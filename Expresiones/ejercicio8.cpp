/*8. Escriba un programa que lea la entrada est�ndar los dos
catetos de un tri�ngulo rect�ngulo y escriba en la salida est�ndar
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
