/*
5. Diseña una función que, dados dos vectores ordenados del tipo Tvector como
parámetros, devuelva otro vector ordenado de tipo Tvectorg que sea la mezcla de ambos.


Algoritmo de mezcla:
1- del primero vector que agarre los elementos de las posiciones pares
2- del segundo vector que agarre los elementos de las posiciones impares
3- que lo agarrado lo ponga en el tercer vector que tiene que tener un espacio igual a la suma de los 2 anteriores
4- luego que deposite en el tercer vector posicion impar del primero y par del segundo
5-


*/
#include<stdio.h>
#define Tvector 5
#define Tvectorg Tvector+Tvector

//prototipo
int mezcla();

int main(){
	int resultado;
	int vec1[Tvector]={1,2,3,4,5};
	int vec2[Tvector]={6,7,8,9,10};


	resultado = mezcla(vec1[],vec2[]);
	
	printf("El vector 3 %d", resultado);
}                            
int mezcla(int v1[], int v2[]){
	int i,j,k;
	int v3[Tvectorg];
	k=0;
	for(i=0;i<Tvector;i++){
	
		if(i%2==0){
			//aux= vec1[i];
			v3[k]=v1[i];//vec3[0]=vec1[0]; vec3[1]=vec1[2];vec3[2]=vec1[4]
			k++;
		}
	}

	for(j=0;j<Tvector;j++){
		if(j%2!=0){
			//aux1= vec2[j];
			v3[k]=v2[j];//vec3[3]=vec1[1]; vec3[4]=vec1[3];
			k++;
		}
		
	}	
	//ahora a la inversa
	for(i=0;i<Tvector;i++){
	
		if(i%2!=0){
			//aux= vec1[i];
			vec3[k]=vec1[i];
			k++;
		}
	}

	for(j=0;j<Tvector;j++){
		if(j%2==0){
			//aux1= vec2[j];
			vec3[k]=vec2[j];
			k++;
		}
		
	}	
	
	for(i=0;i<Tvectorg;i++){
	
		printf("%d",vec3[i]);
		
	}
	
	return vec3;
}
