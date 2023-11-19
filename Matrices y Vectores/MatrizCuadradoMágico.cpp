/*
11. Un cuadrado mágico 3 x 3 es una matriz 3 x 3 formada por números del 1 al 9 donde la
suma de sus filas, sus columnas y sus diagonales son idénticas. Crear un programa que
permita introducir un cuadrado por teclado y determine si este cuadrado es mágico o no.
El programa deberá comprobar que los números introducidos son correctos, es decir,
están entre el 1 y el 9.

Análisis
1-Obviamente crear una matriz 3x3, luego asignarle valores random del 1 al 9.
2-Crear una variable sumaFila, sumaColumna, sumaD y sumad comparar y si son iguales es mágico
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int mat[3][3] = {2,7,6,
					9,5,1,
					4,3,8};
	int i,j,k,sumaF1,sumaF2,sumaF3,sumaC1,sumaC2,sumaC3,sumaD,sumad;
	sumaF1 = 0;
	sumaF2 = 0;
	sumaF3 = 0;
	sumaC1 = 0;
	sumaC2 = 0;
	sumaC3=0;
	sumad = 0;
	sumaD = 0;
	srand(time(0));
/*	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j] = rand()% 9+1;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",mat[i][j]);
		}
		printf("\n");
	}*/
	
	//suma de sus filas
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			if(i==0 and j>=0 and j<=2){
				sumaF1 = sumaF1+mat[i][j];
				
			}
			if(i==1 and j>=0 and j<=2){
				sumaF2 = sumaF2+mat[i][j];
				
			}
			if(i==2 and j>=0 and j<=2){
				sumaF3 = sumaF3+mat[i][j];
				
			}
		}
	}
	printf("\nSuma de filas %d %d %d",sumaF1,sumaF2,sumaF3);
	//suma de columnas
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			if(j==0 and i>=0 and i<=2){
				sumaC1 = sumaC1+mat[i][j];
				
			}
			if(j==1 and i>=0 and i<=2){
				sumaC2 = sumaC2+mat[i][j];
				
			}
			if(j==2 and i>=0 and i<=2){
				sumaC3 = sumaC3+mat[i][j];
				
			}
		}
	}
		printf("\nSuma de columnas %d %d %d",sumaC1,sumaC2,sumaC3);
		
	//suma de diagonales
	//
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			//principal
			if(i==j){
				sumaD = sumaD+mat[i][j];
				
			}
			if(i==2 and j==0){
				sumad = sumad+mat[i][j];
			}
			if(i==1 and j==1){
				sumad = sumad+mat[i][j];
			}
			if(i==0 and j==2){
				sumad = sumad+mat[i][j];
			}
			
		}
	}
	
	printf("\nSuma de diagonales %d %d",sumaD,sumad);
	
	if (sumaF1==sumaF2 and sumaF2==sumaF3 and sumaF3==sumaC1 and sumaC1==sumaC2 and sumaC2==sumaC3 and sumaC3==sumaD and sumaD==sumad){
		
		printf("\nEste es un cuadrado magico");
	}else{
			printf("\n 	NO 	es un cuadrado magico");
	}
		
		
		
		
		
}

