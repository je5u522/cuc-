#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;


int main() {
	
	char pal1[]="hola que tal  ";
	char pal2[40];
	
	
	cout<<"por favor ingres su nombre: ";
	cin>>pal2;
	
	
	strcat(pal1,pal2);
	
	cout<<pal1;
	
	
	
	
	
	
	
	getch();
	return 0;
}
