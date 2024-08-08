#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main() {
	
	char palabra1[60],palabra2[60];
	
	cout<<"por favor ingrese una palabra: ";
	cin>>palabra1;
	cout<<"por favor ingrese una palabra: ";
	cin>>palabra2;
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"ambas palabras son iguales ";
	}
	else if(strcmp(palabra1,palabra2) > 0){
		cout<<"palabra1 es mayor  a palabra2";
	}
	else if(strcmp(palabra1,palabra2) < 0){
		cout<<"palabra2 es mayor a palabra1";
	}
	
	getch();
	return 0;
}
