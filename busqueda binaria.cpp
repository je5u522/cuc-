//busqueda binaria 
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numero[] = {1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band ='f';
	
	dato = 4;
	//algoritmo de la busqueda binaria
	inf = 0;
	sup = 5;
	
	while(inf <= sup) {
		mitad = (inf+sup)/2;
		
		if(numero[mitad] == dato){
			band = 'v';
			break;
		}
		if(numero[mitad] > dato){
			sup = mitad;
			mitad =(inf+sup)/2;
			cout<<inf<<" "<<sup<<" "<<mitad;
		}
		if(numero[mitad] < dato) {
			inf = mitad;
			mitad = (inf+sup)/2;
			cout<<inf<<" "<<sup<<" "<<mitad;
		}
	}
	
	if(band == 'v'){
		cout<<"el numero a sido encontrado en la posicion: "<<mitad<<endl;
	}
	else{
		cout<<"el numero NO A SIDO ENCOTRADO"<<endl;
	}
	
	
	
	
	getch();
	return 0;
}
