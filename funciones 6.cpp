/*realice una funcion que tome como parametros un vector y su tamaño y diga
si el vector esta ordenado crecientemente. */

#include<iostream>
#include<conio.h>

using namespace std;

int vec[100],tam;

void datos();

void comparacion(int vec[],int tam);

int main(){
	
	datos();
	comparacion(vec,tam);
	
	getch();
	return 0;
	
}
void datos(){
	
	cout<<"porfavor ingrese el tamaño del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"por favor ingrese un numero: ";
		cin>>vec[i];
	}	
}
void comparacion(int vec[],int tam){
	int bam=0;
	
	for(int i=0;i<tam;i++){
		if(vec[i]>=vec[i-1]){
			bam=1;	
		}
		else{
			bam=0;
		}
		
	}	
	if(bam==1){
		
		cout<<"los numeros estan ordenados de mayor a menor"<<endl;
		for(int i=0;i<tam;i++){
			cout<<vec[i];
		}	
	}
	else{	
		cout<<"los numeros no estan ordenados de mayor a menor"<<endl;
		for(int i=0;i<tam;i++){
			cout<<vec[i];
		}
		
	}
	
}
