/*Escribir una función que tenga como entrada
una cadena y devuelva el número de vocales,
de consonantes y de dígitos de la cadena	

Análisis
1-Ingresar cadena, luego ver con un ciclo for cuantos simbolos entre aeiou tiene
2-Otro ciclo for para contar cuantas veces aparece BCDFGHJKLMNPQRSTWXYZ
3-Otro ciclo for para contar cuantas veces aparece uno de estos digistos 0123456789
4- Utilizar strlen()para saber cantidad de caracteres que va a usar ciclo for
5-Utiliar biblioteca string.h para comparacion de cadenas
6-stdlib.h  biblioteca estándar de propósito general
*/
#include<stdio.h>
#include<stdlib.h>
int cantidad(char c){
	int conso,cantvocal,i,j,dig;
	cantvocal = 0;
	conso =0;
	dig = 0;
	while(c[i] != '\0'){
		//hallar vocales
		if(c[i]=='a' or c[i]=='e' or c[i]=='i' or c[i]=='o' or c[i]=='u' or c[i]=='A' or c[i]=='E' or c[i]=='I' or c[i]=='O' or c[i]=='U' ){
			cantvocal++;
		}
		if(c[i]=='B' or c[i]=='C' or c[i]=='D' or c[i]=='F' or c[i]=='G' or c[i]=='H' or c[i]=='J' or c[i]=='K' or c[i]=='L' or c[i]=='M' or c[i]=='N' or c[i]=='P' or c[i]=='Q'
		 or c[i]=='R' or c[i]=='S' or c[i]=='T' or c[i]=='V' or c[i]=='W' or c[i]=='X' or c[i]=='Y' or c[i]=='Z' ){
			conso++;
		}
		if(c[i]=='b' or c[i]=='c' or c[i]=='d' or c[i]=='f' or c[i]=='g' or c[i]=='h' or c[i]=='j' or c[i]=='k' or c[i]=='l' or c[i]=='m' or c[i]=='n' or c[i]=='p' or c[i]=='q'
		 or c[i]=='r' or c[i]=='s' or c[i]=='t' or c[i]=='v' or c[i]=='w' or c[i]=='x' or c[i]=='y' or c[i]=='z' ){
			conso++;
		}
		if(c[i]=='0' or c[i]=='1' or c[i]=='2' or c[i]=='3' or c[i]=='4' or c[i]=='5' or c[i]=='6' or c[i]=='7' or c[i]=='8' or c[i]=='9' ){
			dig++;
		}
		i++;
	
	
	}
	
	printf("\nCantidad de Vocales: %d",cantvocal);
	printf("\nCantidad de Consonantes: %d",conso);
	printf("\nCantidad de Dígitos: %d",dig);
	
}
main(){
	char cadena[50];
	int resultado;
	printf("Ingrese palabra: ");
	gets(cadena);
	
	resultado = cantidad(cadena)
	

	

	
}
