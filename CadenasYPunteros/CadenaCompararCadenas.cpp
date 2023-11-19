// Introducir dos variables alfanuméricas de veinte caracteres,
//compararlas entre sí, e imprimir el mensaje correspondiente.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	char n1[20], n2[20];
	
	printf("ingrese primera variable: \n");
	scanf("%s",&n1);
	fflush(stdin);
	printf("ingrese segunda variable variable: \n");
	scanf("%s",&n2);
	
	
	
	if(strcmp(n1,n2) ==0){
		printf("Las variables son iguales");
		
	}else{
		printf("Las variables son diferentes");
	}
}