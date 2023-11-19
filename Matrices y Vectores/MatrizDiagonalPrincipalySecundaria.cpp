/*Matriz

Determinar e imprimir la suma de los elementos que se hallan en la diagonal principal 
y la diagonal secundaria. Además, cantidad y sumatoria de los números pares de cada diagonal
por separado. La matriz es de 5*5.


#include <stdio.h>
#include <conio.h>
int matriz [4] [3];
int vector [3];
int f=0, c=0;
main()
{
      printf("F A C U L T A D     P O L I T E C N I C A");
      for (   f= 0 ; f < 4 ; f++) {
	      for (  c = 0 ; c < 3; c++) {
	          printf ("\nINTRODUCIR FILA %d COLUMNA %d : ",f,c);
	          scanf ("%d", &matriz[f] [c]);
	 	         if ( f == 2)
	                	vector [c] = matriz[f] [c];
              }
              }
       printf ("\nLA MATRIZ ES : \n");
       for (  f= 0 ; f < 4 ; f++) {
	       for (  c = 0 ; c < 3; c++) {
	           printf (" %d", matriz[f] [c] );
               }
                      printf ("\n");
               }
       int max = vector[0];
       printf ("\nEL VECTOR ES ");
       for (  int k= 0 ; k < 3 ; k++) {
           	 if ( vector [k] > max )
             	{	max = vector [k];}
	         printf (" %d", vector[k] );
          }    
	      printf("\nEL ELEMENTO MAYOR DEL VECTOR ES : %d ", max);
getch();
return 0;

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int matriz [5] [5] ={2,6,3,5,8,
					1,5,4,12,14,
					8,2,9,11,15,
					12,15,16,17,18,
					1,2,3,4,5};
int acum=0;
int f=0, c=0;
int cont1,sum1,cont2,sum2;
int vector1 [5];
int vector2 [5];


main(){
	srand (time(NULL));
	printf ("\nLA MATRIZ CARGADA ES : \n");

	for (int  f= 0 ; f < 5 ; f++) {
		for (int  c = 0 ; c < 5; c++) {
			  printf ("\t %d", matriz[f] [c] );
		}
		printf("\n");
	}
	sum1=0;
cont1=0;
sum2=0;
cont2=0;

//agregar diagonal principal a vector 1
printf("\n");
	for (int  f= 0 ; f < 5 ; f++) {
		for (int  c = 0 ; c < 5; c++) {
			  if(f==c){
				vector1[c]=matriz[f] [c];
			  }
			  if(f+c==4){
				vector2[c]=matriz[f] [c];//diagonal secundaria
			  }
		}
		
	}
	for (int  c = 0 ; c < 5; c++) {
			  printf ("\t %d", vector1[c] );
			  
	}
	printf("\n");
	for (int  c = 0 ; c < 5; c++) {
			  printf ("\t %d", vector2[c] );
			  
	}
	//contar cuantos numeros pares hay en vector uno y sumarlos
	for (int  c = 0 ; c < 5; c++) {
		if(vector1[c]%2==0){
			cont1 = cont1+1;
			sum1=sum1+vector1[c];
		}
		if(vector2[c]%2==0){
			cont2 = cont2+1;
			sum2=sum2+vector2[c];
		}
			  
	}
	printf("\nCantidad y sumatoria de numeros pares en v1: %d %d",cont1,sum1);
	printf("\nCantidad y sumatoria de numeros pares en v2: %d %d",cont2,sum2);
	

}