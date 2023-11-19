/*Triplicaqr un numero*/

#include<stdio.h>

void triplicarV2(int *x){
	*x = (*x)*3;
}

int main(){
	int a;
	printf("Ingrese un numero");
	scanf("%d",&a);
	
	//a = triplicarV1(a)
	
	triplicarV2(&a);//direccion de memoria &a se guarda arriba en int *x
	
	printf("\nEl resultado es: %d\n",a);
	return 0;
}