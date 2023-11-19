/*

Construir un programa que muestre la forma de utilizar las principales funciones de
tratamiento de cadenas en C. El programa debe mostrar procedimientos de lectura,
escritura, comparación, concatenación y búsqueda de fragmentos.
void leer(char * p1, char * p2);
void mostrar(char * p1, char * p2);
void recorrer(char * p1, char * p2);
void comparar(char * p1, char * p2);
void concatenar(char * p1, char * p2, char * pc);
void buscar(char * p1, char * p2, char * pc);

*/

#include<stdio.h>
#include<string.h>

void leer (char* p1, char*p2){
	
	printf("\nIngrese cadena 1");
	gets(p1);
	
	printf("\nIngrese cadena 2");
	gets(p2);
}

void mostrar(char*p1, char*p2){
	printf("\nla Primera Cadena es %s ",p1);
	printf("\n La segunda cadena es %s",p2);
}

void recorrer(char * p1, char * p2){
	int i,j;
	
	for(i=0; i<strlen(p1);i++){
		printf("\n%c",p1[i]);
	}
	printf("\n");
	
	for(j=0; j<strlen(p2);j++){
		printf("\n%c",p2[j]);
	}
	printf("\n");
}
void comparar(char * p1, char * p2){
	int resultado;
	
	resultado = strcmpi(p1,p2);
	
	if(resultado == 0){
		printf("\nSon iguales");
		
	}else{
		printf("\nSon diferentes");
	}
}

void concatenar(char *p1, char*p2, char*pc){
	strcpy(pc,p1);// p1  vale  pc
	strcat(pc,p2);//concatenar p2 a pc
	
	printf("\nLa cadena concatenada es: %s",pc);
	
}

void buscar(char * p1, char * p2, char * pc){
	 char *ptr = strstr(p1, p2); //strstr si p2 esta dentro de p1
    if (ptr != NULL) {// si es verdadero
        int posicion = ptr - p1;
        printf("La cadena buscada fue encontrada en la posición  %d de la primera cadena.\n", posicion);
        strncpy(pc, p1 + posicion, strlen(p1) - posicion);
        printf("El fragmento encontrado es: %s\n", pc);
    } else {
        printf("La cadena buscada no fue encontrada en la primera cadena.\n");
    }
}


main(){
	char cadena1[50], cadena2[50], concatenacion[100], fragmento[50];
	
	leer(cadena1,cadena2);
	mostrar(cadena1,cadena2);
	recorrer(cadena1,cadena2);
	comparar(cadena1,cadena2);
	concatenar(cadena1,cadena2, concatenacion);
	buscar(cadena1, cadena2, fragmento);
	
}