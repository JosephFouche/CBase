/*

42. EJERCICIO
Las cadenas Fibonacci consisten en una serie de términos cuyos elementos son cadenas de caracteres. Se tiene dos cadenas
iniciales c1 y c2, que son el primer y segundo término de la serie. El tercer término de la serie se construye contenando la
primera cadena a la segunda. El cuarto término, contenando la segunda cadena a la tercera, el quinto término concatenando
la tercera cadena a la cuarta y así sucesivamente.
Contruya una subrutina que reciba tres parámetros: dos cadenas correspondientes al primer y segundo término y un número
N entero positivo mayor a 2 y menor o igual a 100. La subrutina debe retornar la cadena que corresponde al N-ésimo
término de esta serie. Debe validar que las cadenas contengan como máximo 4 caracteres.

Análisis
1-Crear cadenas que como máximo tengan 4 caracteres. Hecho
2- Se crea condición para numero.Hecho
3- Ciclo for, te pide ultima cadena del ultimo numero entonces = concatenación?


*/

#include<stdio.h>
#include<iostream>
#include <stdlib.h>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
	char c1[10],c2[10],c3[20];
	int k,l,N,i,x;
	k=0;
	l=0;
	do{//validación
		printf("Ingrese primer caracter: ");
		gets(c1);
		k = strlen(c1);
		printf("Ingrese segundo caracter: ");
		gets(c2);
		l = strlen(c2);
	}while(k>4 and l >4);
	/* numero mayor a 2 y menor o igual a 100*/
	do{//condicion
		printf("Ingrese numero n: ");
		scanf("%d", &N);
	}while(N<2 or N>100);
	
	
	

	x=1;
	
	
	while (x<=N){/*hasta que factorial alcance 12 numeros*/
		
		printf("%c\n", c1);/*imprimo 0, 1,1,2*/
		printf("%c\n", c2);
		c3 = strcat(c1,c2)/*c= 0+1=1; 1+1=2;1+2=3, */
		c1=c2;/*a=1; a=1; a= 2*/
		c2=c3;/*b=1, b=2; b=3*/
		x=x+1;/*de 1 a 2;3;4*/
		
	}
	
	
	
	return 0;
	
}