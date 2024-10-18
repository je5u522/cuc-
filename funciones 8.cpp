/*Realizar una funcion que tome como parametros un vector de enteros y su 
tamaño e imprima un vector con los elementos impares del vector recibido*/

#include<iostream>
#include<conio.h>

using namespace std;

void datos();
int vec[100],tam;
void busqueda(int vec[],int);


int main(){
	datos();
	busqueda(vec,tam);
	
	
	
	getch();
	return 0;
}
void datos(){
	cout<<"por favor ingrese el tamaño del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"por favor ingrese un numero: ";
		cin>>vec[i];
	}
}
void busqueda(int vec[],int tam){
	int imp[100],j=0;
	
	for(int i=0;i<tam;i++){
		
		if(vec[i]%2!=0){
		imp[j]= vec[i];
		 j++;
		}
		
	
	}
	
	
	cout<<"\nImprimiendo los elementos impares del vector: "<<endl;
	for(int i=0;i<j;i++){
		cout<<imp[i]<<" ";
	}
	
}


