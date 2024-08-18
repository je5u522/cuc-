#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main() {
	
	char palabra[68];
	
	cout<<"por favor ingrese su nombre en mayusculas: ";
	cin>>palabra;
	
	if(palabra[0]!='A' ){
		strlwr(palabra);
		cout<<palabra;
	}
	else{
		cout<<"el nombre comienza por a";
	}
	
	getch();
	return 0;
	
}
