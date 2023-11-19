/* BUSQUEDA DE UN DETERMINADO CARACTER EN UNA CADENA UTILIZANDO PARA EL
EFECTO LA FUNCION strchr */


#include<stdio.h>
#include<string.h>
main(){

	char str[] = "Hola, mundo!";
    char *ptr = strchr(str, 'm');
    
    //char *strchr(const char *str, int character); sintaxis de strchr
    //str: Puntero a la cadena en la que se va a buscar el carácter.
//character: El carácter que se desea encontrar en la cadena.

    if (ptr != NULL) {
        printf("El carácter 'm' se encuentra en la posición: %ld\n", ptr - str);
        /*l. La diferencia entre los punteros ptr y str 
		representa la cantidad de caracteres que hay desde el inicio de la cadena (str) hasta la posición del carácter encontrado (ptr).*/
        printf("La cadena a partir de esa posición es: %s\n", ptr);
    } else {
        printf("El carácter no se encontró en la cadena.\n");
    }

    return 0;
}