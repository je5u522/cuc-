#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos();

int calcularsuma(int vec[],int);

int vec[100],tam;

int main(){
	
	pedirdatos();
	
	cout<<"\n la suma de los elementos del vector es: "<<calcularsuma(vec,tam)<<endl;
	
	
	
	
	getch();
	return 0;
}
void pedirdatos(){
	cout<<"por favor ingres el tamano de los vectores: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"ingrese un numero: ";
		cin>>vec[i];
		
	}
	
}
int calcularsuma(int vec[],int tam){
	int suma=0;
	
	for(int i=0;i<tam;i++){
		suma +=vec[i];
	}
	
	return suma;
}
