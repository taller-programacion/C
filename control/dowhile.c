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
      printf( "ERROR: El cero no tiene negativo.\n" );
      //continue;
	//break;
     }
     printf( "El negativo es: %d\n", -n );
     //a += n;
      a = a + n;
   } while ( n >= -10 && n <= 10 );

   printf( "Suma: %d", a );

   return 0;
}
