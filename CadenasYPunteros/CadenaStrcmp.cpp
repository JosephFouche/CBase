/*
Escriba un programa que use strncmp para comparar 2 cadenas introducidas por el usuario.
El programa debe introducir el número de caracteres a comparar. El programa debe establecer si la
primera cadena es menor, igual o mayor que la segunda cadena.
*/

#include<stdio.h>
#include<string.h>

main(){
	char cad1[30],cad2[30];
	int n,ret;
	printf("\nIngrese cad1: ");
	gets(cad1);
	printf("\nIngrese cad2 ");
	gets(cad2);
	
	printf("\nIngrese cantidad de caracteres a comparar: ");
	scanf("%d",&n);
	
	ret = strncmp(cad1,cad2,n);
	
	if(ret==0){
		printf("Son iguales");
	}else{
		if(ret<0){
				printf("Cad1 mayor a Cad2");
		}else{
			printf("Cad1 menor a cad2");
		}
	}
}