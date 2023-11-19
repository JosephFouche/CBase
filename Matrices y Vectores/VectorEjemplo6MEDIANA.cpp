/*		

 EL PROGRAMA ORDENA EN FORMA SECUENCIAL ASCENDENTE UN VECTOR QUE SE CARGA
EN FORMA DIRECTA,
UTILIZANDO EL METODO DE BURBUJA CON ITERACION ANIDADA Y LUEGO CALCULA LA
MEDIANA.
SI N ES PAR LA MEDIANA ES LA SEMISUMA DE LOS ELEMENTOS DEL MEDIO, EN CASO
CONTRARIO, LA MEDIANA ES EL ELEMENTO DEL MEDIO
*/
#include<stdio.h>
#include<stdlib.h>

main(){
	int vec[]= {9,8,7,6,5,4,3,2,1};
	int i,j;
	int med;
	int aux;
	aux = 0;
	
	for(i=0;i<9;i++){
		printf("\t %d",vec[i]);
	}
	printf("\n");
	
	//se ordena
	
	for(i=0;i<9;i++){
		for(j=0;j<9-1;j++){
			//se ordena de menor a mayor, osea los menores en los primeros lugares
			if(vec[j]>vec[j+1]){
				aux = vec[j];
				vec[j]= vec[j+1];
				vec[j+1]=aux;
			}
		}
	}
	printf("\nOrdenado\n");
	for(i=0;i<9;i++){
		printf("\t %d",vec[i]);
	}
	printf("\n");
	
	
	//se procede a  hallar mediana
	//como nueve es impar LA MEDIANA ES EL ELEMENTO DEL MEDIO
	
	for(i=0;i<9;i++){
		if(i==4){
			printf("La mediana es  %d", vec[i]);
		}
	}
}


