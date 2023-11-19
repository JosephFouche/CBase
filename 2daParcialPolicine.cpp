/*
en un archivo se tiene almacenados todos los datos referente a la asistencia de publico a las salas de Cine de PoliCine que 
tene 4 salas.

Fecha(ddmmaaaa), codigo de sala(CodSala), Cantidad de Entrada(CantEntrada), Pelicula
29122014, A, 2, Examenes Finales 2
29122014, B, 4, Examenes Finales 2
29122014, C, 10, Taller 4
29122014, D, 20, Vectoriales 3

30122014, A, 45, Examenes Finales 2
30122014, B, 12, Vectoriales 3

31122014, D, 1, Taller 4
31122014, C, 17, Taller4

01122014, A, 50, Examenes Finales 2

El archivo esta ordenado por Fecha, y la primera fecha corresponde a un dia lunes.



*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define lfecha 9

#define lpelicula 25

int Fecha, CantEntrada;
char Pelicula[lpelicula];

int gFecha;
int total[4]; // Contadores para A, B, C y D

char CodSala;
FILE * Cine;

void Corte();
void procesar();
void PrimerRegistro();


int main(){
	
	if((Cine = fopen("Cine1.txt","r"))==NULL){
		printf("No se pudo abrir el archivo");
		return (1);	
	}	
	fscanf(Cine, "%d %c %d %s", &Fecha,&CodSala,&CantEntrada,Pelicula);
	PrimerRegistro();
	 
    while ( !feof (Cine) ) 
    {
		
              if ( gFecha != Fecha ) {
                 Corte();
              } 
                
			procesar(); 
              fscanf(Cine, "%d %c %d %s", &Fecha,&CodSala,&CantEntrada,Pelicula);
            //  printf ("%d %d %d %d", zona, dia, mes, importe);
              
        }

        
        Corte(); // obligatorio
        
    
    
       
	fclose(Cine);
    return 0;
	
}
void PrimerRegistro(){
	gFecha = Fecha;
	for (int i = 0; i < 4; i++) {
        total[i] = 0;
    }
}
void procesar(){
	//char salas[4] = {'A', 'B', 'C', 'D'};
	char salas[4][2] = {"A", "B", "C", "D"};
    for (int i = 0; i < 4; i++) {
        if (CodSala == salas[i][0]) {
            total[i] += CantEntrada; // Incrementar el contador correspondiente
            
        }
    }
}
void Corte(){
	printf ("\nFecha: %d", gFecha);
	printf("+--------+--------+--------+--------+--------+\n");
    printf("|  Día   | Sala A | Sala B | Sala C | Sala D |\n");
    printf("+--------+--------+--------+--------+--------+\n");
    
    printf("\t│  %3d  │ %9d │ %8d │ %5d │ %5d │\n", gFecha, total[0], total[1], total[2], total[3]);
    
    PrimerRegistro();
}
	

