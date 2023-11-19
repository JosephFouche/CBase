/*

8.16 Escriba un programa que introduzca una línea de texto y una cadena de búsqueda desde elteclado. 
 Mediante  el  uso  de  la  función  strstr,  localice  la  primera  ocurrencia   de la   cadena 
  debúsqueda en  la  línea de  texto, y asigne  la ubicación  a la  variable  ptrBusca  de tipo  char  *.
    Siencuentra la  cadena  de  búsqueda, imprima  el resto de  la  línea  de  texto,  comenzando  con
	  lacadena de búsqueda. Luego, utilice de  nuevo  strstr  para localizar la  siguiente ocurrencia de
	   lacadena de búsqueda en la línea de texto. Si existe una segunda ocurrencia, imprima el resto de 
	   lalínea de texto, comenzando con la segunda ocurrencia.
	    [Pista:  La segunda llamada a strstr  debecontener ptr-Busca + 1 como su primer argumento.]

*/
#include <stdio.h>
 #include <stdlib.h>
int main() {
 /*Declaracion de variables tipo cadena*/
  char texto[200];
   char busca[50];
    /*Declaracion del puntero a busca*/
	char *ptrBusca; /*Solicita al usuario ingresar una linea de texto*/
    printf("Introduzca linea de texto: ");
    gets(texto);
    /*Solicita parte que quiera buscar en la linea de texto*/
	printf("Ingrese cadena de busqueda: ");
	scanf("%s",&busca); /*Asignacion de ubicacion al puntero ptrBusca*/
	ptrBusca = strstr(texto,busca); /*Condicion para saber la palabra se encuentra en el texto*/
	  if (ptrBusca != 00000000){
	    printf("Primera aparicion: %s\n",ptrBusca);  }else{
		
		  printf("No se encuentra alguna aparicion de %s.\n",ptrBusca);  }
		   /*Se vuelve a asignar a ptrBusca la ubicacion de la segunda26 aparicion de la palabra ingresada anteriormente*/
    ptrBusca = strstr(ptrBusca+1,busca);
	 /*Condicion para saber la palabra se encuentra nuevamente en el texto*/  
	 if (ptrBusca != 00000000){
	   printf("Segunda aparicion: %s",ptrBusca);
	     }else{
		   printf("No se encuentra segunda aparicion.\n");  
		}
		  return 0;
	}
	   
	   
	   
	   
	   
	   