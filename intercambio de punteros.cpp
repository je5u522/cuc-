/*transmision de direcciones*/

#include<iostream>
#include<conio.h>

using namespace std;
void intercambio(float *,float *);

int main(){
	float num1=20.8, num2=6.78;
	
	cout<<"primer numero: "<<num1<<endl;
	cout<<"segundo numeros: "<<num2<<endl;
	
	intercambio(&num1,&num2);
	
	cout<<"\n\ndespues del intercambio: \n\n ";
	cout<<"el nuevo valor de num1: "<<num1<<endl;
	cout<<"el nuevo valor de num2: "<<num2<<endl;
	
	
	getch();
	return 0;
}
void intercambio(float *dirnm1,float *dirnm2){
	float aux;
	
	aux= *dirnm1;
	*dirnm1=*dirnm2;
	*dirnm2= aux;
	
	
	
}
