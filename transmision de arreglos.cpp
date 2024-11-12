/*transmision de arreglos 
ejemplo: hallar el maximo elemento de  un arreglo.*/

#include<iostream>
#include<conio.h>

using namespace std;

int hallarmax(int *,int);
int main(){
	
	const int nelementos = 5;
	int numeros[nelementos] = {3,5,2,8,1};
	
	cout<<"el mayor elemento es: "<<hallarmax(numeros,nelementos);
	
	
	
	
	getch();
	return 0;
}
int hallarmax(int *dirvec,int nelementos){
	int max =0;
	
	for(int i=0;i<nelementos;i++){
		if(*(dirvec+i)>max){
			max= *(dirvec+i);
		}
	}
	return max;
}
