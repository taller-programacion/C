#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
#include "data3.h"

int main()
{ // Inicio
 system("clear"); // Limpia pantalla
 //struct biblioteca libro2;
 // Ingresa datos del registro
 fflush(stdin);
 printf("Ingrese el codigo:");
 fgets(libro2.codigo, 10 , stdin);
 fflush(stdin);
 printf("Ingrese el nombre del autor:");
 fgets(libro2.autor, 50, stdin);
 fflush(stdin);
 printf("Ingrese el título del libro:");
 /*scanf("%s",libro.titulo);*/
 fgets(libro2.titulo, 50, stdin);
// scanf("%s",libro.autor);
 // Imprime el registro
 printf("Registro: %s %s %s\n",libro2.codigo,libro2.titulo,libro2.autor);
 return 0;
} // Fin de programa| 
