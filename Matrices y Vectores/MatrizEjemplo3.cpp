/*) Cargar una matriz de orden 4 * 3.
Calcular e imprimir la suma de elementos que se hallan en la primera fila
y también en la tercera fila */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int mat[4][3];
	int i,j;
	int acu;
	srand(time(NULL));
	acu =0;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			
			mat[i][j]= rand() %10+1;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			
			printf("\t %d", mat[i][j]);
		}
		printf("\n");
	
	}
	
	//	elementos en fila 1 y fila 3
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0 or i==2){
				acu = acu +mat[i][j];
			}
		
			
		}
	}
	printf("\nLa suma de fila 1 y 3 es : %d", acu);
}