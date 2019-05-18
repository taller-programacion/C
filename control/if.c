#include <stdio.h>
int main()
{
	float cm, pul, valor;
	char unidad;
	printf("Introduce número y unidad (p=pulg. o c=cm: ");
	scanf("%f %c",&valor, &unidad);

	if (unidad=='p')
	{
 		cm=valor*2.54;
		 printf("Las %f pulgadas son %f centímetros\n",valor,cm);
	}
	if (unidad=='c')
	{
		pul=valor/2.54;
		printf("Los %f centímetros son %f pulgadas\n",valor,pul);
	}
	if (unidad!='c' || unidad!='p')
	{
		printf("Valores incorrectos");
	}

	else
	{
	printf("Fin de programa\n");
	}
} 	
