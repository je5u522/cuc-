/*ejercicio 13: realizar una funcion que tome como parametro un vector de numeros 
y su tamaño y cambie el signo de los elementos del vector*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos();
int vec[100],tam;

void cambio(int vec[],int);
void mostrar(int vec[],int );

int main(){
	pedirdatos();
	cambio(vec,tam);
	mostrar(vec,tam);
	
	
	getch();
	return 0;
}
void pedirdatos(){
	cout<<"digite el tamaño del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"digite un numero: ";
		cin>>vec[i];
	}
	
	
}
void cambio(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i] *= -1;
	}
	
}
void mostrar(int vec[],int tam){
	cout<<"numeros cambiados de signos"<<endl;
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<endl;
	}
}
