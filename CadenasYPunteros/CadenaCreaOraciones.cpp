/*

Escriba un programa que utilice la generación de números aleatorios para crear oraciones. El programa debe utilizar cuatro arreglos
 de apuntadores a char llamados, articulo, sustantivo, verbo y preposicion.
 
  El programa debe crear una oración mediante la selección de una palabra al azar de cada arreglo en el siguiente orden: 
  articulo, sustantivo, verbo, preposicion, articulo y sustantivo. 
  Al elegir cada palabra, ésta se debe concatenar a las palabras previas en un arreglo lo 
 suficientemente grande para almacenar una oración
completa. 

Las palabras deben separarse con espacios. Cuando se imprime la oración final, ésta debe comenzar con
una letra mayúscula y terminar con punto. El programa debe generar 20 oraciones.



Los arreglos deben rellenarse de la siguiente manera: El arreglo articulo debe contener los artíclos “el”
“la”, “un”, “algun” y “cualquiera”; el arreglo sustantivo debe contener los sustantivos “nino”,
“nina”, “perro”, “pueblo” y “carro”; el arreglo verbo debe contener los verbos “condujo”,
“brinco”, “corrio”, ”camino”, y “salto”; el arreglo preposición debe contener la preposiciones
“hacia”, ”desde”, “sobre”, “bajo” y “en”.
Cuando escriba su programa y ya funcione, modifíquelo para producir una historia corta que consista en varias
de estas oraciones. (¿Qué tal la posibilidad de un escritor de términos aleatorios?)

Analisis
1-
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

main(){
	char articulo[]= {"el la un algun cualquiera"};//largo 25
	char sustantivo[] = {"niño niña perro pueblo carro"};//largo 28
	char verbo[]={"condujo brinco corrio camino salto"};//34
	char preposicion[] = {"hacia desde sobre bajo en"};//25
	int k;
	
	k = strlen(articulo);
	printf("Largo es %d", k);
	
}