/*

67. EJERCICIO

Dada las posición de la pieza de ajedrez "caballo" imprimir las posiciones posibles a los que puede moverse. La forma de
moverse un caballo en un tablero de ajedrez dada una posición es la siguiente:
a) Saltar dos casillas hacia adelante o atrás y una casilla a la derecha o izquierda ó
b) Saltar dos casillas a la derecha o izquierda y una casilla adelante o atrás.


*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void imprimirPosicion(char mat[8][8]);

int dentroDelTablero(int x, int y) {
    return (x >= 0 && x < 8 && y >= 0 && y < 8);
}

// Función para imprimir las posiciones posibles a las que puede moverse un caballo
void imprimirMovimientosCaballo(int x, int y) {
    int movimientos[8][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1},
                             {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
    /*
    {2, 1}: Este par de coordenadas representa un movimiento de saltar dos casillas hacia adelante o atrás y una casilla a la derecha o izquierda.
	{1, 2}: Este par de coordenadas representa un movimiento de saltar dos casillas a la derecha o izquierda y una casilla adelante o atrás.
	{-1, 2}: Este par de coordenadas representa un movimiento de saltar dos casillas a la derecha o izquierda y una casilla adelante o atrás (en dirección opuesta al anterior).
	{-2, 1}: Este par de coordenadas representa un movimiento de saltar dos casillas hacia adelante o atrás y una casilla a la derecha o izquierda (en dirección opuesta al primer movimiento).
	{-2, -1}, {-1, -2}, {1, -2}, {2, -1}: Estos pares de coordenadas representan movimientos simétricos a los anteriores, pero en direcciones opuestas.
	*/
    printf("Posiciones posibles a las que el caballo puede moverse:\n");
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == x && j == y) {
                printf(" C "); // Representa la posición actual del caballo
            } else if (dentroDelTablero(i, j)) {
                int esPosible = 0;
                for (int k = 0; k < 8; k++) {
                    int nuevoX = x + movimientos[k][0];
                    int nuevoY = y + movimientos[k][1];
                    /*
					nuevoX = x + movimientos[k][0];: Se toma el valor actual de x, que representa la columna actual del caballo, y se le suma el valor correspondiente
					 en la matriz movimientos. movimientos[k][0] representa el desplazamiento en la columna para el movimiento k. Esto significa que se está calculando
					  la nueva columna a la que el caballo se movería si realizara el movimiento k.

nuevoY = y + movimientos[k][1];: Se toma el valor actual de y, que representa la fila actual del caballo, y se le suma el valor correspondiente en la matriz
 movimientos. movimientos[k][1] representa el desplazamiento en la fila para el movimiento k. Esto significa que se está calculando la nueva fila
  a la que el caballo se movería si realizara el movimiento k.
					*/
                    if (nuevoX == i && nuevoY == j) {
                        esPosible = 1;
                        break;
                    }
                }
                
                if (esPosible) {//Si es igual a 1, significa que la posición (i, j) es una de las posiciones posibles, por lo que se imprime X
                    printf(" X "); // Representa una posición posible a la que el caballo puede moverse
                } else {//Si es igual a 0, significa que la posición (i, j) no es alcanzable por el caballo, por lo que se imprime *
                    printf(" * "); // Representa una posición no alcanzable por el caballo
                }
            } else {
                printf(""); // Representa posiciones fuera del tablero
            }
        }
        printf("\n");
    }
}



int main(){
	char posicion[3];
    
    printf("Ingrese la posición actual del caballo (ejemplo: e4): ");
    scanf("%s", posicion);
    
    int x = posicion[0] - 'a'; // Convertir la coordenada de la columna a un índice numérico
    int y = posicion[1] - '1'; // Convertir la coordenada de la fila a un índice numérico
    
    /*
	En la primera línea, posicion[0] representa el primer carácter de la cadena posicion, que es la coordenada de la columna del caballo. 
	Al restar el valor ASCII de posicion[0] por el valor ASCII de 'a', se obtiene un valor numérico que representa la posición de la columna en el rango de 0 a 7.
	 Esto se debe a que los caracteres 'a'-'h' representan las columnas del tablero de ajedrez en orden de izquierda a derecha.

En la segunda línea, posicion[1] representa el segundo carácter de la cadena posicion, que es la coordenada de la fila del caballo.
 Al restar el valor ASCII de posicion[1] por el valor ASCII de '1', se obtiene un valor numérico que representa la posición de la fila en el rango de 0 a 7.
  Esto se debe a que los caracteres '1'-'8' representan las filas del tablero de ajedrez en orden de abajo hacia arriba.
	
	*/
    
    imprimirMovimientosCaballo(x, y);
    
    return 0;
}
//void imprimirPosicion(char mat[8][8]){
	
//}
