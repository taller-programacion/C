#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
#include <string.h>

struct biblioteca { // Crea la estructura del registro
	char codigo[10];
	char titulo[50];
	char autor[50];
}libro2;

void limpiar (char *cadena)
{
  char *p;
  p = strchr (cadena, '\n');
  if (p)
    *p = '\0';
}

int main()
{ // Inicio
 system("clear"); // Limpia pantalla
 // Ingresa datos del registro
 fflush(stdin);
 printf("Ingrese el codigo:");
 fgets(libro2.codigo, 10 , stdin);
 fflush(stdin);
 printf("Ingrese el nombre del autor:");
 fgets(libro2.autor, 50, stdin);
 limpiar(libro2.autor);
 fflush(stdin);
 printf("Ingrese el título del libro:");
 fgets(libro2.titulo, 50, stdin);
 limpiar(libro2.titulo);
 // Imprime el registro
 printf("Registro: %d %s %s\n",atoi(libro2.codigo),libro2.titulo,libro2.autor);
 return 0;
} // Fin de programa| 

