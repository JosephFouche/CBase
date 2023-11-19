/*1- Dado un array de N elementos obtener el número menor, el mayor y el promedio entre los elementos del array


Análisis
-Crear variable menor = 99999 y mayor = -9999,
-promedio = suma de todos los numeros dividido la cantidad de numeros


*/
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#define N 5
main(){
	int vector[N],i,j,sum,cont;
	int mayor, menor, promedio;
	mayor = -9999;
	menor = 9999;
	promedio = 0;
	sum = 0;
	for (i=1;i<=N; i++){
		printf ("Introducir Elemento %d ",i );
  		scanf ("%d", &vector[i]);
	}
	for (i=1;i<=N; i++){
		printf (" %d ",vector[i] );
  		
	}
	printf("\n");
	//hallar mayor, menor promedio
	for (i=1;i<=N; i++){
		sum = sum + vector[i];
  		if(vector[i]>mayor){
  			mayor = vector[i];
		}
		if(vector[i]<menor){
  			menor = vector[i];
		}	
		promedio = sum/N;
		
		
	}
	printf("\nNumero mayor dentro del vector: %d", mayor);
	printf("\nNumero menor dentro del vector: %d", menor);
	printf("\nPromedio del vector: %d", promedio);
}



	
	
