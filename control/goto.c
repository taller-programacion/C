#include <stdio.h>

int main()
{

   int n, a;

   a = 0;
   do
   {
     printf( "Introduzca un numero entero: " );
     scanf( "%d", &n );

     if ( n == 0 )
     {
      printf( "ERROR: El cero no tiene opuesto.\n" );
      goto imprimeresultado;
     }
     printf( "El opuesto es: %d\n", -n );
     a += n;
   } while ( n >= -10 && n <= 10 );


   imprimeresultado:
   printf( "Suma: %d", a );

   return 0;
}
