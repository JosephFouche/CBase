/*Escribir una función que reciba una cadena de caracteres y la devuelva e forma inversa
(hola--aloh)

Análisis

strrev como funcion 
1- declarar cadena
2-
*/

#include<stdio.h>
#include<string.h>

int main(){
	int Y=0,X=0;
	char Z[50];
	printf("Digite las palabras\n");
	gets(Z);
	while(Z[X] != '\0')//\0 es final de la cadena
	{
		printf("%c",Z[X]);
		X++;
 
	}
	printf("\nLa palabra invertida es: %s", strrev(Z));
}