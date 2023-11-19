//Introducir dos variables alfanuméricas de veinte caracteres,
//compararlas entre sí, e imprimir si las variables son iguales,
//y de lo contrario imprimir que variable está alfabeticamente ubicado la una antes de la otra
#include<stdio.h>
#include<string.h>

main(){
	char n1[20], n2[20];
	int k;
	printf("ingrese primera variable: \n");
	scanf("%s",&n1);
	fflush(stdin);
	printf("ingrese segunda variable variable: \n");
	scanf("%s",&n2);
	
	k = strcoll(n1,n2);//para saber cual es mayor alfabeticamente
	
	if(k<0){
		printf("El primero es mayor");
	}else{
		if(k>0){
			printf("El segundo es mayor");
		}else{
			printf("Son iguales");
		}
	}
	return 0;
	
	
	
}