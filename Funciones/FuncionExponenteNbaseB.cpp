/*Escribir un programa que lea los 2 enteros positivos
n y b que llame a una función CambiarBase para calcular
y visualizar la representación del numero n en la base b



Analisis
1-b a la n como 2 a la 4 = 16
2-multiplicar  b por si mismo como n veces
3- 2**0=1; 2**1=2...2**7=128

*/

#include<stdio.h>
int potencia(int base, int expo){
	int prod;
	prod=0;
	prod = base;//2 como ejemplo potencia 7
	
	while(expo>1){
		prod = prod*base;//2*1=2, 2*2=4, 4*2=8, 8*2=16, 16*2=32, 32*2=64, 64*2=128
		expo--;
	}
	
	return(prod);
}
main(){
	int n,b,resul;
	
	
	printf("Ingrese numero n : ");
	scanf("%d",&n);
	printf("\nIngrese numero b : ");
	scanf("%d",&b);
	
	resul = potencia(b,n);
	
	printf("Resultado: %d",resul);
	
}