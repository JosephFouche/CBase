/* 
EL PROGRAMA ORDENA EN FORMA SECUENCIAL ASCENDENTE UN VECTOR

QUE SE CARGA EN FORMA DIRECTA, UTILIZANDO EL METODO DE BURBUJA

CON ITERACION ANIDADA 

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define size 12
int vec[size]={1,5,4,8,2,3,6,12,15,0,7,5};

main(){
	int i,j,aux;
	aux=0;
	printf("\nVector Original");
	for(i=0;i<size;i++){
		printf("\t %d",vec[i]);
	}
	printf("\n");
	
	//forma ascendente: de menor a mayor, creciendo
	for(i=0;i<size;i++){
		for(j=0;j<size-1;j++){
			if(vec[j]>vec[j+1]){
				
				aux = vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=aux;
				
				
			}
		}
	}
	printf("\nVector Ordenado");
	for(i=0;i<size;i++){
		printf("\t %d",vec[i]);
	}
	printf("\n");
}


