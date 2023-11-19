/*COPIA DE UNA VARIABLE DE CARACTER A OTRA*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	char nombre[]="Eduardo";
	char apellido[]="Martinez";
	
	strcpy(nombre,apellido);//pasa lo que tiene apellido a nombre
	
	printf("la variable nombre es ahora : %s",nombre);
	
	strcat(nombre, " ");//añade espacio a nombre
	strcat(nombre,apellido);//añade apellido a nombre
	
	printf("\nNombre:  %s",nombre);
	
	
	
}

