#include<iostream>
#include<conio.h>

using namespace std;

struct empleados{
	char nombre[20];
	float salario;
	
}emp[100];

int main(){
	int n_empleados,posM=0,posm=0;
	float mayor=0, menor =9999999999;
	
	cout<<"digite el numero de empleados: ";
	cin>>n_empleados;
	
	for(int i=0;i<n_empleados;i++){
		fflush(stdin);
		cout<<i+1<<") digite su nombre: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<i+1<<") digite su salario: ";
		cin>>emp[i].salario;
		
		
	if(emp[i].salario > mayor){
		mayor= emp[i].salario;
		posM=i;
	}
	if(emp[i].salario < menor){
		menor= emp[i].salario;
		posm=i;	
		
	}
	
	}
	
		
	
	
	cout<<"el salario mayor lo tiene el empelado: "<<emp[posM].nombre<<" con un monto de: "
	<<mayor<<endl;
	cout<<"el salario menor lo tiene el empelado: "<<emp[posm].nombre<<" con un monto de: "
	<<menor<<endl;


	getch();
	return 0;

}
