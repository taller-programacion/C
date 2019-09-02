#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("Limites de tipos flotantes\n");
	printf("*\n");
	printf("Float\n");
	printf("Mínimo: %f\n",FLT_MIN);
	printf("Máximo: %f\n",FLT_MAX);

	printf("*\n");
	printf("Double\n");
	printf("Mínimo: %lf\n",DBL_MIN);
	printf("Máximo: %lf\n",DBL_MAX);
	
	printf("*\n");
	printf("Long Double\n");
	printf("Mínimo: %LF\n",LDBL_MIN);
	printf("Máximo: %LF\n",LDBL_MAX);
	
return 0;
}
