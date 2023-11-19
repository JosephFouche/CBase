/*
CARGAR E IMPRIMIR UN VECTOR DE 6 ELEMENTOS. DESPLAZAR CICLICAMENTE
CADA ELEMENTO DEL VECTOR UN LUGAR A LA DERECHA
*/
#include <stdio.h>
#include <conio.h>
int v[6], k;
int aux;
int main(void)
{
for ( k = 0 ; k < 6 ; k++)
{ printf ("Introducir Elemento %d ", k);
  scanf ("%d", &v[k]);  }
  printf ("\nVector Original \n ");
for ( k = 0 ; k < 6 ; k++)
{ printf (" %d", v[k]); }
aux = v[5];
int z=5;
while ( z >= 1)
{ v[z] = v[z-1];
  z = z - 1;}
v[0] = aux;
printf ("\nVector Resultante \n ");
for ( k = 0 ; k < 6 ; k++)
{ printf (" %d", v[k]); }

getch();
return 0;
}