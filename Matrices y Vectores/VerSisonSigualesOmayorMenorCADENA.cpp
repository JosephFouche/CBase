/*


Introducir dos variables alfanuméricas de veinte caracteres,
compararlas entre sí, e imprimir si las variables son iguales,
y de lo contrario imprimir que variable está alfabeticamente ubicado la una antes de la otra

*/
#include <stdio.h>
#include <string.h>
main()
{
	char dos[20];
	char uno[20];
	int resultado;
	printf("INTRODUZCA PRIMERA VARIABLE : ");
	gets(uno);
	printf("INTRODUZCA SEGUNDA VARIABLE : ");
	gets(dos);
	resultado = strcoll(uno, dos);
	if (resultado == 0)
	printf("LAS VARIABLES SON IGUALES\n");
	if (resultado < 0)
	printf("%s ESTA ANTES DE %s\n", uno, dos);
	if (resultado > 0)
	printf("%s ESTA ANTES DE %s\n", dos, uno);
	return 0;
}