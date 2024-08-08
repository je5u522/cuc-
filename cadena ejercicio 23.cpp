#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	
	char cad[30],cad1[30];
	
	cout<<"por favor ingrese una palabra:  "; cin>>cad;
	cout<<"por favor ingrese una palabra:  "; cin>>cad1;
	
	strupr(cad);strupr(cad1);
	
	if (strcmp(cad,cad1)==0){
		
		cout<<cad<<" y "<<cad1<<" son iguales"<<endl;
	}
	else {
		
		cout<<cad<<" y "<<cad1<<" no son iguales"<<endl;
		
	}
	
	
	
	getch();
	return 0;
}
