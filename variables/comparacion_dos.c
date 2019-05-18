#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf( "\nDame el primer número (entero): ");
    scanf( "%d", &n1 );
    printf( "\nDame el segundo número (entero): ");
    scanf( "%d", &n2 );
    printf( "\nDame el segundo número (entero): ");
    scanf( "%d", &n3 );
    if ( n1 > n2 && n2 > n3 || n1 > n2 && n1 > n3 ){
        printf( "\n\t%d es mayor que %d y %d\n", n1, n2, n3 );
    }else{
        if ( n1 < n2 )
            printf( "\n\t  %d es mayor que %d\n", n2, n1 );
        else
            printf( "\n %d y %d son iguales\n", n1,n2 );
    }
    return 0;
}
