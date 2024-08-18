#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
	char cn1[68],cn2[68];
	int nc1;
	float nc2,suma;
	
	cout<<"por favor ingrese una cadena de numeros enteros: ";
	cin>>cn1;
	cout<<"por favor ingrese una cadena de numeros enteros flotantes: ";
	cin>>cn2;
	
	
	nc1 = atoi(cn1);
	nc2 = atof(cn2);
	
	suma = nc1 + nc2;
	
	cout<<"la suma de albas cadenas es "<<suma;
	
	getch();
	return 0;
	
}

