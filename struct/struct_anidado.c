#include <stdio.h>
#include <string.h>

struct info
{
	char direccion[25];
	char id[13];
}; 

struct academico
{
	char nombre[25];
	struct info datos_profesor; 
}profesor; 

struct alumnado
{
	char nombre[25];
	struct info datos_estudiante;
}estudiante;

int main(void)
{
	
	strcpy(profesor.nombre,"Daniel Rosales");
	strcpy(profesor.datos_profesor.direccion, "Valhalla");
	strcpy(profesor.datos_profesor.id, "RMDD900993");
	
	/* imprimimos los datos */
	printf("\n Planta Docente: ");
	printf("\n Nombre: %s", profesor.nombre);
	printf("\n RFC: %s", profesor.datos_profesor.id);
	printf("\n Direccion: %s", profesor.datos_profesor.direccion); 
	
	strcpy(estudiante.nombre,"Juan Rojas");
	strcpy(estudiante.datos_estudiante.direccion,"Midgard");
	strcpy(estudiante.datos_estudiante.id, "315093450");
	
	/* imprimimos los datos */
	printf("\n");
	printf("\n Alumnado: ");
	printf("\n Nombre: %s", estudiante.nombre);
	printf("\n NumCuenta: %s", estudiante.datos_estudiante.id);
	printf("\n Direccion: %s", estudiante.datos_estudiante.direccion);
	printf("\n");
	
	return 0;
}
