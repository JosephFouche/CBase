/*

Convertir un vector V de n elementos a una matriz M de FxC elementos.
Considerar:
- La cantidad de elementos del vector V es n.
- La cantidad de elementos de la matriz M está dato de FxC=n
- La inserción de los elementos del vector V a la matriz M se realiza en forma de espiral como
muestra el ejemplo.
- No se permite relleno de matrices para completar celdas.

Ejemplo
Vector V =
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

Resultado Matriz M =
1  2  3   4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9


Escriba las rutinas correspondientes para generar el vector V y la matriz M.
Imprima el vector y la matriz en el programa principal.

Análisis
1- declarar vector de cantidad n = 25
2- Matriz es cuadrado A*B = n A=5, B=5
3-
*/
#include<stdio.h>
#include<stdlib.h>
#define n 25
#define a 5
#define b 5
main(){
	int vec[n] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	int mat[a][b],i,j,cont,acu;
	int inicial,superior;
	inicial = 0;
	superior = 5;

	// se imprime el vector
	for(i=0;i<n;i++){
		printf("%d ", vec[i]);
	}
	printf("\n");
	
	//matriz de  5x5
	//en primera fila 0, de 0 hasta 4 poner los primeros 5 numeros del vector
	//en siguiente ciclo, contar desde 
	
	
		
	
	cont=0;
	for (i=inicial;i<=superior-1;i++){// desde vec 0 hasta vec 4 meter en matriz 00,01,02,03,04
		mat[inicial][i]=vec[cont];
		cont++;
		
	
	}
	
	for (i=(inicial+1);i<=(superior-1);i++){// desde vec 5 hasta vec9, meter en matriz 14,24,34,44
		mat[i][superior-1]=vec[cont];
		cont++;
	
	}
	
	for (i=(superior-2);i>=0;i--){// desde vec 10 hasta  vec 13, meter en matriz 34,24,14,04
		mat[superior-1][i]=vec[cont];
		cont++;
		
	
	}
	for (i=(superior-2);i>0;i--){// desde vec 14 hasta  vec 16, meter en matriz 30,20,10
		mat[i][inicial]=vec[cont];
		cont++;
		
	
	}
	
	for (i=(inicial+1);i<=(superior-2);i++){// desde vec 17 hasta  vec 19, meter en matriz 11,12,13
		mat[inicial+1][i]=vec[cont];
		cont++;
		
	
	}
	for (i=(inicial+2);i<=(superior-2);i++){// desde vec 20 hasta  vec 21, meter en matriz 23,33
		mat[i][superior-2]=vec[cont];
		cont++;
		
	
	}
	for (i=(inicial+2);i>=1;i--){// desde vec 22 hasta  vec 23, meter en matriz 32,31
		mat[superior-2][i]=vec[cont];
		cont++;
		
	
	}
	
	for (i=(inicial+1);i>0;i--){// a 24, meter en matriz  21
		mat[superior-3][i]=vec[cont];
		cont++;
		
	
	}
	for (i=(inicial+2);i<(superior-2);i++){// a 25, meter en matriz  23
		mat[superior-3][i]=vec[cont];
		cont++;
		
	
	}
	
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",mat[i][j]);
		}
		printf("\n");
	}
}

	


