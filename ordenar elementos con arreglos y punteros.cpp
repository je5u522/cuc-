/*pedir al usuario N numeros, alamacenarlos en un arreglo dinamico posteriomente 
ordenar los numeros en orden ascendente y mostralos en pantalla.
nota: utilizar cualquier metodo de ordenamientos*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirdatos();
void ordenararreglos(int *,int);
void mostrararreglos(int *,int);

int nelementos, *elementos;

int main(){
	pedirdatos();
	ordenararreglos(elementos,nelementos);
	mostrararreglos(elementos,nelementos);
	
	delete[] elementos;
	
	getch();
	return 0;
}
void pedirdatos(){
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>nelementos;
	
	elementos = new int[nelementos];
	
	for(int i=0;i<nelementos;i++){
		cout<<"Digite un numero: ["<<i<<"]:";
		cin>>*(elementos+i);
		
	}
	
}
void ordenararreglos(int *elementos,int nelementos){
	int aux;
	
	for(int i=0;i<nelementos;i++){
		for(int j=0;j<nelementos-1;j++){
			if(*(elementos+j)>*(elementos+j+1)){
				aux = *(elementos+j);
				*(elementos+j) = *(elementos+j+1);
				*(elementos+j+1) = aux;
			}
		}
	}

}
void mostrararreglos(int *elementos,int nelementos){
	cout<<"\n\nMostrar arregglo ordenado: ";
	for(int i=0;i<nelementos;i++){
		cout<<*(elementos+i)<<"\n";
	}
}


