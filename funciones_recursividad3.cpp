#include<iostream>
#include<conio.h>

using namespace std;

int potencia(int,int);



int main(){
	int base,exponente;
	
	cout<<"digite la base: "; cin>>base;
	cout<<"digite el exponente: "; cin>>exponente;	
	
	cout<<"\npotencia de "<<base<<" elevado a"<<exponente<<" es:"<<potencia(base,exponente)<<endl;
	getch();
	return 0;
}
int potencia(int x,int y){
	int pot;
	
	if(y==1){
		pot = x;
		
	}
	else{
		pot = x * potencia(x,y-1);
	}
	cout<<pot<<endl;
	
	getch();	
	return pot;
	
	
}

