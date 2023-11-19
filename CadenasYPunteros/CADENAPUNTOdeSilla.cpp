/*Cadena punto de silla

Se dice que una matriz tiene un punto de silla si alguna posición de la matriz es el menor
valor de su fila y a la vez el mayor de su columna. Escribir un programa que tenga como
entrada una matriz de números enteros y calcule la posición de un punto de silla (si es que
existe).
Ejemplo: Dada un matriz de “M” de 4X6.
La casilla pintada corresponde a un punto silla, M[2][1]=10 donde el 10 es mínimo en su
fila y máximo en su columna.


M=

1 	3 	3 	4 	5 	1
5 	2 	7 	8 	1 	10
20 {10} 30  50  80  70
13	 4 	11 	2 	4 	6


Análisis
1-	Ver si existe un elemento de una matriz donde sea el mayor de su columna y el  menor de su 
2- comparar si el que es menor es su fila tambien es mayor en su columna
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 4
#define m 6
main(){
	int i,j,mayorColumna,menorFila,mc,fila;
	int mat[n][m];
					
	
	fila = 0;
	bool PuntoSilla=0;
	srand(time(0));
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			mat[i][j]= rand() %10+1;
 		}
 	
	}
	

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\t%d",mat[i][j]);
 		}
 		printf("\n");
	}
	
	for(i=0;i<n;i++){
		menorFila = mat[i][0];//se pone i para contar desde 0
		int mc = 0;//valor inicial de maximo de columna al hallar el menor de la fila
		
		for(j=1;j<m;j++){
			if(mat[i][j]<menorFila){
			menorFila = mat[i][j];
			mc = j;//asignacion de maxima posicion de columna
			}
		}
		mayorColumna = mat[0][mc];//la columna mayor deberia tener el mismo numero que el de menorFila
		for(int k=1; k<n;k++){
		
			if(mat[k][mc]>mayorColumna){
				mayorColumna = mat[k][mc];
				fila = i;
			}
		}
		if(menorFila == mayorColumna){
			printf("Hay punto de silla en fila [%d], columna[%d], con valor de %d: ",fila,mc, mayorColumna);
			PuntoSilla = 1;
		}
	}
	if(PuntoSilla !=1){
		printf("\nNo hay punto de silla");
		
	}
	return 0;
}