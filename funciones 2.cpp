#include<iostream>
#include<conio.h>

using namespace std;

void intercambio(int&, int&);

int main(){
	int num1=10,num2=15;
	
	cout<<"el valor de num1 es: "<<num1<<endl;
	cout<<"el valor de num2 es: "<<num2<<endl;
	
	intercambio(num1,num2);
	
	cout<<"el valor de num1 es: "<<num1<<endl;
	cout<<"el valor de num2 es: "<<num2<<endl;
	
	
	
	
	getch();
	return 0;
}
void intercambio(int& num1, int& num2){
	int aux;
	
	aux=num1;
	num1=num2;
	num2=aux;
	
}
