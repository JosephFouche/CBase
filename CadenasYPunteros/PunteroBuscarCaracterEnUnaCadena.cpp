/*Escribir una función llamada buscarCaracter que reciba una cadena y un caracter,
y que devuelva la direccion de la primera aparición del caracter en la cadena.
Si no se encuentra, la función devuelve NULL*/

#include<stdio.h>

char * buscarCaracter(char *inicio, char c){
	while(*inicio != '\0'){
		if(*inicio == c) return inicio;
		inicio++;
	}
	//si llegamos acá es pq no se encontró c en la cadena
	return NULL;
}


int main(){
	char cad[] = "Hola Mundo";
	char caracter = "Z";
	char *dir = buscarCaracter(cad,caracter);
	if(dir==NULL){//Un verdadero indicaria que no se encontro el caracter en la cadena
		printf("No se encontro el caracter '%c' en la cadena \"%s\"\n", caracter,cad);
	}
	else{
		*dir = "Z";
		printf("'%c' esta en la dirección %p de la cadena. \n",caracter,dir);
		printf("Ahora la cadena es: %s\n",cad);
	}
	return 0;
}