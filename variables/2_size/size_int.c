#include <stdio.h>
#include <limits.h>

int main()
{
	printf("Limites de tipos enteros\n");
	printf("*\n");
	printf("CHAR BIT\n");
	printf("Numero de bits en un byte : %d\n",CHAR_BIT);
	printf("Numero maximo de bytes en un carácter multibyte : %d\n",MB_LEN_MAX);
	printf("*\n");
	printf("Caracter con signo\n");
	printf("Mínimo: %d\n",CHAR_MIN);
	printf("Máximo: %d\n",CHAR_MAX);
	
	printf("*\n");
	printf("Caracter sin signo\n");
	printf("Mínimo: 0\n");
	printf("Máximo: %u\n",UCHAR_MAX);

	printf("*\n");
	printf("Short int con signo\n");
	printf("Mínimo: %hi\n",SHRT_MIN);
	printf("Máximo: %hi\n",SHRT_MAX);

	printf("*\n");
	printf("Short int sin signo\n");
	printf("Mínimo: 0\n");
	printf("Máximo: %hu\n",USHRT_MAX);
	
	printf("*\n");
	printf("Long int con signo\n");
	printf("Mínimo: %li\n",LONG_MIN);
	printf("Máximo: %li\n",LONG_MAX);
	
	printf("*\n");
	printf("Long int sin signo\n");
	printf("Mínimo: 0\n");
	printf("Máximo: %lu\n",ULONG_MAX);
return 0;
}
