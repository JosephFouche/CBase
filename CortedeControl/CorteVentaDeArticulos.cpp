/*

	una compañía dedicada a la venta de artículos varios tiene almacenados sus datos
	relativos a un determinado mes en un archivo que posee la sgte. estructura:
	
	Día de venta, Código de artículo, precio unitario, cantidad vendida.
	Los datos están ordenados por día.
	
	Se desea obtener el importe total de venta por día, por mes, además del promedio de
	ventas por día. 
	El último registro no procesable tiene 99 en el campo día.
*/

#include <stdlib.h>
#include <stdio.h>     
#include <conio.h>  

// programa _corte_1_nivel


/* 
Una empresa tiene en un archivo todas las ventas referidas a diferentes productos durante un mes. Se necesita generar
	un informe del total de ventas por día y del promedio de ventas por mes. Tener en cuenta que pudiran existir días sin ventas, los cuales no 
	deberan ser impresos ni considerados para el promedio
	
	Los datos del archivo son:
	dia, codart, punit, cnt
	Donde:
		dia: es el dia de venta
		codart: es el codigo del artículo
		punit: es el precio unitario
		cnt: es la cantidad vendida	
*/

   int dia, codart, punit, cnt; /* Campos del registro */
   int gdia ;
   int tot_dia, tot_mes ;/* Totalizadores por dia y mes */
   int cnt_dia ; /* Cantidad de dias diferentes */
   
   FILE * datos;

void procesar_registro();
void primer_registro();
void corte_dia();

int main() {

   /* Inicializamos el total por mes y la cantidad de dias diferentes */
   tot_mes = 0;
   cnt_dia = 0;
   if (( datos = fopen ("datos.txt", "r"))== NULL) {
   	   exit(1);
   }
   
   fscanf (datos, "%d %d %d %d\n", &dia, &codart,&punit, &cnt);
   
   printf ("%d %d %d %d", dia, codart, punit, cnt);   
   primer_registro();

   /* Imprimir la cabecera del informe */ 
   printf("\nDia\tImporte total");
   printf("\n---\t-------------");

   while ( dia != 99 ) {
      if ( gdia != dia ) {
         corte_dia();
      }
      procesar_registro();
      fscanf (datos, "%d %d %d %d", &dia, &codart,&punit, &cnt);
      //   printf ("%d %d %d %d", dia, codart, punit, cnt);
   }

   corte_dia();

   printf("\nTotal mes %d:", tot_mes);
   printf("\nPromedio de ventas %d:", tot_mes/cnt_dia);

}

/*
   En la rutina de “primer_registro” guardamos el valor del campo de control e 
   inicializamos el total por dia
*/
void primer_registro()
{
   gdia = dia;
   tot_dia = 0;
}


void procesar_registro()
{
   tot_dia = tot_dia + punit * cnt;
}

/*
   Por cada grupo imprimimos el dia y 
   el total de ventas realizadas por ese dia
*/
void corte_dia()
{
    printf("\n%d\t%d", gdia, tot_dia);
   tot_mes = tot_mes + tot_dia;
   cnt_dia = cnt_dia + 1;
   printf("\n%d\t%d", tot_mes, cnt_dia);
   gdia=dia;
   
   primer_registro();
}