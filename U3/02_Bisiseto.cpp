#include <iostream>
#include <conio.h>
using namespace std;

int bisiesto(int);
int main(){

	int year;
	
	cout<<"Ingrese un año: ";
	cin>>year;

	cout<<bisiesto(year);
	
	return 0;
}


int bisiesto(int year){
	
	int bisiesto = 0;
	if(year%400==0 || (year%4==0 && year%100!=0)){
		bisiesto = 1;
	}
	return bisiesto;
}