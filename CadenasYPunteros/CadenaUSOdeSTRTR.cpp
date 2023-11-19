/*
Escriba un programa que introduzca una línea de texto y una cadena de búsqueda desde
el teclado. Mediante el uso de la función strstr, localice la primera ocurrencia de la cadena
de búsqueda en la línea de texto, y asigne la ubicación a la variable ptrBusca de tipo char
*. 

Si encuentra la cadena de búsqueda, imprima el resto de la línea de texto, comenzando
con la cadena de búsqueda. Luego, utilice de nuevo strstr para localizar la siguiente
ocurrencia de la cadena de búsqueda en la línea de texto. 

Si existe una segunda
ocurrencia, imprima el resto de la línea de texto, comenzando con la segunda ocurrencia.
[Pista: La segunda llamada a strstr debe contener ptr-Busca + 1 como su primer
argumento.]


“AB CB DD EE CB AA” “CB” --- “CB DD EE CB AA” --- “CB AA”
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	char buscar[10], cadena[50];
	char *ptrBusca;//almacenar la ubicación de la primera linea de busqueda
	
	printf("Introduzca una linea de texto: ");
    fgets(cadena, 50, stdin);
    
    printf("Introduzca una cadena de busqueda: ");
    fgets(buscar, 10, stdin);
    
	/* el programa elimina el carácter de nueva línea del final de la cadena de búsqueda,
	 si es que existe, para que la función strstr pueda encontrar correctamente la primera
	  ocurrencia de la cadena de búsqueda en la línea de texto.*/
	  
	if (buscar[strlen(buscar)-1] == '\n') {//osea, si hay espacio entre palabras, elimina el espacio
        buscar[strlen(buscar)-1] = '\0';
    }
    
	ptrBusca = strstr(cadena,buscar);
	
	for(int i=0;i<=strlen(cadena)-1;i++){
	int d = ptrBusca-cadena;
		if(ptrBusca != NULL){//retorna 0 si palabra no esta dentro de la cadena
			printf("se encuentra en pos %ld de la linea de texto.\n",ptrBusca-cadena);//resta entre posicion de en la matriz entre 
			
		}else{
			printf("no se encuentra en la linea de texto\n");
		}
		//despues buscar si aparecer una segunda vez la misma palabra
		cadena = cadena[d-1];
	}
	
	return 0;
 
   
	
	
}