#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
	
	char valor1[30],valor2[30];
	int numero;
	float decimal,suma=0;
	
	
	cout<<"por favor ingrese un numero entero: "; cin>>valor1;
	cout<<"por favor ingrese un numero flotante "; cin>>valor2;
	
	numero =atoi(valor1);
	decimal =atof(valor2);
	
	
	suma = numero + decimal;
	
	cout<<"la suma de los dos numeros es: "<<suma<<endl;
	 	
	
	
	getch();
	return 0;
}
