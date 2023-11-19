/*
Escribir una función char * encriptacionAleatoria(char * texto).
Reciba como parámetro el texto a encriptar y retorne el texto encriptado.


Desordenar los índices de forma aleatoria
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

main(){
	char cad1 [50], cad2[50];
	
	int i,num,num1;
	
	srand(time(0));

	printf("Ingrese cadena: ");
	gets(cad1);
	
	int k = strlen(cad1);
	
	strcpy(cad2,cad1);
	
	
	
	for(i=k-1;i>=0;i--){//Ejemplo Hola, largo 4-1 = 3
		int j = rand()%(i+1);//random desde 0 hasta 3 +1, i va decreciendo, 2+1, 1+1, 0+1
		
		
		char temp = cad2[j];//auxiliar agarra caracter de cad2 en posicion j,ej: a temp = l
		cad2[j] = cad2[i];//cad2[j]=l pasa a  a
        cad2[i] = temp;//cad[i) =a ahora es l
        printf("\nResultado: %c %c",cad2[i],cad1[i]);
	}//mezclado 
	
	
	return 0;
}