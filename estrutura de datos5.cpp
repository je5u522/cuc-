#include<iostream>
#include<conio.h>

using namespace std;

struct empleado{
	
	char nombre[30];
	float salario;
	
}emp[100];
	
int main() {
	
	int n_empleados,posM=0,posm=0;
	float mayor=0, menor= 99999999;
	
	cout<<"digite el numero del empleado: ";
	cin>>n_empleados;
	
	for(int i=0;i<n_empleados;i++) {
	
	fflush(stdin);
	cout<<i+1<<".digite su nombre: ";
	cin.getline(emp[i].nombre,30,'\n');
	cout<<i+1<<". digite su salario: ";
	cin>>emp[i].salario;
	
	if (emp[i].salario > mayor){
		mayor = emp[i].salario;
		posM = i;
	}
	
	if (emp[i].salario < menor){
		menor = emp[i].salario;
		posm = i;
	}
	
	}
	
	cout<<"\n : datos del empleado con mayor salario:.\n";
	cout<<"nombre: "<<emp[posM].nombre<<endl;
	cout<<"salario: "<<emp[posM].salario<<endl;
	
	cout<<"\n. :datos del empleado con menor salario\n";
	cout<<"nombre: "<<emp[posm].nombre<<endl;
	cout<<"salario: "<<emp[posm].salario<<endl;
	

	
	getch();
	return 0;
}
