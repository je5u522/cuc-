/*realice una funcion recursiva que sume los primeros n enteros positivos
nota: para plantear la funcion recursiva tenga en cuenta que la suma pued expresarse
mediante la siguiente recurrencia.*/

#include<iostream >
#include<conio.h>

using namespace std;

int suma(int);


int main(){
	int nelementos;
	
	do{
		cout<<"ingrese un numero de elementos: ";
		cin>>nelementos;
	}while(nelementos <= 0);
	
	cout<<"\n la suma es : "<<suma(nelementos)<<endl;
	
	
	getch();
	return 0;
}
int suma(int n){
	int sumar =0;
	
	if(n==1){
		sumar = 1;
	}
	else{
		sumar= n+suma(n-1);
	}
	return sumar;
}
