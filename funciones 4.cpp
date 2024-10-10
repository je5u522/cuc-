#include<iostream>
#include<conio.h>

using namespace std;
void cuadrado(int vec[],int);
void muestra(int vec[],int);


int main() {
	const int Tam=5;
	int vec[Tam] = {1,2,3,4,5};
	
	cuadrado(vec,Tam);
	muestra(vec,Tam);
	
	
	getch();
	return 0;
}
void cuadrado(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i]*=vec[i];
		
	}
	
}
void muestra(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<vec[i];
		cout<<endl;
	}
}
