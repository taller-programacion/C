#include <stdio.h>

int main()
{
    float n1, n2, n3;

    printf( "%s","Introduzca el primer número: ");
    scanf( "%f", &n1 );
    printf( "%s","Introduzca el segundo número: ");
    scanf( "%f", &n2 );
    printf( "%s","Introduzca el primer número: ");
    scanf( "%f", &n3 );

    if ( n1 >= n2 && n1 >= n3 ){
        printf( "\n   %f es el mayor.", n1 );
    }else{

        if ( n2 > n3 ){
            printf( "\n   %f es el mayor.", n2 );
	}else{
            printf( "\n   %f es el mayor.", n3 );
	}
    }

    return 0;
}
