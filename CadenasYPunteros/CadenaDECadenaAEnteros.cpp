/*De cadena a enteros

Escriba un programa que lea 4 cadenas que representan enteros,
que convierta las cadenas a enteros, que sume los valores,
y que imprima el total de los 4 valores
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char cad1[30],cad2[30],cad3[30],cad4[30];
	int z1,z2,z3,z4,suma;
	
	printf("Ingrese primera cadena: ");
	gets(cad1);
	printf("Ingrese segunda cadena: ");
	gets(cad2);
	printf("Ingrese tercera cadena: ");
	gets(cad3);
	printf("Ingrese cuarta cadena: ");
	gets(cad4);
	
	
	
	z1 = atoi(cad1);
	z2 = atoi(cad2);
	z3 = atoi(cad3);
	z4 = atoi(cad4);
	
	suma = z1+z2+z3+z4;
	
	printf( "Resultados: %d",suma);
	
}