/*

Crear un programa llamado paresImpares que cree un array de 100 números aleatorios
del 1 al 1000. Una vez creado, mostrar el contenido y después organizarlo de forma que
estén juntos los elementos pares y los impares. Imprimir el array.

Primeros poner los pares en los primeros lugares, el resto que ocupe los impares
*/

#include<stdio.h>
#include<time.h>
#include <stdlib.h>
main(){
	
	int mat[100];
	int i,k,cont,aux;
	k=0;
	
	aux = 0;
	srand(time(0));
	
	for(i=0;i<100;i++){
		
		mat[i] = rand() % 1000+1;
		
	
	}
	for(i=0;i<100;i++){
		
			printf("\t%d", mat[i]);
	}
	printf("\n");
	for(i=0;i<100;i++){
		
		if(mat[i]%2==0){
			aux = mat[i];//4 en posicion 7 en aux, aux = 4
			mat[i]=mat[k];
			mat[k]=aux;//mat en pos 0 vale 4
			
			k++;
		}
	}
	
	printf("\nCantidad de numeros pares: %d",k);
	printf("\n");
	
	//los pares aparecen primero, luego los impares

	for(i=0;i<100;i++){
		
			printf("\t%d", mat[i]);
	}
	
	
	
	
	
	
}