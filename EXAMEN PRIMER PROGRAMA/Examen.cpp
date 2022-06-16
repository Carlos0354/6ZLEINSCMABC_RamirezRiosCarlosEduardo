#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>




using namespace std;
int main(){
	int numero;
	cout<<"Digite un numero : ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
	
	return 0;
}
