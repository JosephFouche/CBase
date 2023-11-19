/* Dimensionar y cargar un vector numérico entero de 10 elementos.
Transferir a un segundo vector todos los elementos del primer vector cuyo contenido no sea
múltiplo de tres. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define n 10
int p[n], s[n];
int i;

main(){
	srand(time(0));
	int z= 0;
	for(i=0;i<n;i++){
		p[i]= rand() %100+1;
	}
	for(i=0;i<n;i++){
		printf("\t %d",  p[i]);
	}
	printf("\n");
	
	// pasar a s lo que no es multiplo de 3
	for(i=0;i<n;i++){
		if(fmod(p[i],3)!=0){
			s[z]=p[i];
			z++;
		}
	}
	printf("\nVector con todo lo que no es multiplo de 3\n");
	for(i=0;i<n;i++){
		printf("\t %d",  s[i]);
	}
	
}
