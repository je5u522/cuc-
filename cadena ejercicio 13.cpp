#include<iostream> //atoi(tranforma los datos de una cadena en enteros)
#include<conio.h> //atof(tranforma los datos de una cadena en flotantes)
#include<stdlib.h>

using namespace std;

int main() {
	char cad[] ="123";
	int numero;
	
	
	numero=atoi(cad);
	
	cout<<numero;
	
	getch();
	return 0;
}

