/*ejercicio 7: pedir su nombre al usuario y devolver el numero de vocales que hay.
nota: recuerda que debes utilizar punteros.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void pedirDatos();
char nombreUsuario[30];
int contandoVocales(char *);

int main(){
	pedirDatos();
	cout<<"\n El numero de vocales del nombre es:  "<<contandoVocales(nombreUsuario)<<endl;
	
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario);//transformando o mayuscula el nombre
	
}
int contandoVocales(char *nombre){
	int cont=0;
	
		while(*nombre){//mientras nombre no sea nulo '\0'
			switch(*nombre){
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U': cont++;	
			}
			nombre++;
		}
		return cont;
	
}



