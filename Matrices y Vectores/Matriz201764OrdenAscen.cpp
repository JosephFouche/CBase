/*
64. EJERCICIO
Dada una matriz de M * N de componentes numéricos ordenar la misma en forma ascendente.
Observaciones:
 Leer los componentes de la matriz.
 No se permite usar una matriz auxiliar.
 Imprimir la matriz ordenada.

Analisis
Crear matriz con numeros aleatorios del 1 al 100.
Usar un vector donde se organice de menor a mayor los numeros de la matriz, despues de ordenado el vector, reinsertar todos sus numeros de inicio
a fin a la matriz
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define M 4
#define N 3

void ordenarMatriz(int matriz[M][N]);
int main(){
	
	int mat[M][N];
	int i,j;
	
	
	srand(time(0));
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			mat[i][j]= rand()% 100+1;
		}
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("\t %d",mat[i][j]);
		}
		printf("\n");
	}
	//ascendente de menor a mayor
	//burbuja
	ordenarMatriz(mat);
	 // Imprimir la matriz ordenada
    printf("Matriz ordenada:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void ordenarMatriz(int matriz[M][N]){
	int i, j, k;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            for (k = 0; k < M; k++) {
                for (int l = 0; l < N; l++) {
                    if (matriz[i][j] < matriz[k][l]) {
                        // Intercambiar los elementos de lugar
                        int temp = matriz[i][j];
                        matriz[i][j] = matriz[k][l];
                        matriz[k][l] = temp;
                    }
                }
            }
        }
    }
}