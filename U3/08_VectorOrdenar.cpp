#include<conio.h>
#include<iostream>
using namespace std;



int main(){
	
	int num[] = {4,1,2,3,5};
	int i,j, aux;
	
	//Método burbuja
	for(i= 0; i <5; i++){
		for(j= 0; j <5; j++){
			if(num[j] > num[j + 1]){
				aux = num[j];
				num[j] = num[j+1];
				num[j+1] = aux;
			}
		}
	}
	
	cout<<"Orden ascendente: "<<endl;
		
		for(i = 0; i <5; i++){
			cout<<num[i]<<" ";
		}
		
	
	return 0;
}