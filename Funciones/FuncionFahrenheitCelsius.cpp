/*

Usar una funcion que convierta una temperatura
dada en grados Celsius a grados Fahrenheit. La
fórmula de conversión es: 

F = 9/5*C +32
*/
#include<stdio.h>
int convertir(int c){
	float f,p,k;
	int n;
	n = 32;	
	p = 1.8;
	f = p * c+32;
		
	return f;
}
int main(){
	float Celsius, i;
	
	printf("Ingrese grados celsius: ");
	scanf("%f",&Celsius);
	
	i = convertir(Celsius);
	
	printf("Los grados en Fahrenheit son: %f", i);
}