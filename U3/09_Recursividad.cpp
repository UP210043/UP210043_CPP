#include <iostream>
#include <conio.h>
using namespace std;


int fact(int n);


int main(){
	
	cout<<fact(5);
	
	
	
	return 0;
}

int fact(int n){
	
	if(n == 0){
		n = 1;
	}else{
		
		n = n * fact(n-1);
	}
	
	return n;
}