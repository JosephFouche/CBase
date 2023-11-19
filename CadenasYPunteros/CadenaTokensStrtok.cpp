/*

6. Escriba un programa que introduzca una línea de texto, que divida en tokens la línea por
medio de la función strtok y que muestre los tokens en orden inverso.

Análisis
1- Primero imprimir la cadena y definir el token
2- definir el largo de la cadena y en cada caracter colocar el token
3- orden inverso: 

El programa primero pide al usuario que introduzca una línea de texto.
 Luego, utiliza la función strtok para dividir la línea en tokens  utilizando
  como separadores espacios en blanco, tabuladores y saltos de línea.

Cada token se guarda en un array llamado tokens. Además, se mantiene un contador n_tokens que lleva la cuenta del número de tokens encontrados.

Finalmente, se recorre el array tokens en orden inverso, imprimiendo cada token por separado.


*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	char cadena1[50];//cadena
	char deli[]={" \t\n"};//delimitador
	int j;
	
	char *tokens[100];//vector donde se acumulan los tokens
	int c_tokens;//contador de tokens
	c_tokens = 0;//contador se inicializa en 0
	
	printf("ingrese la cadena ");
	gets(cadena1);
	char *token;
	token = strtok(cadena1, deli);
	
	if(token!=NULL){
		while(token!=NULL){
			tokens[c_tokens]=token;
			printf("\n: %s",token);
			
			c_tokens++;
			token = strtok(NULL, deli);
			
		}
		
	}
	j=c_tokens;
	for(j=c_tokens-1; j>=0;j--){
	
		//a la inversa
		printf(":%s", tokens[j]);
	}

	
	
}
  
   
