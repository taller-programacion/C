#include <stdio.h>
#define num 10

int main()
{
	const int constante=32;
	int variable=12;
	
	printf("Valor de constante:%d\n", constante);
	printf("Valor de variable:%d\n", variable);
	printf("Valor de macro:%d\n", num);
	
	printf("\n\nCambiando valores...\n\n");

	//constante=10;
	variable=0;
	#define num 300
		
	//printf("Nuevo valor de constante:%d\n", constante);
	printf("Nuevo valor de variable:%d\n", variable);
	printf("Nuevo valor de macro:%d\n", num);
	return 0;
}
