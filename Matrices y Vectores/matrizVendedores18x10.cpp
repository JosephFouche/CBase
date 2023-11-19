/*

Crear un programa llamado vendedores que cree un array de 18 X 10 indicando que
poseemos una empresa de 18 vendedores cada uno de los cuales vende 10 productos.
El array almacena los ingresos obtenidos por cada vendedor en cada producto, de modo
que un menú permite almacenar los ingresos, revisar el total de cada vendedor y obtener
los ingresos totales

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	srand(time(0));
	int ventas[18][10];
	int vendedor[10];
	
	int i,j;
	

	
	int opcion;

    do {
        printf("=== Menú ===\n");
        printf("1. Almacenar ingresos\n");
        printf("2. Revisar total de cada vendedor\n");
        printf("3. Obtener ingresos totales\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
            	for(i=0;i<18;i++){
					for(j=0;j<10;j++){
			
						ventas[i][j] = rand() % 100 +1;
					}
				}
				for(i=0;i<18;i++){
					for(j=0;j<10;j++){
						
						printf("\t %d", ventas[i][j]);
					}
					printf("\n");
				}
	
                
                break;
            case 2:
                for (int i = 0; i < 18; i++) {
                    float total = 0;//El bucle externo se encarga de recorrer cada fila del arreglo, correspondiente a cada vendedor.

//Dentro del bucle externo, se inicializa la variable total como 0. 
//Esta variable se utiliza para almacenar la suma de los ingresos de cada producto del vendedor actual.
                    for (int j = 0; j < 10; j++) {
                        total += ventas[i][j];
                        
                    }
                    printf("El total de ingresos del vendedor %d es: %.2f\n", i + 1, total);
                }
                break;
            case 3:
                {
                    float total = 0;
                    for (int i = 0; i < 18; i++) {
                        for (int j = 0; j < 10; j++) {
                            total += ventas[i][j];//se acumula todo de cada fila de cada a fuerza bruta
                        }
                    }
                    printf("Los ingresos totales de la empresa son: %.2f\n", total);
                }
                break;
            case 4:
                printf("¡Chau!\n");
                break;
            default:
                printf("Opción inválida. Por favor, intente nuevamente.\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}


	
	
	
	
