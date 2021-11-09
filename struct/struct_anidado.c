#include <stdio.h>
#include <string.h>

struct info{
	char nombre[25];
	char apPaterno[25];
	char apMaterno[25];
	char direccion[25];
}; 

struct academico{
	char numeroEmpleado[13];
	struct info datos_profesor;
}profesor; 

struct alumnado{
	char numeroCuenta[13];
	char promedio[5];
	struct info datos_estudiante; //
}estudiante;

int main(void){
	strcpy(profesor.datos_profesor.nombre,"Daniel");  //strcpy
	strcpy(profesor.datos_profesor.nombre,"J");  //strcpy
	strcpy(profesor.datos_profesor.apPaterno,"Rosales");
	strcpy(profesor.datos_profesor.apMaterno,"Mendoza");
	strcpy(profesor.datos_profesor.direccion, "Valhalla");
	strcpy(profesor.numeroEmpleado, "123456789");
	
	/* imprimimos los datos */
	printf("\n Planta Docente: ");
	printf("\n Nombre: %s %s %s", profesor.datos_profesor.nombre, profesor.datos_profesor.apPaterno, profesor.datos_profesor.apMaterno);
	printf("\n RFC: %s", profesor.numeroEmpleado);
	printf("\n Direccion: %s", profesor.datos_profesor.direccion); 
	
	strcpy(estudiante.datos_estudiante.nombre,"Juan");
	strcpy(estudiante.datos_estudiante.apPaterno,"Rojas");
	strcpy(estudiante.datos_estudiante.apMaterno,"Méndez");
	strcpy(estudiante.datos_estudiante.direccion,"Midgard");
	strcpy(estudiante.numeroCuenta, "315093450");
	strcpy(estudiante.promedio, "9.98");
	
	/* imprimimos los datos */
	printf("\n");
	printf("\n Alumnado: ");
	printf("\n Nombre: %s %s %s", estudiante.datos_estudiante.nombre, estudiante.datos_estudiante.apPaterno, estudiante.datos_estudiante.apMaterno );
	printf("\n NumCuenta: %s", estudiante.numeroCuenta);
	printf("\n Promedio: %s", estudiante.promedio);
	printf("\n Direccion: %s", estudiante.datos_estudiante.direccion);
	printf("\n");
	
	return 0;
}
