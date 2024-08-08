 #include<iostream>
 #include<conio.h>
 
 using namespace std;
 
 struct info_direccion{
 	char direccion[30];
 	char ciudad[20];
 	char provincia[20];
 	
 };
 
 struct empleado{
 	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;	
 }empleados[2];
 
 int main() {
 	for(int i=0;i<2;i++){
 		fflush(stdin);
 		cout<<"digite su nombre: ";
 		cin.getline(empleados[i].nombre,20,'\n');
 		cout<<"digite su direccion: ";
 		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
 		cout<<"digite su ciudad: ";
 		cin.getline(empleados[i].dir_empleado.ciudad,30,'\n');
 		cout<<"digite su provincia: ";
 		cin.getline(empleados[i].dir_empleado.provincia,30,'\n');
 		cout<<"salario: ";
 		cin>>empleados[i].salario;
 		cout<<"\n";
	 }
	 
	 //imprimiendo los datos
	 
	 for(int i=0;i<2;i++){
	 	cout<<"nombre: "<<empleados[i].nombre<<endl;
	 	cout<<"nombre: "<<empleados[i].dir_empleado.direccion<<endl;
	 	cout<<"nombre: "<<empleados[i].dir_empleado.ciudad<<endl;
	 	cout<<"nombre: "<<empleados[i].dir_empleado.provincia<<endl;
	 	cout<<"nombre: "<<empleados[i].salario;
	 	cout<<"\n";
	 	
	 }
	 
	 
 	getch();
 	return 0;
 }
