/*comprobar se un numero es par o impar, y señalar la posicion de memoria donde 
se esta guardando el numero. con punteros*/

#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	int numero,*dir_numero;
	
	cout<<"por favor ingrese un numero: "; cin>>numero;
	
	dir_numero= &numero;
	
	if(*dir_numero%2==0){
		cout<<"el numero "<<*dir_numero<<" es par "<<endl;
		cout<<"posicion: "<<dir_numero<<endl;
	}
	else{
		cout<<"el numero "<<*dir_numero<<" es impar "<<endl;
		cout<<"posicion: "<<dir_numero<<endl;
	}
	
	getch();
	return 0;
}
