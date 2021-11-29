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
}profesor[5];

struct alumnado{
	char numeroCuenta[13];
	char promedio[5];
	struct info datos_estudiante; //
}estudiante;

//Función para remover el salto de línea final
void remueveSaltoLinea (char *cadena){
  char *saltoLinea;
  saltoLinea = strchr (cadena, '\n'); //Buscar un caracter en una cadena
  if (saltoLinea)  
    *saltoLinea = ' ';  //mitexto\n --- mitexto\0
}

int main(void){
	int op, reg;

do{
	puts("¿Qué deseas capturar?");
	puts("1.-\'Profesorado\'");
	puts("2.-Alumnado");
	puts("3.-Salir");
	printf("Opción [1\\2\\3] :");

	scanf("%i", &op);
	if(op == 1){
		getchar();
		puts("¿Cuántos registros deseas?");
		scanf("%i", &reg);
		for (int i=0; i<reg; i++){
			puts("--------------------------");
			printf("\n\"Dame número empleado:\"");
			fflush(stdin);
			fgets(profesor[i].numeroEmpleado,13,stdin);
			remueveSaltoLinea(profesor[i].numeroEmpleado);
			printf("Dame nombre: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor.nombre, 25, stdin);
			remueveSaltoLinea(profesor[i].datos_profesor.nombre);
			printf("Dame apellido paterno: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor.apPaterno, 25, stdin);
			remueveSaltoLinea(profesor[i].datos_profesor.apPaterno);
			printf("Dame apellido materno: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor.apMaterno, 25, stdin);
			remueveSaltoLinea(profesor[i].datos_profesor.apMaterno);
		//printf("\n\tID: %s \tNombre:%s\tApellido Paterno: %s\tApellido Materno: %s", profesor.numeroEmpleado, profesor.datos_profesor.nombre, profesor.datos_profesor.apPaterno, profesor.datos_profesor.apMaterno);
		} //Fin de For
	}else if(op == 2){
		getchar();
		printf("Dame número de estudiate: ");
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
		printf("\n\tID: %s \n\tNombre:%s\n\tApellido Paterno: %s\n\tApellido Materno: %s", estudiante.numeroCuenta, estudiante.datos_estudiante.nombre, estudiante.datos_estudiante.apPaterno, estudiante.datos_estudiante.apMaterno);   
	}else{
		printf("Dame una opción válida");
	}
}while (op != 3);
	puts("\n----------------------------");
	puts("Datos Profesores:");
	for (int i=0; i<reg; i++){
	    printf("\n\tID: %s \tNombre completo: %s%s%s", profesor[i].numeroEmpleado, profesor[i].datos_profesor.nombre, profesor[i].datos_profesor.apPaterno, profesor[i].datos_profesor.apMaterno);
	    //printf("\n\tID: %s \tNombre:%s\tApellido Paterno: %s\tApellido Materno: %s", profesor[i].numeroEmpleado, profesor[i].datos_profesor.nombre, profesor[i].datos_profesor.apPaterno, profesor[i].datos_profesor.apMaterno);
	}
	puts("\n----------------------------");
	return 0;
}
