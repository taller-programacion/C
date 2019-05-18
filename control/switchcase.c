#include <stdio.h>
#include <stdlib.h>
int main()
{
	int opcion;
	printf("Elige una opción:");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 6.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: 
		c= a +b ;
		break;
	case 2: 
		break;
	default:
		printf("No está puesta correctamente la unidad\n");
		exit(0);
	}
	printf("\nLas %f pulgadas son %f centímetros\n", pul, cm);
} 
