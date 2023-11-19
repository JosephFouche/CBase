/* 

CARGAR UN VECTOR DE 12 ELEMENTOS. DETERMINAR E IMPRIMIR LA
SUMA AQUELLOS QUE SE ENCUENTRA EN POSICIONES IMPARES
A L T E R N A T I V A U N O


 */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
/*
int vec[12];
int i,imp;


int main(){
	srand(time(0));
	int acu;
	acu = 0;
	for(i=0;i<12;i++){
		
		vec[i]= rand()%10+1;
	}
	for(i=0;i<12;i++){
		
		printf("\t%d",vec[i]);
	}
	
	for(i=0;i<12;i++){
		if(i%2==1){
			acu = acu+vec[i];
		}
		
	}
	printf("\n Suma de impares es: %d", acu);
}
*/
int k=0;
int v[12]= {3,2,10,4,8,6,17,0,21,0,31,0}, suma = 0;
int main(void)
{

for ( k = 0 ; k < 12 ; k++)
{ printf (" %d", v[k]);
if (fmod ( k , 2 ) != 0)

suma = suma + v[k];

}
printf ("\n La suma total es %d", suma);

return 0;
}



