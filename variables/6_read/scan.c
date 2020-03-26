#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades

int num_cuenta;
float promedio;
char nombre[10];

int main()
{ // Inicio
 printf("Ingrese numero de cuenta:");
 scanf("%d",&num_cuenta);
 printf("Ingrese promedio:");
 scanf("%f",&promedio);
 printf("Ingrese nombre:");
 scanf("%s",nombre);
 // Imprime el registro
 printf("Alumno : %d %0.3f %s\n",num_cuenta,promedio,nombre);
 return 0;
} // Fin de programa
