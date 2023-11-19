/*

// SE INTRODUCE UN TEXTO Y UNA LETRA
// EL PROGRAMA CALCULA CANTIDAD DE VECES QUE APARECE LA LETRA
// EN EL TEXTO
*/

#include<stdio.h>
#include<string.h>

main (){
	char palabra[25];
	char letra;
	int k;
	int i,cont;
	cont=0;
	int c;
	c=0;
	
	printf("Ingrese palabra:\n ");
	scanf("%s",&palabra);
	fflush(stdin);//para que no saltee letra
	
	printf("Ingrese letra: \n");
	letra = getchar();
	
	k = strlen(palabra);
	
	for(i=0;i<k;i++){
		if(palabra[i]==letra){
			cont++;
		}
	}
	
	printf("\nCantidad de veces que aparece %c en %s :  %d", letra, palabra, cont);
	
	return 0;
}