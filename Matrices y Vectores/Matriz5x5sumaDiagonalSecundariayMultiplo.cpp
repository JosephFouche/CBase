/*Cargar e imprimir una matriz de orden 5 * 5.
Calcular e imprimir la suma de los elementos que se hallan en la diagonal secundaria de la
matriz y que además sean múltiplos de cuatro.*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
	int matrix[5][5];
	int suma, multi,i,j,k;
	srand(time(NULL));
	
	//se ingresan datos a la matriz
	
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			k = rand() % 100+1;
			matrix[i][j] = k;
			
		}
	}
	//se imprime
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			printf("\t %d",matrix[i][j]);
			
		}
		printf("\n");
	}
	//en diagonal secudaria, que busque y sume multiplos de 4
	
	j = 4;
	
	for(i = 0; i<=4;i++){
		if(matrix[i][j]%4==0){
				suma = suma+matrix[i][j];
				
		}
		j--;
	}
	
	//se imprime la suma
	printf("\n La suma es :  %d ", suma);
	
	
}