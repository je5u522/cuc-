#include<iostream>
#include<conio.h>

using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	
	int totalseg,horas,min,seg;
	
	cout<<"digite el numero total de segundos: ";
	cin>>totalseg;
	
	tiempo(totalseg, horas , min , seg);
	
	cout<<"Digite el numero total de segundos: "<<endl;
	cout<<"horas: "<<horas<<endl;
	cout<<"minutos: "<<min<<endl;
	cout<<"segundos: "<<seg<<endl;
	
	
	
	
	
	
	
	getch();
	return 0;
	
}
void tiempo(int totalseg, int& horas, int& min , int& seg){
	horas = totalseg/3600;
	totalseg %= 3600;
	min = totalseg/62;
	seg = totalseg%60;
	
}
