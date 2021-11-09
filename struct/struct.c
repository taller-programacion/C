#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades

/*
struct persona {   
 int edad;
 char nombre[20];
 direccion
 ...
 ...
}

struct persona alumno = {0};
struct persona profesor = {0};

*/
struct biblioteca { // Crea la estructura del registro
	int codigo;
	char titulo[20];
	char autor[20];
}libro, revista;

//libro, libro2, libro3;

//struct biblioteca libro = {0}; // Define libro con el tipo de dato elibro

int main(){ // Inicio
// system("clear"); // Limpia pantalla
 // Ingresa datos del registro
 printf("\nIngrese Libro:\n");
 printf("Ingrese el codigo:");
 scanf("%d",&libro.codigo); 
 printf("Ingrese el título del libro:");
 scanf("%s", libro.titulo);
 printf("Ingrese el nombre del autor:");
 scanf("%s",libro.autor);
 // Imprime el registro
 printf("Registro: %d : %s %s\n", libro.codigo, libro.titulo);

 printf("\nIngrese Revista:\n");
 printf("Ingrese el codigo:");
 scanf("%d",&revista.codigo); 
 printf("Ingrese el título del revista:");
 scanf("%s", revista.titulo);
 printf("Ingrese el nombre del autor:");
 scanf("%s",revista.autor);
 // Imprime el registro
 printf("Registro: %d : %s %s\n", revista.codigo, revista.titulo, revista.autor);
 return 0;
} // Fin de programa| 