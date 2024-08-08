#include<iostream>
#include<conio.h>


using namespace std;

struct atletas{
	char nombre[30],pais[30];
	int medallas;
	
}atl[100];

int main(){
	
	int can_empleados, mayor_ganador=0,pos;
	
		
	cout<<"Por favor ingrese la cantidad de atletas ganadores: ";
	cin>>can_empleados;
	
	for(int i=0; i<can_empleados;i++){
		
		fflush(stdin);
		cout<<"por favor ingrese el nombre del atleta: ";
		cin.getline(atl[i].nombre,30,'\n');
		cout<<"por favor ingrese el pais de origen: ";
		cin.getline(atl[i].pais,30, '\n');
		cout<<"por favor ingrese el total de medalla ganadas: ";
		cin>>atl[i].medallas;
		cout<<"\n";
		
		if( atl[i].medallas > mayor_ganador )
		{
			mayor_ganador = atl[i].medallas;
			pos=i;
			
		}
		
	}
	
	cout<<"el atleta con mayor cantidad de medalla es: "<<atl[pos].nombre<<endl;
	cout<<"Viene del pais: "<<atl[pos].pais<<endl;
	cout<<"con: "<<mayor_ganador<<" medallas"<<endl;
	
	
	getch();
	return 0;
}
