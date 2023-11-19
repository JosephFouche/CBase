/*Escribir un programa que lea una cadena clave
y un texto de como máximo 50 lineas. El programa
debe eliminar las lineas que contengan la clave


*/

#include<stdio.h>

#include<string.h>




int main(){
	
	char texto[50],letra;
	int k, contador = 0;
	printf("INTRODUCIR TEXTO \n");
	gets(texto);
	printf("Introdusca letra a buscar: \n");
	letra = getchar();
	
	
	for(k=0; k<strlen(texto);k++){
		if(texto[k]==letra){
			contador++;
		}
	}
	printf("la letra %c aparece %d veces ", letra, contador);
	return 0;
	
}
	
	
