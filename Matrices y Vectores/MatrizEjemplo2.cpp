/*) Cargar una matriz de orden 3 * 3.
Calcular e imprimir la suma de todos los elementos que se encuentran en la fila 1 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int mat[3][3];
	int i,j;
	int acu;
	srand(time(NULL));
	acu =0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			mat[i][j]= rand() %10+1;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("\t %d", mat[i][j]);
		}
		printf("\n");
	
	}
	
	//	elementos en fila 1
	
	for(i=0;i<=0;i++){
		for(j=0;j<3;j++){
			
			acu = acu +mat[i][j];
			
		}
	}
	printf("\nLa suma de fila 1 es : %d", acu);
}