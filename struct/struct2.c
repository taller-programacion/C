#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
#include "data.h" // Archivo de cabecera para subrutinas de utilidades

int main()
{ 
 printf("Ingrese el codigo:");
 scanf("%d",&libro.code);
 printf("Ingrese el título del libro:");
 scanf("%s",libro.titulo);
 printf("Ingrese el nombre del autor:");
 scanf("%s",libro.autor);
 printf("Registro: %d %s %s\n",libro.code,libro.titulo,libro.autor);
 return 0;
} 
