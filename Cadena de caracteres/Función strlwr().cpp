//Pasar una palabra a min�sculas - Funci�n strlwr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "PROGRAMACIONATS";
	
	strlwr(palabra);
	
	cout<<palabra<<endl;
	
	
	getch();
	return 0;
}
