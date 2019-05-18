#include <stdio.h>

int main()
{

   int n, a;
   a = 0;
   
     printf( "Introduzca un numero entero: " );
     scanf( "%d", &n );

     while( n >= -10 && n <= 10 ){
	     if ( n == 0 )
	     {
	      printf( "ERROR: El cero no tiene negativo.\n" );
	      //continue;
		//break;
	     }
	     printf( "El opuesto es: %d\n", -n );
	     //a += n;
	      a = a + n;
	      continue;
      }

   printf( "Suma: %d", a );

   return 0;
}
