#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char clud[20];
}c1;

int main(){
	char categoria[20];
	
	cout<<"digite el nombre del corredor: ";
	cin.getline(c1.nombre,20,'\n');
	cout<<"digite la edad del corredor: ";
	cin>>c1.edad;
	fflush(stdin);
	cout<<"por favor ingrese el sexo del corredor: ";
	cin.getline(c1.sexo,10,'\n');
	cout<<"por favor ingrese el nombre del clud: ";
	cin.getline(c1.clud,20,'\n');
	
	if(c1.edad <= 18){
		strcpy(categoria,"juevenil");
	}
	else if(c1.edad <= 40 ){
		strcpy(categoria,"senior");
	}
	else{
		strcpy(categoria,"veterano");
	}
	
	cout<<"\ndatos del corredor: "<<endl;
	cout<<"nombre: "<<c1.nombre<<endl;
	cout<<"edad: "<<c1.edad<<endl;
	cout<<"sexo: "<<c1.sexo<<endl;
	cout<<"clud: "<<c1.clud<<endl;
	cout<<"categoria: "<<categoria;
	
		
	
	getch();
	return 0;
	
	
	
}
