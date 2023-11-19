/*

99. EJERCICIO

Se tiene grabado en un archivo los préstamos de libros realizados por alumnos de la Biblioteca de la Facultad Politécnica de
un mes determinado. El formato del archivo es el siguiente:
Cedula (C), Dia (N), Cod_libro (C), Tipo_Oper (C) (P->Prestamo D->Devolucion)




*/
#include <stdlib.h>
#include <stdio.h>     
#include <conio.h>  


   int Dia; /* Campos del registro */
   char Cedula, Cod_libro, Tipo_O;
   
   
   
   
   
   FILE * Bib;

void procesar_registro();//PROTOTIPO
void primer_registro();
void corte_dia();
void resumen();

int main() {

   
   if (( Bib = fopen ("BibliotecaCorte.txt", "r"))== NULL) {
   	   exit(1);
   }
   
   fscanf (Bib, "%s %d %s %c\n", Cedula, &Dia,Cod_libro, Tipo_O);
   
   printf ("%s %d %s %c", Cedula, &Dia, Cod_libro, Tipo_O);   
   primer_registro();

   
   while ( dia != 99 ) {
      if ( gdia != dia ) {
         corte_dia();
      }
      procesar_registro();
      fscanf (ven, "%d %d %d %d", &dia, &codart,&punit, &cnt);
      //   printf ("%d %d %d %d", dia, codart, punit, cnt);
   }

   corte_dia();
   
	printf("\n Total Mes  :  %d", tot_mes);
	printf("\n Promedio Ventas :  %d", (tot_mes / cnt_dia) );
  

}
void primer_registro()
{
   gdia = dia;//gdia = vale 1
   tot_dia = 0;
}


void procesar_registro()
{
   tot_dia = tot_dia + punit * cnt;//acumulador de importes de dia
}

/*
   Por cada grupo imprimimos el dia y 
   el total de ventas realizadas por ese dia
*/
void corte_dia()
{
    printf("\n%d\t%d", gdia, tot_dia);
   tot_mes = tot_mes + tot_dia;//en tot mes se guarda el total acumulado de ese dia
   cnt_dia = cnt_dia + 1;//el dia cambia
   printf("\n%d\t%d", tot_mes, cnt_dia);
   gdia=dia;//corte cambia de dia
   
   primer_registro();//vuelve a primer registro, donde tot_dia=0
}
