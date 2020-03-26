#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
//#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
#include <string.h> // Archivo de cabecera para funciones cadena
int main()
{ // Inicio
 char saludo[20] = "Hola"; // Define variable cadena
 strcpy(saludo,"Buenos"); // Asigna valor a cadena
 strcat(saludo," dias");
 strcat(saludo,"_usuario");
 printf("%s\n",saludo); // Muestra cadena nueva
 return 0;
} // Fin de programa
