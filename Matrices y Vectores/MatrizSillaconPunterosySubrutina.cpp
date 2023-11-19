/*12. Se dice que una matriz tiene un punto de silla si alguna posición de la matriz es el menor
valor de su fila y a la vez el mayor de su columna. Escribir un programa que tenga como
entrada una matriz de números enteros y calcule la posición de un punto de silla (si es que
existe).


Ejemplo: Dada un matriz de “M” de 4X6.
La casilla pintada corresponde a un punto silla, M[2][1]=10 donde el 10 es mínimo en su
fila y máximo en su columna. 

*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void esSilla();//prototipo
int main(){
	int M[4][6] = {1,3,3,4,5,1,
				5,2,7,8,1,10,
				20,10,30,50,80,70,
				13,4,11,2,4,6};
	int i,j,k;
	int minFilas[4]={999,999,999,999};
	int maxColumnas[6]={-999,-999,-999,-999,-999,-999};
	srand(time(NULL));
	//se agregan los datos
	
/*	for(i=0;i<=3;i++){
		for(j=0;j<=5;j++){
			k = rand() % 10+1;
			M[i][j]=k;
		}
	}*/
	for(i=0;i<=3;i++){
		for(j=0;j<=5;j++){
			printf("\t %d", M[i][j]);
		}
		printf("\n");
	}
	//se busca punto de silla
	/*Se recorre la matriz hallando el menor valor de las filas y
	mayor valor de las columnas, luego se almacenan dichos valores en dos vectores.*/
	
	for(i=0;i<=3;i++){
		for(j=0;j<=5;j++){
			
			if(M[i][j]<minFilas[i]){
				minFilas[i]=M[i][j];
				
			}
			if(M[i][j]>maxColumnas[j]){
				maxColumnas[j]=M[i][j];
			}
			
		}
		
	}
	 k = esSilla(minFilas[i],maxColumnas[j]);
	
	


}
void esSilla(int min, int max){
	for(i=0;i<=3;i++){
		for(j=0;j<=5;j++){
			if(min[i]==max[j]){
				printf("El puento de silla es: %d %d",i,j);
			}
			
		}
		
	}
	
	

}