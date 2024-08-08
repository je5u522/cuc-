/* defina una estrutura que indique el tiempo empleado por un ciclista en
una estapa, la estrutura debe de tener tres campos: horas, minutos y segundos
escriba un programa que dado n etapas calcule el tiempo total de empleados
en correr todas las estapas.*/
#include<iostream>
#include<conio.h>


using namespace std;

struct tiempo{
	
	int horas,minutos,segundos;
	
}et[100];

int main(){
	
	int n_etapas,horast=0,minutost=0,segundost=0;
	
	cout<<"digite el numero de estapas: "; cin>>n_etapas;
	
	for(int i=0; i<n_etapas;i++){
		
		cout<<"Horas: ";cin>>et[i].horas;
		cout<<"Minutos: ";cin>>et[i].minutos;
		cout<<"Segundos: ";cin>>et[i].segundos;
		
		horast = horast + et[i].horas;
		minutost = minutost + et[i].minutos;
		if(minutost >= 60){
			minutost -= 60;
			horast++;
		}
		
		if(segundost >=60 ){
			segundost -= 60;
			minutost++;
		}
		cout<<"\n";
				
		
	}
	
	cout<<"Horas: "<<horast<<endl;
	cout<<"minutos: "<<minutost<<endl;
	cout<<"segundos: "<<segundost<<endl;
	
	getch();
	return 0;
	
}
