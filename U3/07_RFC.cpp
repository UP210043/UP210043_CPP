#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void RFC(char nombre[], char apellido_paterno[], char apellido_materno[],char fecha[], int);

int main(){
	const int TAM = 30;
	char nombre[TAM], aPaterno[TAM], aMaterno[TAM], fecha[TAM];
	
	
	
	cout<<"Ingrese un nombre: ";
	cin.getline(nombre,TAM,'\n');
	cout<<"Ingrese su apellido paterno: ";
	cin.getline(aPaterno,TAM,'\n');
	cout<<"Ingrese su apellido materno: ";
	cin.getline(aMaterno,TAM,'\n');
	cout<<"Ingrese su fecha de nacimiento aaaa/mm/dd: ";
	cin.getline(fecha,TAM,'\n');
	
	RFC(nombre,aPaterno,aMaterno,fecha,TAM);
	
	
	return 0;
}

void RFC(char nombre[], char aPaterno[], char aMaterno[],char fecha[],int TAM){
	
	char RFC[20];
	
	bool vocal = false;
	int tam, tamy, c = 0;
	strupr(nombre);
	strupr(aPaterno);
	strupr(aMaterno);
	tam = strlen(nombre);
	RFC[0] = aPaterno[0];
		for(int i = 1; i <= tam; i++){
		
		if(vocal == false){
		switch(aPaterno[i]){
			case 'A' : RFC[1] = aPaterno[i] ; vocal = true;break;
			case 'E' : RFC[1] = aPaterno[i] ; vocal = true;break;
			case 'I' : RFC[1] = aPaterno[i] ; vocal = true;break;
			case 'O' : RFC[1] = aPaterno[i] ; vocal = true;break;
			case 'U' : RFC[1] = aPaterno[i] ; vocal = true;break;
		}
		}
	}
	
	RFC[2] = aMaterno[0];
	RFC[3] = nombre[0];
	
	tamy = strlen(fecha);

	for(int i=0;i<10;i++){
		if(fecha[i] != '/'){
			RFC[4+c] = fecha[i];
			c++;
		}
	}

	cout<<endl<<RFC;
	
}
