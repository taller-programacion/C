#include <stdio.h>
#include <string.h>

/*
  Iterar
   Meter arreglos
*/

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
	int op;

	puts("¿Qué deseas capturar?");
	puts("1.-Profesorado");
	puts("2.-Alumnado");

	scanf("%i", &op);

	if(op == 1){
		getchar();
		printf("Dame número empleado:");
		fflush(stdin);
		fgets(profesor.numeroEmpleado,13,stdin);
		printf("Dame nombre: ");
		fflush(stdin);
		fgets(profesor.datos_profesor.nombre, 25, stdin);
		printf("Dame apellido paterno: ");
		fflush(stdin);
		fgets(profesor.datos_profesor.apPaterno, 25, stdin);
		printf("Dame apellido materno: ");
		fflush(stdin);
		fgets(profesor.datos_profesor.apMaterno, 25, stdin);
		printf("\n\tID: %s \n\tNombre:%s %s %s", profesor.numeroEmpleado, profesor.datos_profesor.nombre, profesor.datos_profesor.apPaterno, profesor.datos_profesor.apMaterno);   
	}else if(op == 2){
		getchar();
		printf("Dame número empleado: ");
		fflush(stdin);
		fgets(estudiante.numeroCuenta,13,stdin);
		printf("Dame nombre: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.nombre, 25, stdin);
		printf("Dame apellido paterno: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.apPaterno, 25, stdin);
		printf("Dame apellido materno: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.apMaterno, 25, stdin);
		printf("\n\tID: %s \n\tNombre:%s %s %s", estudiante.numeroCuenta, estudiante.datos_estudiante.nombre, estudiante.datos_estudiante.apPaterno, estudiante.datos_estudiante.apMaterno);   

	}else{
		printf("Dame una opción válida");
	}
	return 0;
}
