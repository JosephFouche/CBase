/*
Escribir los primeros N numeros  naturales primos

desde 2,3,5,7,9,11...

Análisis:
1. Contar todos los numeros primos hasta n veces, eso nomas. Empezando de 2
2-Que es un numero primo?

*/
#include<stdio.h>
int convertir(int numero){
	
	int num,x,cont;
	num = 0;
	while(numero>0){
		num = num+1;
		x = 1;
		cont = 0;//contaremos las divisiones exactas de los numeros
		
		while(x<= num){
			if(num%x==0){
				cont = cont+1;
				
			}
			x = x+1;
		}
		if(cont==2){//aquellos numeros que solo sean divisibles por 2 numeros (1 y si mismo)
			printf("\n%d",num);
			numero = numero-1;
		}
	}
	
}
int main(){
	
	int n,resultado,i;
	
	printf("Ingrese numero");
	scanf("%d",&n);
	
	resultado = convertir(n);
	
	
}