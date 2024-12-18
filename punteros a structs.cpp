#include<iostream>
#include<conio.h>

using namespace std;

struct Datos{
	char nombre[30];
	int edad;
}persona, *puntero_persona = &persona;

void pedirDatos();
void mostrarDatos(Datos *);


int main(){
	pedirDatos();
	mostrarDatos(puntero_persona);
	
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(puntero_persona->nombre,30,'\n');
	cout<<"Digite su edad: ";
	cin>>puntero_persona->edad;
	
}
void mostrarDatos(Datos *puntero_persona){
	cout<<"\n Su nombre es: "<<puntero_persona->nombre<<endl;
	cout<<"su edad es: "<<puntero_persona->edad<<endl;
}
