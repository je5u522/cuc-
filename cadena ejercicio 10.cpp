#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra1[68],palabra2[68];
	
	cout<<"por favor ingrese una palabra: ";
	cin>>palabra1;	
	cout<<"por favor ingrese una palabra: ";
	cin>>palabra2;
	
	
	strupr(palabra1);
	strupr(palabra2);
	if(strcmp(palabra2,palabra1)==0)
	{
		cout<<"las palabras son iguales";
	}
	else {
		cout<<"las palabras no son iguales";
	}
	
	
	
	
	getch();
	return 0;
}
