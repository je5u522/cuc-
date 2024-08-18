#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

int main() {
	
	char palabra[68],aux[68],aux2[68];
	
	cout<<"por favor ingrese una palabra: ";
	cin>>palabra;
	
	strcpy(aux,palabra);
	
	strrev(palabra);
	
	strcpy(aux2,palabra);
	
	if(strcmp(aux,aux2) ==0){
		cout<<"la palabra es polindroma " ;
	}
	else {
		cout<<"la palabra no es polindroma ";
	}
	
	
	getch();
	return 0;
}
