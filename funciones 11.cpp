#include<iostream>
#include<conio.h>

using namespace std;

struct complejo{
	float real,imaginario;
}z1,z2;

//prototipos de funcion
void pedirdatos();
complejo suma(complejo,complejo);
void muestra(complejo);

int main(){
	pedirdatos();
	complejo x = suma(z1,z2);
	muestra(x);
	
	getch();
	return 0;
}
void pedirdatos(){
	cout<<"ingrese los datos del primer numero complejo: "<<endl;
	cout<<"parte real: "; cin>>z1.real;
	cout<<"parte imaginaria: "; cin>>z1.imaginario;
	
	cout<<"ingrese los datos del segundo numero complejo: "<<endl;
	cout<<"parte real: "; cin>>z2.real;
	cout<<"parte imaginaria: "; cin>>z2.imaginario;
}
complejo suma(complejo z1,complejo z2){
	z1.real += z2.real;
	z1.imaginario += z2.imaginario;
	
	return z1;
}
void muestra(complejo x){
	cout<<"\n Resultado de la suma: "<<x.real<<" ,"<<x.imaginario<<endl;
}
