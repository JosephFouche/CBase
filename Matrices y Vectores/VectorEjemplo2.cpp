/* CARGAR E IMPRIMIR UN VECTOR DE 6 ELEMENTOS. DESPLAZAR CICLICAMENTE
CADA ELEMENTO DEL VECTOR UN LUGAR A LA DERECHA */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int vec[6];
int i,vez;
//ejemplo 1 2 3 4 5 6  = resultado = 6 1 2 3 4 5 con 1
//5 6 1 2 3 4  con 2
// 4 5 6 1 2 3 con 3

int main(){
	srand(time(0));
	int acu,aux;
	aux=0;
	acu = 0;
	for(i=0;i<6;i++){
		
		vec[i]= rand()%100+1;
	}
	for(i=0;i<6;i++){
		
		printf("\t%d",vec[i]);
	}
	
/*printf("\nIngrese cuantas veces mover a la derecha el vector");
scanf("%d",&vez);*/

	
	aux = vec[5];// Almacenar el último elemento del vector en la variable auxiliar.
	int z=5;// Inicializar una variable z en 5.
	while ( z >= 1){ 	
	vec[z] = vec[z-1];// Desplazar cada elemento del vector un lugar a la derecha.
// 6 pasa a 5, 5 pasa 4, 4 pasa a 3, 3 pasa a2 , 2 pasa a 1
	z = z - 1;
	}
	vec[0] = aux;// Asignar el último elemento almacenado en la variable auxiliar al primer elemento del vector.
	//0 
	printf ("\nVector Resultante \n ");
	for ( i = 0 ; i < 6 ; i++){ 
	printf (" %d", vec[i]); 
	}//6 1 2 3 4 5
	printf("\n");
	for(i=0;i<6;i++){
		
		printf("\t %d",vec[i]);
	}
	
	return 0;
}