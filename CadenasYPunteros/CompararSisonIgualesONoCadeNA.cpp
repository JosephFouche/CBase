/*
Introducir dos variables alfanuméricas de veinte caracteres,
compararlas entre sí, e imprimir el mensaje correspondiente. (Si son iguales o no)

*/

#include<string.h>
#include<stdio.h>

main(){
	char campo1[20],campo2[20];
	int resultado;
	
	printf("Meter Primer Variable: ");
	gets(campo1);
	printf("Meter Segunda Variable: ");
	gets(campo2);
	
	resultado = strcmpi(campo1,campo2);
	
	if(resultado == 0){
		printf("\nSon Iguales");
	}
	else{
	
			printf("\nSon diferentes");
	}
	return 0;
}