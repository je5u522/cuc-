#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra1[] ="hola mundo";
	char palabra2[] ="hola mundo";
	
	if(strcmp(palabra1,palabra2)==0)
	{
		cout<<"las palabras son iguales";
	}
	else {
		cout<<"las palabras son diferentes";
	}
	
	
	
	getch();
	return 0;
	
	
	
	
}
