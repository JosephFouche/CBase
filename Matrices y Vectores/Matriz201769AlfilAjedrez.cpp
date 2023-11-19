/*
69. EJERCICIO
Se tiene una matriz de 8*8, equivalente a un tablero de ajedrez. Leer la posición de un alfil, colocar en la posición que le
corresponde una A y en todas las posiciones a las que pueda moverse una P. Llenar el resto de la matriz con asteriscos e
imprimir.


*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void imprimirPosicion(char mat[8][8]);
int main(){
	char mat[8][8];
	int i, j;
	int x,y;
	i = -1;
	j = -1;
	while(i > 7 || j > 7 || i < 0 || j < 0){
	
	printf("Seleccionar posicion de fila y columna:  (0-7) ");
	scanf("%d%d",&i,&j);


	}
	

	
	for(x=0; x<8;x++){
		for(y=0;y<8;y++){
			mat[x][y]='*';
		}
		
	}

	
	//marcar p, en posicion i,j
	
	mat[i][j] = 'A';
	
	/*
	//marcar diagonal superior izquierda
	for(x=i-1;x>=0;x--){
		for(y=j-1;y>=1;y--){
			if(x<y && (y-x==1)){
				mat[x][y]='X';	
			}
			
		}
	}
	//marcar diagonal superior derecha
	//columna aumenta, fila disminuye
	for(x=i-1;x>=2;x--){
		for(y=j+1;y<=7;y++){
			if(x<y && (y-x==3) ||(y-x==5)){
				mat[x][y]='X';	
			}
			
		}
	}
	//marcar diagonal inferior izquierda
	//columna disminuye, fila aumenta
	for(x=i+1;x<=7;x++){
		for(y=j-1;y>=2;y--){
			if(y<x && (x-y==1 ||x-y==3||x-y==5)){
				if ((x == 5 && y == 2) || (x == 7 && y == 4)) {
                continue; // Saltar las posiciones (5, 2) y (7, 4)
            	}

				mat[x][y]='X';	
			}
			
		}
	}
	//marcar diagonal inferior derecha
	//columna aumenta, fila aumenta
	for(x=i+1;x<=6;x++){
		for(y=j+1;y<=7;y++){
			if(x<y && (y-x==1)){
				mat[x][y]='X';	
			}
			
		}
	}
	
	
	for(x=0; x<8;x++){
		for(y=0;y<8;y++){
			printf("\t%c", mat[x][y]);
		}
		printf("\n");
	}*/
	
	 // Marcar movimientos en diagonal

    // Diagonal superior izquierda
    x = i - 1;
    y = j - 1;
    while (x >= 0 && y >= 0) {
    	//x sea mayor o igual a cero (para mantenerse dentro de los límites del tablero hacia arriba
    	//y sea mayor o igual a cero (para mantenerse dentro de los límites del tablero hacia la izquierda
        mat[x][y] = 'P';
        x--;
        y--;
    }

    // Diagonal superior derecha
    x = i - 1;
     /*en la dirección vertical (x = i - 1) y más uno en la dirección horizontal (y = j + 1).
	  Esto nos permite movernos a la casilla inmediatamente superior y derecha*/
    y = j + 1;
    while (x >= 0 && y < 8) {
    	/*x sea mayor o igual a cero (para mantenerse dentro de los límites del tablero hacia arriba) y que
		 y sea menor a ocho (para mantenerse dentro de los límites del tablero hacia la derecha*/
        mat[x][y] = 'P';
        x--;
        y++;
        //. Esto permite moverse a la siguiente casilla en la diagonal superior derecha.
    }

    // Diagonal inferior izquierda
    x = i + 1;
    y = j - 1;
    //Esto nos permite movernos a la casilla inmediatamente inferior y izquierda
    while (x < 8 && y >= 0) {
        mat[x][y] = 'P';
        x++;
        y--;
        //Esto permite moverse a la siguiente casilla en la diagonal inferior izquierda.
    }

    // Diagonal inferior derecha
    x = i + 1;
    y = j + 1;
    //permite movernos a la casilla inmediatamente inferior y derecha con respecto a la posición del alfil.
    while (x < 8 && y < 8) {
    	// x sea menor a ocho (para mantenerse dentro de los límites del tablero hacia abajo) 
		//y que y sea menor a ocho (para mantenerse dentro de los límites del tablero hacia la derecha)
        mat[x][y] = 'P';
        x++;
        y++;
        //Esto permite moverse a la siguiente casilla en la diagonal inferior derecha.
    }

    
	imprimirPosicion(mat);
    return 0;
	
		
}
void imprimirPosicion(char mat[8][8]) {
    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
            printf("\t%c", mat[x][y]);
        }
        printf("\n");
    }
}


