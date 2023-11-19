/* CARGAR E IMPRIMIR UNA MATRIZ DE ORDEN 4 * 3.

VOLCAR TODOS LOS ELEMENTOS DE LA SEGUNDA FILA A UN VECTOR,

LUEGO IMPRIMIR EL VECTOR Y EL MAYOR ELEMENTO DEL MISMO */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mat[4][3];
int vec[3];
int i,j,k;

main(){
	srand(time(0));
	k=0;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			
			mat[i][j]= rand() % 100+1;
		}
	}
	printf("\nMatriz original\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			
			printf("\t %d",mat[i][j]);
		}
		printf("\n");
	}
	
	
	// se le asigna numeros de la segunda fila de mat a vector
	for(i=0;i<6;i++){
		for(j=0;j<3;j++){
			
			if(i==1){
				vec[k]=mat[i][j];
				k++;
				
			}
		}
		
	}
	//se imprime para ver el vector
	printf("\nVector\n");
	for(i=0;i<3;i++){
		printf("\t %d",vec[i]);
	}
	
	//ahora quiero ver cual es el numero mayor del vector
	int mayor;
	mayor = -9999;
	for(i=0;i<3;i++){
		if(vec[i]>mayor){
			mayor = vec[i];
		}
	}
	printf("\nEl mayor elemento del vector es:  %d", mayor);
	
	
}

