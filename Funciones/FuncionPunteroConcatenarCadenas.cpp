/*

/*Escriba un programa que concatene dos listas ligadas de caracteres. 
El programa debe incluir la función concatenar que tome como argumentos apuntadores a ambas listas, 
y que concatene la segunda lista a la primera.*/




	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenar(char *a, char *b) {
	/*La variable longitud se calcula sumando las longitudes de las cadenas a y b, más 1 para el carácter nulo '\0' al final de la cadena concatenada.*/
    int longitud = strlen(a) + strlen(b) + 1;
	/*Se asigna memoria dinámicamente para la cadena cadena utilizando malloc. La cantidad de memoria asignada es igual
	 a longitud multiplicada por el tamaño de un char.*/
    char *cadena = (char*) malloc(sizeof(char) * longitud);

    int i = 0;
    int k = 0;
/*Se realiza un bucle while para copiar los caracteres de la cadena a a cadena. El bucle se ejecuta mientras el carácter
 apuntado por a+i no sea el carácter nulo '\0'. En cada iteración, se copia el carácter de a a cadena y se incrementan los índices i.*/
    while (*(a + i) != '\0') {
        *(cadena + i) = *(a + i);
        i++;
    }
/*Luego, se realiza un bucle for para copiar los caracteres de la cadena b a cadena a partir del índice i.
 El bucle se ejecuta mientras el índice i sea menor que longitud. En cada iteración, se copia el carácter de b a cadena y se incrementan los índices i y k*/
    for (; i < longitud; i++) {
        *(cadena + i) = *(b + k);
        k++;
    }
    /*Después del bucle, se agrega el carácter nulo '\0' al final de la cadena cadena para asegurarse de que sea una cadena válida.*/
    *(cadena + i) = '\0';
    /*Finalmente, se muestra por pantalla el contenido de cadena utilizando printf con el formato %s.
	 Luego se libera la memoria asignada a cadena utilizando free.*/
    printf("%s", cadena);

    free(cadena);
    
    /*En resumen, la función concatenar toma dos cadenas y las concatena en una nueva cadena dinámicamente asignada,
	 y finalmente muestra el resultado por pantalla.*/
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






