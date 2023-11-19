/*

ESTE PROGRAMA ES UNA MUESTRA DE COMO SE DIMENSIONA
UNA MATRIZ ENTERA QUE SE CARGA Y SE IMPRIME, ADEMAS
SE CALCULA E IMPRIME LA SUMA

*/
// LA CARGA SE HACE POR FILA
#include <stdio.h>
#include <conio.h>

int matriz [2] [3] = { 1, 3, 5, 
						7, 8, 9};
float acum;



main(){
	int i,j;
	acum = 0.0;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			acum = acum + matriz[i][j];
		}
		
	}
	printf("lA suma es:  %f",acum );
	
	
}