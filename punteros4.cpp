/*rellenar un arreglo con n numeros, posteriormente utilizando punteros
determinar el menor elemento del arreglo */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int arreglo[100],numeros,*punteros,menor;
	
	cout<<"por favor ingrese el numero posiciones que tendran nuestros arreglos: "<<endl;
	cin>>numeros;
	
	for(int i=0;i<numeros;i++){
		cout<<" por favor ingrese un numero ["<<i<<"]:";
		cin>>arreglo[i];
	}
	punteros = arreglo;
	
	for(int i=0;i<numeros;i++){
		if(i==0){
			menor = *punteros;
			
		}
		else if(*punteros<menor){
			menor = *punteros;
		
		}
		punteros++;
	}
	
	cout<<"este en el numero menor ["<<menor<<"]"<<endl;
	
	
	getch();
	return 0;
}
