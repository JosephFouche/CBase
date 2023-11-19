/*Intercambair numero
*/

#include<stdio.h>

void intercambiar_V1(int *x, int*y){
	int aux = *x;
	*x=*y;
	*y = aux;
}


int main(){
	int a=3, b=7;
	printf("inicialmente: a=%d y b=%d\n",a,b);
	intercambiar_V1(&a,&b);
	printf("\Al intercambiar a=%d y b=%d\n",a,b);
	return 0;
}