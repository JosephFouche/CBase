/*
Escriba un programa que encripte cadenas de texto de la siguiente manera:

Q U E R E R E S P O D E R
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14


Desordenar los índices de forma aleatoria
Q D E E R S R O U E R P E
0 12 2 7 5 8 14 11 1 13 3 10 9 4 9

Texto encriptado: “Q0D12E2E7R5S8R14O11U1R3P109 E40 ”
1. Escribir una función “char * encriptacionAleatoria(char * texto, int *indices)” que reciba como
parámetro el texto a encriptar y un vector donde se cargaran los índices finales luego de encriptar;
debe retornar el texto encriptado. Observe que el vector de índices almacenará las nuevas
posiciones de cada carácter de la cadena modificada.
2. Escribir la función inversa al punto 1 para desencriptar, la misma debe retornar la cadena original


Analisis
1- Crear una variable k que mida longitud de la cadena
2- Usar funcion random para que me de numeros aleatorios de 0 hasta longitud de cadena
3- En char encriptacion aleatoria reordenar la cadena de acuerdo al orden de numeros que emitio funcion random
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
char palabra[]="QUERER ES PODER";
char * encriptacionAleatoria(char * texto, int *indices);// texto seria palabra, indices seria cadena2
char desEncriptar(char * texto, int *indices);

char cadena3[25];

int main(){

	
	int k, i,j;
	k = strlen(palabra);
	int convertido[k];
	
	srand(time(0));
	 for (i = 0; i < k; i++) {
        int num = rand() % k; // Generar un número aleatorio entre 0 y k
        
        // Verificar si el número ya existe en el vector
        for (j = 0; j < i; j++) {//j < i: La condición de finalización del bucle es que j sea menor que i. i representa el índice actual del bucle principal,
		// que indica cuántos elementos se 
		// asignaron al vector hasta el momento. Para que solo se verifiquen los elementos del vector que ya han sido asignados.
            if (convertido[j] == num) {
                // El número ya existe, generar otro número aleatorio
                num = rand() % k;
                // Reiniciar el ciclo para verificar el nuevo número generado
                j = -1;
            }
            
        }
        /*Dentro de este bucle, comparamos el número generado aleatoriamente num con cada elemento del vector en las posiciones 0 a i-1. Esto se hace mediante la instrucción vector[j] == num. Si encontramos una coincidencia, significa que el número ya existe en el vector y debemos generar otro número aleatorio.

En ese caso, se genera otro número aleatorio y se reinicia el bucle interno al establecer j = -1. Al hacer esto, en la próxima iteración del bucle interno, j++ establecerá j en 0, y comenzará la verificación desde el principio para el nuevo número generado.

Si no se encuentra ninguna coincidencia, significa que el número generado num es único hasta ahora y se asigna al vector en la posición i actual.*/
        // Asignar el número al vector
        convertido[i] = num;
    }
    
    // Imprimir el vector resultante
    for (i = 0; i < k; i++) {
        printf("%d ", convertido[i]);
    }
    printf("\n");
    //ahora quiero reorganizar  la cadena palabra de acuerdo al orden de  numeros
    // de convertido, utilizando cada numero de convertido como indice para palabra
    
    char* cadenaDesordenada = encriptacionAleatoria(palabra, convertido);
    char inicial = desEncriptar(palabra, convertido);
    
    printf("\nLa cadena desEncriptada es :  %s", inicial);
    return 0;
    
    
}
char * encriptacionAleatoria(char * texto, int *indices){
	int i,k;
	k = strlen(texto);
	//ahora quiero reorganizar  la cadena palabra de acuerdo al orden de  numeros
    // de convertido, utilizando cada numero de convertido como indice para palabra
    
    char cadena2[k+1]; // Agregamos 1 para el carácter nulo de terminación
   
    
    // Desordenar la cadena utilizando el vector de números aleatorios
    for (int i = 0; i < k; i++) {
        cadena2[i] = texto[indices[i]];
        
    }
    
    cadena2[k] = '\0'; // Agregamos el carácter nulo de terminación
    
    printf("Cadena original: %s\n",texto );
    printf("Cadena desordenada: %s\n", cadena2);
    strcpy(cadena3,cadena2);
     printf("Índices:\n");
    for (int i = 0; i < k; i++) {
        printf("%c%d//", cadena2[i], indices[i]);
    }
    
	

}
char desEncriptar(char * palabra, int *convertido){
	int i,k;
	k = strlen(palabra);
	for (int i = 0; i < k; i++) {
        	palabra[convertido[i]] = cadena3[i];
    }
    
    
    palabra[k] = '\0';
    printf("\nCadena DesEncriptada:  %s \n",palabra);
    

}