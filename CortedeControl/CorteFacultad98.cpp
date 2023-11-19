/*

Se tiene grabado en un archivo (asist.dat) los datos de la asistencia de los alumnos de un semestre de una carrera en
particular de la Facultad Politécnica. El formato es el siguiente:
Cedula (C), Fecha (N) (DD/MM/AAAA), CodAsignatura (C).

Si el alumno tiene un registro en este archivo indica que el mismo asistió en esa fecha a esa asignatura.
Además se tiene en otro archivo (prog.dat) los datos de la cantidad de clases programadas para cada asignatura, de la forma:
CodAsignatura (C), Cantidad(N).

Se sabe que existen como máximo 10 asignaturas para el semestre. Atender que puede haber menos de esa cantidad. Cada
asignatura tiene un código alfanumérico de tres caracteres como máximo. Asuma que la cantidad de asignaturas es siempre
<= a 10, no valide esto.

Se necesita imprimir por cada alumno un resumen de su asistencia de la siguiente forma (Por cada asignatura se imprime el
porcentaje de asistencia en base a la cantidad de clases programadas para la misma).




	Al final se necesita imprimir las 10 cédulas de los alumnos que tuvieron los mejores promedios de asistencia. Si dos
	promedios son iguales, tomar aquel que aparece antes en el archivo de asistencia. El reporte a generar tiene la siguiente
	forma:
	Cedula Promedio
	###### ###%
	
Observaciones
– NO se debe leer todo el contenido del archivo en un vector para procesarlo.
– Se sabe que el archivo esta ordenado por cédula (SOLO por cédula).
– Existen a lo sumo 100 cédulas diferentes.
– El archivo prog.dat debe procesarse antes del archivo asist.dat

*/

#include <stdlib.h>
#include <stdio.h>     
#include<string.h> 

// programa _corte_1_nivel
char Cedula[8],Cod_A[4];
int Fecha;

FILE * Asis;

FILE * Prog;

void procesar_registro();
void primer_registro();
void corte_dia();

int main() {

   /* Inicializamos el total por mes y la cantidad de dias diferentes */
  
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
