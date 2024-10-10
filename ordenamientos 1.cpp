#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	 
	 int numero[] = {5,4,3,2,1};
	 int i,j,aux;
	 
	 for(i=0;i<5;i++) {
	 	for(j=0;j<5;j++)
	 	{
	 		if(numero[j] > numero[j+1])
			 {
			 	aux=numero[j];
			 	numero[j]=numero[j+1];
			 	numero[j+1]=aux;
			  } 
		 }
	 	
	 }
	 
	 cout<<"lista desde el menor al mayor ";
	 for(i=0;i<5;i++){
	 	cout<<numero[i];
	 }
	 
	 cout<<"\nlista desde el mayor al menor ";
	 for(i=4;i>=0;i--){
	 	cout<<numero[i];
	 }
	 
	 
	
	
	
	
	
	getch();
	return 0;
}
