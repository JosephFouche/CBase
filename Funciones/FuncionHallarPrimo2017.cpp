/*

22. EJERCICIO
Determinar si un número N introducido por teclado es primo o no. Repetir la operación (leer y determinar si es primo o no)
hasta que el número introducido sea igual a cero*/

#include<stdio.h>
#include <stdbool.h>
#include <math.h>
int esPrimo(int a){
	int i;
	//primo cuando el numero es divisible solo por si mismo y por la unidad
	
	if(a<=1){
		return 0;
	}
	
	int limite = sqrt(a);//raiz de a
	for(i=2;i<=limite;i++){//desde 2 hasta menor o igual a raiz de a
		if(a%i==0){
			return 0;
		}
	}
	return 1;
	

}

int main(){
	int a,b;
	
	
	printf("Ingrese numero : ");
	scanf("%d",&a);
	
	if (esPrimo(a)) {
        printf("%d es  primo.\n", a);
    } else {
        printf("%d no es  primo.\n", a);
    }

    return 0;
	
	
}

