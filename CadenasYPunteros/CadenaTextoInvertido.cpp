/*Texto invertido Cadena*/

#include<string.h>
#include<stdio.h>

main(){
	char original[40],*reverso;
	printf("Introduzca texto \n");
	gets(original);
	
	reverso = strrev(original);
	
	printf("Texto Invertido %s\n",reverso);
	
}