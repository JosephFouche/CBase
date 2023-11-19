/*
6. Escribir un programa que lea un matriz de enteros de N filas y M columnas y muestre por
pantalla la traspuesta a dicha matriz

La traspuesta es la matriz donde la fila es la columna de matriz original y la columna la fila de la 
matriz original

Analisis
1- se declara variable n como fila y m columna de matriz original
2-	se imprime la matriz original
3- se imprime la matriz traspuesta 
*/
#include<stdio.h>
#include<time.h>
#include <stdlib.h>



int main(){
	int n,m;

	
	printf("ingresar n: ");
	scanf("%d", &n);
	
	printf("ingresar m: ");
	scanf("%d", &m);
	srand(time(0));
	int mat[n][m],i,j,k;
	int traspuesta[m][n];
	//se lee e imprime la matriz
	//srand(time(0));
	for(i=0;i<n;i++){//ejemplo n 4
		for(j=0;j<m;j++){//m 5, vas a contar 4 veces del 0 al 5
		
			mat[i][j] = rand() % 10+1;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\t%d",mat[i][j]);
			traspuesta[j][i]=mat[i][j];//se va a guardar en orden contrario
			
		}
		printf("\n");
	}
	printf("\n");
	//imprimir matriz traspuesta
	for(j=0;j<m;j++){//5
		for(i=0;i<n;i++){//se cuenta 5 veces 4
			printf("\t%d",traspuesta[j][i]);
		}
		printf("\n");
	}
	
}