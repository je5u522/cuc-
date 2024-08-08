#include<iostream>
#include<conio.h>

using namespace std;
/*
int main() {
	int a[] = {3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	dato = 10;
	
	//busqueda secuencial
	i=0;
	while((band == 'F') && (i<5)) {
		if(a[i] == dato) {
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F') {
		cout<<"el numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V') {
		cout<<"el numero a sido encontrado en la posicion: "<<i-1<<endl;
	}
	
	getch();
	return 0;
}*/

int main() {
	char a[] = {'a','e','i','o','u'},dato;
	int i;
	char band = 'F';
	
	dato = 'i';
	
	//busqueda secuencial
	i=0;
	while((band == 'F') && (i<5)) {
		if(a[i] == dato) {
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F') {
		cout<<"el numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V') {
		cout<<"el numero a sido encontrado en la posicion: "<<i-1<<endl;
	}
	
	getch();
	return 0;
}
