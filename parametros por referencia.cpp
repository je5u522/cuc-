//paso de parametros por referencia 


#include<iostream>
#include<conio.h>

using namespace std;

void valnuevo(int&,int&);

int main() {
	int num1,num2;
	
	cout<<"digite 2 numeros: ";
	cin>>num1>>num2;
	
	valnuevo(num1,num2);
	
	cout<<"el nuevo valor del primer numero es: "<<num1<<endl;
	cout<<"el nuevo valor del segundo numero es: "<<num2<<endl;
	
	
	
	
	getch();
	return 0;
}

void valnuevo(int& xnum,int& ynum){
	cout<<"el valor del primer numero es: "<<xnum<<endl;
	cout<<"el valor del segundo numero es: "<<ynum<<endl;
	
	xnum = 89;
	ynum = 45;
}
