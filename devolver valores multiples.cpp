//devolver valores multiples

//suma y multiplicar 2 numeros 

#include<iostream>
#include<conio.h>

using namespace std;

void calcular(int,int,int&,int&);

int main() {
	int num1,num2,suma=0,producto=0;
	
	cout<<"digite 2 numeros: ";
	cin>>num1>>num2;
	//6 7 0 0
	calcular(num1,num2,suma,producto);
	
	cout<<"el valor de la suma es: "<<suma<<endl;
	cout<<"el valor del producto es: "<<producto<<endl;
	
	
	getch();
	return 0;
	
}
void calcular(int num1,int num2,int& suma,int& producto){
	suma = num1+num2;
	producto = num1*num2;
}
