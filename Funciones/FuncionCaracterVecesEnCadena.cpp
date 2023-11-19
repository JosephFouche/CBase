/*Ejercicio 4 Para examen
Crear una función que reciba una cadena y una letra, y devuelva la cantidad de veces
que dicha letra aparece en la cadena
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int veces(char *cad, char *let){
	int cont,i,j;
	i=0;
	cont=0;
	j=strlen(cad);
	for(i=0;i<j;i++){
		if(cad[i]=let){
			cont++;
		}
	}
	return cont;
}


main{
	char cadena[]="Hola Como Estas";
	char letra[] = "a";
	int resultado;
/*	printf("Ingrese cadena: ");
	gets(cadena);
	printf("Ingrese letra: ");
	gets(letra);*/
	
	
	resultado = veces(cadena,letra);
	
	printf("%s aparece en %s, %d  ",letra,cadena,resultado" veces");
}