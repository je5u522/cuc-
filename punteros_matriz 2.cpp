#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirDatos();
int **puntero_matriz1, **puntero_matriz2,nfilas,ncol;

void sumarMatrices(int **,int **,int,int);
void mostrarMatrizResultando(int **,int,int);


int main(){
	pedirDatos();
	sumarMatrices(puntero_matriz1,puntero_matriz2,nfilas,ncol);
	mostrarMatrizResultando(puntero_matriz1,nfilas,ncol);
	
	for(int i=0;i<nfilas;i++){
	
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;
	
	for(int i=0;i<nfilas;i++){
	
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de columnas: ";
	cin>>ncol;
	
	puntero_matriz1 = new int*[nfilas];
	for(int i=0;i<nfilas;i++){
		puntero_matriz1[i] = new int[ncol];
	}
	
	cout<<"\n digite los elementos de la primera matriz: \n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<" digite un numero["<<i<<"]["<<j<<"]:";
			cin>>*(*(puntero_matriz1+i)+j);
		}
	}
	
	puntero_matriz2 = new int*[nfilas];
	for(int i=0;i<nfilas;i++){
		puntero_matriz2[i] = new int[ncol];
	}
	
	cout<<"\n digite los elementos de la primera matriz: \n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<" digite un numero["<<i<<"]["<<j<<"]:";
			cin>>*(*(puntero_matriz2+i)+j);
		}
	}
	
} 
void sumarMatrices(int **puntero_matriz1,int **puntero_matriz2,int nfilas,int ncol){
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
		}
	}
}
void mostrarMatrizResultando(int **puntero_matriz1,int nfilas,int ncol){
	cout<<"\n la suma de las dos matrices es: \n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<*(*(puntero_matriz1+i)+j)<<" ";
		}
		cout<<"\n";
	}
}

