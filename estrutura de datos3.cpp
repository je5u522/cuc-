#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct alumno{
	char nombre[30];
	int edad;
	float promedio;
	
}al1[3];

int main(){
	for(int i=0;i<3;i++){
	
		cout<<"ingrese el los datos del alumno: "<<i<<endl;
		cout<<"ingrese el nombre del alumno: ";
		fflush(stdin);
		cin.getline(al1[i].nombre,30,'\n');
		cout<<"ingrese la edad del estudiante: ";
		cin>>al1[i].edad;
		cout<<"ingrese el promedio del estudiante: ";
		cin>>al1[i].promedio;
		
	}
	
	if(al1[0].promedio > al1[1].promedio & al1[0].promedio>al1[2].promedio){
			cout<<"el estudiante: "<<al1[0].nombre<<"  "<<"tiene el mejor promedio"<<endl;
	} 
	else if(al1[2].promedio > al1[1].promedio & al1[2].promedio>al1[0].promedio){
		cout<<"el estudiante: "<<al1[2].nombre<<"  "<<"tiene el mejor promedio"<<endl;
	}
	else{
		cout<<"el estudiante: "<<al1[1].nombre<<"  "<<"tiene el mejor promedio"<<endl;
	}
	
	

	
	
	
	getch();
	return 0;
}
