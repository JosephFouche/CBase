/* CARGAR E IMPRIMIR TRES VECTORES V, A Y C DE 5 ELEMENTOS.

CREAR UN VECTOR D TAL QUE, LOS CINCO PRIMEROS ELEMENTOS DEL
MISMO SEAN TODOS LOS ELEMENTOS DE V, LOS CINCO SIGUIENTES
ELEMENTOS CORRESPONDAN A LOS ELEMENTOS DE A, Y LOS CINCO
ULTIMOS ELEMENTOS CORRESPONDAN A C. IMPRIMIR EL VECTOR D */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int V[5],A[5],C[5], D[15];

main(){
	srand(time(0));
	int i,r;
	r=0;
	for(i=0;i<5;i++){
		V[i]= rand() % 100+1;
	}
	for(i=0;i<5;i++){
		A[i]= rand() % 100+1;
	}
	for(i=0;i<5;i++){
		C[i]= rand() % 100+1;
		
	}
	for(i=0;i<5;i++){
		printf("\t %d",V[i]);
		
		
		
	}
	printf("\n");
		for(i=0;i<5;i++){
		printf("\t %d",A[i]);
		
		
		
	}printf("\n");
		for(i=0;i<5;i++){
		printf("\t %d",C[i]);
		
		
		
	}printf("\n");
	
	
	//vector D primeros 5 elementos
	printf("Vector D: ");
	for(i=0;i<5;i++){
		
		D[r]=V[i];//usar otra variable para evitar errores
		r++;
	}
		
	for(i=0;i<5;i++){
		
		D[r]=A[i];
		
		r++;
	}
		
	for(i=0;i<5;i++){
		
		D[r]=C[i];
		r++;
		
	}
	printf("\n");
	for(i=0;i<15;i++){
		
		printf("\t %d", D[i]);
		
		
	}
}
