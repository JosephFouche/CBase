// Cargar e imprimir una matriz de orden 3*7
// Sumar los elementos de la segunda columna con los elementos de
// la tercera columna y guardarlos en la cuarta columna.
// Luego llenar de unos los elementos de la quinta columna

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int mat[3][7];
	int i,j;
	int acu;
	srand(time(NULL));
	acu =0;
	for(i=0;i<3;i++){
		for(j=0;j<7;j++){
			
			mat[i][j]= rand() %10+1;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<7;j++){
			
			printf("\t %d", mat[i][j]);
		}
		printf("\n");
	
	}
	
	//se procede a sumar columna 2 con columna 3 y guardar su resultado en c4
	//luego llenar de 1 c5
	
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<7;j++){
			
			
				
			mat[i][3]=mat[i][2]+mat[i][1];
			
			
			mat[i][4]=1;
			
			
			
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<7;j++){
			
			printf("\t %d", mat[i][j]);
		}
		printf("\n");
	
	}
	
	
}
