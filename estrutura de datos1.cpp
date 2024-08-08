#include<iostream>
#include<conio.h>

// estrutura de datos con datos que conocemos
/*using namespace std;

struct persona{
	char nombre[20];
	int edad;
	
}
persona1 = {"alejandro",20},
persona2 = {"ruperto",15};

 int main() {
 	
 	cout<<"nombre1: "<<persona1.nombre<<endl;
 	cout<<"edad: "<<persona1.edad<<endl;
 	
 	cout<<"nombre2: "<<persona2.nombre<<endl;
 	cout<<"edad: "<<persona2.edad<<endl;
 	
 	
 	getch();
 	return 0;
 }*/
 
 using namespace std;

struct persona{
	char nombre[20];
	int edad;
	
}persona1;

 int main() {
 	
 	cout<<"nombre: ";
 	cin.getline(persona1.nombre,20,'\n');
	cout<<"edad: ";
	cin>>persona1.edad;
	
	cout<<"\nimprimiendo datos\n";
	cout<<"nombre: "<<persona1.nombre<<endl;
	cout<<"edad: "<<persona1.edad<<endl;
	 	
 	
 	
 	getch();
 	return 0;
 }
 
 
