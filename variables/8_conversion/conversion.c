#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
char ch = '@'; //64
int ent = 2;
float flt = 20.00;
double dbl = 400.1234323;

int main()
{ // Inicio
 system("clear"); // Limpia pantallpa
 printf("Char / Entero = %d\n",ch / ent ); //ch pasa a int
 printf("Float * Double = %e\n",flt * dbl ); // flt pasa a double
 printf("Float + Entero = %f\n",dbl + ent ); // ent pasa a double
// printf("Float + Entero = %d\n",dbl + ent ); // error 
 
 printf("(Char / Entero) + (Float * Double) * (Float + Entero) = %f\n", (ch / ent)+(dbl + ent)*(dbl + ent));

 return 0;
} // Fin de programa
