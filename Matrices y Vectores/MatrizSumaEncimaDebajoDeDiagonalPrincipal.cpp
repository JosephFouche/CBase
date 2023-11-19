/*
Calcular suma de elementos por encima y por debajo de la diagonal principal.
Observación: la matriz debe de ser cuadrada.

Análisis
1-en la diagonal principal fila y columna valen igual
2- en la parte superior columna mayor a fila, en parte inferior fila mayor a columna
3-la matrix debe ser cuadrada

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 4
#define m 4
main(){
	int mat[n][m];
	int sumaA,sumaB,i,j;
	sumaB = 0;
	sumaA = 0;
	srand(time(0));
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
				mat[i][j] = rand()%10+1;
		}
		
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\t%d", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i>j){
				//parte inferior
				sumaB  = sumaB+mat[i][j];
			}
			if(i<j){
				//parte superior
				sumaA  = sumaA+mat[i][j];
			}
		}
	}
	printf("La suma de la parte superior es: %d", sumaA);
	printf("\nLa suma de la parte inferior es: %d", sumaB);
	
}

