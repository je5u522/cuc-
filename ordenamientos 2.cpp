#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numero[]={4,2,3,1,5};
	int i,pos,aux;
	
	for(i=0;i<5;i++) {
		pos=i;
		aux=numero[i];
		
		while((pos>0)&&(numero[pos-1]>aux)) {
			numero[pos] = numero[pos-1];
		
			pos--;
		}
		numero[pos] =aux;
		
	}
	
	cout<<"orden ascendente: ";
	for(i=0;i<5;i++){
		cout<<numero[i]<<" ";
	}
	
	cout<<"\norden ascendente: ";
	for(i=4;i>=0;i--){
		cout<<numero[i]<<" ";
	}
	
	getch;
	return 0;
}
