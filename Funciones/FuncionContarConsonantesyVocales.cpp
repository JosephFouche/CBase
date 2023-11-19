/*

/*Escriba un programa que concatene dos listas ligadas de caracteres. 
El programa debe incluir la función concatenar que tome como argumentos apuntadores a ambas listas, 
y que concatene la segunda lista a la primera.*/




	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenar(char *a, char *b) {
    int longitud = strlen(a) + strlen(b) + 1;

    char *cadena = (char*) malloc(sizeof(char) * longitud);

    int i = 0;
    int k = 0;

    while (*(a + i) != '\0') {
        *(cadena + i) = *(a + i);
        i++;
    }
    for (; i < longitud; i++) {
        *(cadena + i) = *(b + k);
        k++;
    }
    *(cadena + i) = '\0';
    printf("%s", cadena);

    free(cadena);
}

int main() {
    char *a;
    a = (char*) malloc(5 * sizeof(char));
    strcpy(a, "Gato");

    char *b;
    b =  (char*) malloc(4 * sizeof(char));
    strcpy(b, "Uwu");

    concatenar(a, b);

    free(a);
    free(b);

    return 0;
}






