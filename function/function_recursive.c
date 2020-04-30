#include <stdio.h>

long factorial(int n)
{
	if (n == 0) /* caso base */
		return 1; /* como 0! = 1, regresa 1*/
	else
		return n * factorial (n - 1); /* llamada a esta misma función */
}

int main(void)
{
	/* en este caso se llama a la función y se imprime directamente*/
	printf("%ld\n ", factorial(-10));

	return 0;
}

