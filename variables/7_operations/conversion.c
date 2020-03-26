#include <stdio.h> 
#include <stdlib.h>

int main()
{ 
 int x=4;
 float y=2.2;
 float z; // Resultado real
 int u; // Resultado entero.
 z=x+y; // Conversión implicita sin perdida de datos
 printf("%d + %2.1f = %2.1f \n",x,y,z);
 u=x+y; // Conversión implicita con perdida de datos
 printf("%d + %2.1f = %d\n",x,y,u);
 y=2.0; // Nuevo valor
 u=x+(int)y; // Conversión explicita
 printf("%d + %2.1f = %d\n",x,y,u);
 // Conversiones explícitas mediante funciones}
 printf("Cadena: \"%s\" a punto flotante: \n%10.2f\n","12345.50",atof("12345.50")); // atof()
 printf("Cadena: \"%s\" a entero: %d\n","12345",atoi("12345")); // atoi()
 printf("Cadena: \"%s\" a entero largo: %ld\n","12345679012334",atol("12345679012334")); //atol()
 return 0;
} // Fin de programa
