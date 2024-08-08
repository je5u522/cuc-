#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	
	char cad[30],cad1[30];
	
	cout<<"por favor ingrese una palabra: ";
	cin>>cad;
	
	strcpy(cad1,cad);
	strrev(cad);
	
	if (strcmp(cad1,cad)==0)
	{
		cout<<"la palabra es polindroma"<<endl;
	}
	else {
		cout<<"la palabra no es polindroma";
	}
	
	
	getch();
	return 0;
}
