/*
Dimensionar y cargar un vector numérico entero de 10 elementos.
Transferir a un segundo vector todos los elementos del primer vector cuyo contenido no sea múltiplo de tres.
*/
#include <stdio.h>
#define n 10 //cantidad de elementos de los vectores
int main (void ) 
{
   int A[n] = { 7, 9, 8, 18, 15, 17, 21, 24, 22, 27 };  // se declara y se cargan los elementos del primer vector
   int B[n] = {0}; //declaracion del segundo vector de enteros no multiplos de 3
   int j = 0; //contador para el segundo vector
   int i; //contador para recorrer el primer vector
   for ( i = 0; i <= n - 1; i++ ) { //se recorre el primer vector y se verifica que sus elementos no sean multiplos de 3
      if ( A[i] % 3 != 0 ) {
         B[j] = A[i]; // se cargan los no multiplos de 3 al segundo vector
         j++;
       }
       printf(" %d",A[i] );
    }
    printf("\n");
    for ( i = 0; i <= j - 1; i++ )
    { printf (" %d",B[i] ); }
  return 0;
}