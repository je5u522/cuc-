#include<iostream>
#include<conio.h>

using namespace std;

struct persona{
	
	char nombre[30];
	int edad;
}p1;

void pedirdatos();
void mostrardatos(persona);

int main(){
	pedirdatos();
	mostrardatos(p1);
	
	getch();
	return 0;
} 
void pedirdatos(){
	cout<<"por ingrese su nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout<<"digite su edad: ";
	cin>>p1.edad;
}
void mostrardatos(persona p){
	cout<<"\n\n nombre: "<<p.nombre<<endl;
	cout<<"edad: "<<p.edad;
}
