#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	
	char nomb[30],nomb1[]="B";
	
	cout<<"por favor ingrese su nombre en mayusculas: ";
	cin>>nomb;
	
	if(strcmp(nomb1,nomb)>0){
		
		strlwr(nomb);
		cout<<nomb<<endl;
	}
	else {
		cout<<nomb<<endl;
	}
	
	getch();
	return 0;
}
