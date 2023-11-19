/* CARGAR E IMPRIMIR UNA MATRIZ DE ORDEN 4 * 4.

DETERMINAR E IMPRIMIR SUMA DE ELEMENTOS CUYOS CONTENIDOS SE
ENCUENTRAN EN LA DIAGONAL PRINCIPAL O SOBRE ELLA 

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mat[4][4];
int i,j;
/*
	1,1	 1,2	1,3 	1,4
	2,1	 2,2	2,3 	2,4
	3,1	 3,2	3,3 	3,4
	4,1	 4,2	4,3 	4,4


*/

main(){
	
	srand(time(0));
	int acu;
	acu=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			mat[i][j]= rand() % 10+1;
		}
	}
	printf("\nMatriz original\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			printf("\t %d",mat[i][j]);
		}
		printf("\n");
	}
	//en la diagonal principal i==j, encima de ella j>i
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			if(i==j or j>i){
				acu = acu+mat[i][j];
			}
		}
	}
	
	printf("\nLa suma es:  %d",acu);
	
}
			