/*
36. EJERCICIO

Escriba una función que reciba dos números N y C. Debe retornar la cantidad de números primos de C dígitos que pueden
formarse con los dígitos de N. Para formar los números a comprobarse debe tomarse los dígitos contiguos de N en forma
ordenada de izquierda a derecha así como se muestra en los ejemplos.

Si existe números generados “duplicados”, contar por separado (ver ejemplo).
La verificación de que un número es primo o no debe realizarse en otra subrutina con la siguiente definición subrutina
esPrimo(n:numerico) retorna logico

Observaciones:
• Si C supera la cantidad de dígitos de N entonces retornar -1
• N siempre es positivo y mayor a cero
• Considerar al número 1 como “no primo”
• Considerar a C siempre como un entero mayor a cero.

Análisis
1- N es cadena, k strlen cuenta largo de cadena
2- Funcion int para convertir n a entero
3. usar for para saltar c veces la cadena y atrapar el entero que quede
*/
#include<stdio.h>
#include<stdlib.h>

#include<string.h>
#include <stdbool.h>
#include <math.h>


int esPrimo(int N){
	int j,limite;
	
	limite = sqrt(N);
	
	
	
	
		for(j=2;j<=limite;j++){
			if(N%j==0){
				return 0;
			}
		}
	return 1;
}

int ContarPrimos(int N, int C){
	int i,j,k;
	char cad[20];
	char ced[20];
	int cont;
	
	sprintf(cad,"%d",N);// Convierte el entero a cadena y lo guarda en 'cad'
	
	k = strlen(cad);//almacena el largo de la cadena, en este caso, la cantidad de digitos del numero
	if(C>k){
		return -1;
	}
	
	// largo de 5
	for(i=0;i<=k-C;i++){//de  0 hasta 
		
		strncpy(ced, cad+i,C);
		ced[C]='\0';
		
		int numero  = atoi(ced);	
		if(esPrimo(numero)){
			cont++;
		}
	}
	return cont;
}


int main(){
	int N;
	int C;
	
	do{
		printf("Ingrese Numero N: ");
		scanf("%d",&N);
	}
	while(N<=1);
	
	printf("\nIngrese C: ");
	scanf("%d",&C);
	
	int cantidadPrimos = ContarPrimos(N,C);
	
	printf("\nLa cantidad de primos es:  %d",cantidadPrimos);
	
	return 0;
	
	
	
	
	
}