#include <stdio.h>
#include <string.h>

int ciudad, edad, var_MF;
char nombre[50], apellido[50], sexo;

int var_control;
int M[101][3];

int total_M, total_F, total_T, total_TM, total_TF,total_P;

void corte();
void procesar();
void pais();

int main()
{
    FILE *censo = fopen("censo.txt", "r");
// a función memset(M, 0, sizeof(M)) lo que hace es qué te cargar toda la matriz o vector con 0
//  así te ahorras usar un ciclo for para igualar todo a 0
    memset(M, 0, sizeof(M));
    total_M = 0;
    total_F = 0;
    total_T = 0;
    total_TM = 0;
    total_TF = 0;
    total_P = 0;
    
    if (censo != NULL)
    {
        fscanf(censo, "%d %s %s %c %d\n", &ciudad, nombre, apellido, &sexo, &edad);

        var_control = ciudad;

        while (sexo != 'x')
        {
            if (sexo == 'M')
            {
                var_MF = 1;
            }
            else if (sexo == 'F')
            {
                var_MF = 2;
            }

            if (var_control != ciudad)
            {
                corte();
            }

            procesar();

            fscanf(censo, "%d %s %s %c %d\n", &ciudad, nombre, apellido, &sexo, &edad);
        }

        corte();
    }

    pais();
    
    fclose(censo);
    return 0;
}

void corte()
{
    printf("\nCiudad : %02d\n", var_control);
    printf("\t┌───────┬───────────┬──────────┬───────┐\n");
    printf("\t│  Edad │ Masculino │ Femenino │ TOTAL │\n");
    printf("\t├───────┼───────────┼──────────┼───────┤\n");

    for (int i = 0; i < 101; i++)
    {
        int total_edad = M[i][1] + M[i][2];
        if (total_edad != 0)
        {
            printf("\t│  %3d  │ %9d │ %8d │ %5d │\n", i, M[i][1], M[i][2], total_edad);
            total_M += M[i][1];
            total_F += M[i][2];
        }
    }

    total_T = total_M + total_F;
    total_TM += total_M;
    total_TF += total_F;
    total_P += total_T;

    printf("\t├───────┼───────────┼──────────┼───────┤\n");
    printf("\t│ TOTAL │%10d │%9d │%6d │\n", total_M, total_F, total_T);
    printf("\t└───────┴───────────┴──────────┴───────┘\n");

    var_control = ciudad;
    memset(M, 0, sizeof(M));
    total_M = 0;
    total_F = 0;
    total_T = 0;
}

void procesar()
{
    M[edad][var_MF] += 1;
}

void pais()
{
    printf("\nTotal Pais\n");
    printf("\t\t┌───────────┬──────────┬───────┐\n");
    printf("\t        │ Masculino │ Femenino │ TOTAL │\n");
    printf("\t┌───────┼───────────┼──────────┼───────┤\n");
    printf("\t│ TOTAL │%10d │%9d │%6d │\n", total_TM, total_TF, total_P);
    printf("\t└───────┴───────────┴──────────┴───────┘\n");

}
