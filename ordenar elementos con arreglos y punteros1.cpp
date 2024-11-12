/*Hacer una funcion para almacenar N numeros en un arreglo dinamico,posteriormente 
en otra funcion buscar un numero en particular.

NOta: puedes utilizar cualquier metodo de busqueda(secuencial o binaria)*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirD();
void busquedaN(int *,int,int);


int nlugar,*posicion,datoB;



int main(){
	pedirD();
	busquedaN(posicion,nlugar,datoB);
	
	delete[] posicion;
	
	getch();
	return 0;
}
void pedirD(){
	cout<<"Ingrese la cantidad de elementosd del arreglo: ";
	cin>>nlugar;
	
	posicion = new int[nlugar];
	
	for(int i=0;i<nlugar;i++){
		cout<<"\ningrese un numero: ";
		cin>>*(posicion+i); 
	}
}
void busquedaN(int *posicion,int nlugar,int datoB){
	cout<<" que numero desea buscar ";
	cin>>datoB;
	
	int i=0;
	char band = 'f';
	while((band == 'f') && (i<nlugar)){
		if(*(posicion+i) == datoB){
			band = 'v';
		}
		i++;
	}
	
	if(band == 'f'){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'v'){
		cout<<"el numero a buscar esta en la posicion:"<<i<<" y dentro del numero esta el numero ->"<<*(posicion+i-1)<<endl;
	}
	
}

