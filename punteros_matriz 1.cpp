#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirDatos();

int **puntero_matriz,nfilas,ncol;

void mostrarmatriz(int **,int,int);

int main(){
	pedirDatos();
	mostrarmatriz(puntero_matriz,nfilas,ncol);
	
	for(int i=0;i<nfilas;i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"digite el numero de filas: ";
	cin>>nfilas;
	cout<<"digite el numero de columnas: ";
	cin>>ncol;
	
	puntero_matriz = new int*[nfilas];
	
	for(int i=0;i<nfilas;i++){
		puntero_matriz[i] = new int[ncol];
	}
	
	cout<<"\n digitando elementos de la matriz: \n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
		
		cout<<"digite un numero["<<i<<"]["<<j<<"]: ";
		cin>>*(*(puntero_matriz+i)+j);
		}
	}
	
}
void mostrarmatriz(int **puntero_matriz,int nfilas,int ncol){
	cout<<"\n\n imprimiendo matriz\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" ";
		}
		
		cout<<"\n";
	}
}
