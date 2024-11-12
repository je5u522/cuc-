#include<iostream>
#include<conio.h>
#include<stdlib.h>


using namespace std;

void pedirnotas();
void mostrarnotas();

int numcalif,*calif;

int main(){
	
	pedirnotas();
	mostrarnotas();
	
	delete[] calif;// liberando el espacio en bytes utilizado en arreglos dinamicos
	
	getch();
	return 0;
	
}

void pedirnotas(){
	cout<<"Digite el numero de calificaciones: ";
	cin>>numcalif;
	
	calif = new int[numcalif];//crear el arreglo
	
	for(int i=0;i<numcalif;i++){
		cout<<"ingrese una nota: ";
		cin>>calif[i];
		
	}
	
	
}
void mostrarnotas(){
	cout<<"\nmostrando notas del usuario:\n";
	for(int i=0;i<numcalif;i++){
		cout<<calif[i]<<"\n";
	}
}
