/*55. EJERCICIO
Dado dos vectores POS y NEG numéricos, ambos con tamaño MAXTAM; colocar en el vector POS los elementos positivos
y en NEG todos los elementos negativos. La comparación es posicional, es decir el elemento 1 del vector POS se compara
con el elemento 1 del vector NEG.
OBS:
 Si en POS existe un negativo y en NEG un positivo, se intercambian.
 Si en POS existe un positivo y en NEG un positivo, se coloca 0(cero) en NEG y POS mantiene su valor.
 Si en POS existe un negativo y en NEG un negativo, se coloca 0(cero) en POS y NEG mantiene su valor.
 Al final imprimir POS y NEG
*/
#include<stdio.h>
#define MAXTAM 7


int main(void){
	int POS[MAXTAM]={1,-5,8,-10,9,15,7};
	int NEG[MAXTAM]={-4,91,8,-9,10,12,23};
	
	int j,i,aux,imp,imp1;
	j=0;
	for (i=0; i <= MAXTAM - 1; i++){
	 //se recorre el primer vector y se verifica que sus elementos sean positivos, sino intercambiar o poner cero
	 
    	if(POS[i] <1 && NEG[i]>=1){
	        aux = POS[i];
			POS[i] = NEG[i]; //en el primer caso
			NEG[i] = aux;
		}
       
        	if( POS[i] >= 1 && NEG[i]>=1){
    			NEG[i]=0;//segundo caso
    		}
    	
    		   	if( POS[i] < 1 && NEG[i]<1){
    				POS[i]=0;//tercer caso
    			}
   		
   	
    }
  for (i=0; i <= MAXTAM - 1; i++){
  	printf("N%d ", NEG[i]);
  	
	}
	for (i=0; i <= MAXTAM - 1; i++){
  	
  	printf("P:%d ", POS[i]);
	}
    
  return 0;
}