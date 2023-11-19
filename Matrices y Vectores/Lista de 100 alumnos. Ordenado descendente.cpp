/*

Dado una lista de alumnos de 100 alumnos con los datos de nombre y nota: leer los datos y luego
imprimirlos ordenado por nota en forma descendente

*/
#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 4

// Definición de la estructura Alumno
typedef struct {
    char nombre[50];
    float nota;
} Alumno;

// Función para intercambiar dos alumnos
void intercambiarAlumnos(Alumno *a, Alumno *b) {
    Alumno temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    Alumno alumnos[MAX_ALUMNOS];
    int cantidadAlumnos = 0;

    // Leer los datos de los alumnos
    printf("Ingrese los datos de los alumnos:\n");
    for (int i = 0; i < MAX_ALUMNOS; i++) {
        printf("Alumno %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("Nota: ");
        scanf("%f", &alumnos[i].nota);
        cantidadAlumnos++;

        // Salir del bucle si se ingresa un nombre vacío
        if (alumnos[i].nombre[0] == '\0') {
            break;
        }
    }

    // Ordenar la lista de alumnos por nota en forma descendente usando el algoritmo de ordenamiento de burbuja
    for (int i = 0; i < cantidadAlumnos - 1; i++) {
        for (int j = 0; j < cantidadAlumnos - i - 1; j++) {
            if (alumnos[j].nota < alumnos[j + 1].nota) {
                intercambiarAlumnos(&alumnos[j], &alumnos[j + 1]);
            }
        }
    }

    // Imprimir la lista de alumnos ordenada por nota
    printf("\nAlumnos ordenados por nota en forma descendente:\n");
    for (int i = 0; i < cantidadAlumnos; i++) {
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Nota: %.2f\n", alumnos[i].nota);
        printf("\n");
    }

    return 0;
}
