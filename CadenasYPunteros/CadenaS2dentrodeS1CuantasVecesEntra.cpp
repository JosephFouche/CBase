/*

Hacer una funcion que indique cuantas veces una cadena s2 aparece en cadena s1
Teniendo en cuenta que la cadena s2 debe ser más corta

DETALLE: no se puede usar strstr


Análisis
1-El string un array de caracteres
2- Crear una funcion aparece() que indique si aparece o no, y si aparece cuantas veces
3- Usar ciclo for para ver cuantas veces aparece

*/

#include<stdio.h>
#include<string.h>


int aparece(char*cad1,char*cad2){
	int j,k,i,c,cont,cant;
	cont=0;
	cant=0;
	j = strlen(cad1);//34
	k = strlen(cad2);//4
	/*
	1-QUIERo que recorra la cadena principal en busqueda de la secundaria
	2-Quiero que compare s1 con s2, igualdades consecutivas hasta que sean coincidentes K veces
	3- Y solo despues de que cada caracter de forma consecutiva sean coincidentes K(largo de cad2) veces, contar 1
	*/
	for (int i = 0; i <= j - k; i++) {//contar hasta el ultimo lugar posible que puede aparecer la palabra consecutivamente
        
        for (c = 0; c < k; c++) {//contar desde 0 hasta k veces
            if (cad1[c+i] != cad2[c]) {
	// La expresión str[i+j] accede al caracter de la cadena str que se encuentra
	// en la posición i+j, es decir, la posición que corresponde al inicio de la posible subcadena coincidente con substr.
                break;
                
            }
        }
        if (c == k) {
            cont++;
        }
    }

    return cont;
	
	
	
	
}
main(){
	char s1[]="como como como como como como como";
	char s2[]="como";
	int resultado;
	
	
	resultado = aparece(s1,s2);
	
	printf("\nLa cadena %s dentro de %s aparece %d veces", s2,s1,resultado);
	
}

