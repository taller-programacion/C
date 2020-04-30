#include <stdio.h>
#include <string.h>

enum Semana
{
	domingo=1,
	lunes,
	martes,
	miercoles,
	jueves,
	viernes,
	sabado
}dia;

int main()
{
	for (dia = domingo; dia <= sabado; dia++) //for(casa=0; casa<=13; casa++)
	{
		printf("\nHoy es el dia %d de la semana", dia);
	}
	puts("\n");

	return 0;
}
