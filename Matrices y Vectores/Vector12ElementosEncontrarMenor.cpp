/*Cargar un vector de doce elementos. Determinar e imprimir el menor elemento del
vector y la posición en que se encuentra.*/

#include<stdio.h>
#include <time.h>
#include<stdlib.h>

int main(){
	int veco[12];
	int i,j,cont;
	int pos;
	//se carga el vector
		srand(time(NULL));
	
	for(i=0; i<=11; i++){
		
		j = rand() % 100;
		veco[i]= j;
	}
	//se imprime 
	for(i=0; i<=11; i++){
		printf("\tNumeros: %d", veco[i]);
		
	}

	//hallar menor elemento y ver en que posición se encuentra
	cont = 9999;
	for(i=0; i<=11; i++){
		if(veco[i]<cont){
			cont  = veco[i];
			pos = i;
		}
	}
	
	printf("\nEl menor elemento es: %d", cont);
	printf("\nEn posicion : %d", pos);
}