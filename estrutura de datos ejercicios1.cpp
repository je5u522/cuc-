/*ejercicio 1: escriba una funcion llamada mulrt() que acepte dos numeros en punto
flotante como parametros, multiplique estos dos numeros y desplieque el resultado*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void mult(float x, float y);

float num1,num2;


int main(){
	pedirDatos();
	mult(num1,num2);
	
	
	getch ();
	return 0;
}
void pedirDatos(){
	cout<<"digite 2 numeros: ";
	cin>>num1>>num2;
}

void mult(float x, float y){
	float multiplicacion = x*y;
	
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
}
