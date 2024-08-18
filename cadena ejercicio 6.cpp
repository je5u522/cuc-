#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	
	char saludo[] =" hola que tal ";
	char nomb[68];
	
	
	cout<<" por favor ingrese su nombre: "<<;
	cin>>nomb;
	
	strcat(saludo,nomb);
	
	cout<<saludo<<endl;
	
	
	getch();
	return 0;
}
