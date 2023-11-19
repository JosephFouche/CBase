/*

Cargar una matriz de orden 6 * 3.

Sumar los elementos de lA fila 1 con los elementos
de la fila 2 y guardar el resultado en la fila 3.

Llenar de ceros los elementos de la fila 4.
Imprimir la matriz original y la matriz resultante. 

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mat[6][3];
int i,j;


main(){
	
	srand(time(0));
	
	for(i=0;i<6;i++){
		for(j=0;j<3;j++){
			
			mat[i][j]= rand() % 10+1;
		}
	}
	printf("\nMatriz original\n");
	for(i=0;i<6;i++){
		for(j=0;j<3;j++){
			
			printf("\t %d",mat[i][j]);
		}
		printf("\n");
	}
	
	//Sumar los elementos de lA fila 1 con los elementos
	//de la fila 2 y guardar el resultado en la fila 3.
	for(i=0;i<6;i++){
		for(j=0;j<3;j++){
			
			mat[2][j]= mat[0][j]+mat[1][j];
			mat[3][j]=0; 
			
		}
		
	}
		printf("\nMatriz Cambiada\n");
	for(i=0;i<6;i++){
		for(j=0;j<3;j++){
			
			printf("\t %d",mat[i][j]);
		}
		printf("\n");
	}
}



