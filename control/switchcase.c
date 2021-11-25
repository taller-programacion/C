#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
	//Declarar e inicializar 2 variables (a, b)
	float a = 0, b = 0, resultadoSuma = 0;
	int operacion, opcion;

	printf("------------------------------");
	printf("\n¿Qué deseas hacer?\n");
	printf("\t1.- Realizar Operaciones\n\t2.- Salir\n");
	printf("------------------------------\n");
	
	scanf("%d", &opcion);

	do{
		if (opcion != 1){
			printf("Salir\n");
			exit(0);
		}else{
			//Elegir Operación (+, -, *, /)
			printf("¿Qué operación deseas?\n ");
			printf("1.- Suma \n 2.- Resta \n 3.- Multiplicación \n 4.- División\n 5.- Raíz Cuadrada\n 6.- Potencia\n 7.- Salir\n");
			scanf("%d", &operacion);
		
			if (operacion == 5){
				printf("Dame el número: ");
				scanf("%f", &a);
			}else if(operacion == 7){
				printf("Apagando Calculadora...\n");
			}else{			
				//Ingresar los datos (a, b)
				printf("Dame el primer número: ");
				scanf("%f", &a);
				printf("Dame el segundo número: ");
				scanf("%f", &b);
			}
			//Imprimir el resultado
			switch ( operacion ){
				case 1:
					resultadoSuma = a + b;
					printf("\tEl resultado de %0.2f + %0.2f = %0.2f\n", a, b, resultadoSuma);
					break;
				case 2:
					printf("\tEl resultado de %0.2f - %0.2f = %0.2f\n", a, b, a - b);
					break;
				case 3:
					printf("\tEl resultado de %0.2f * %0.2f = %0.2f\n", a, b, a * b);
					break;
				case 4:
					//Validar división entre 0
					if( b == 0){
						printf("\tLa división entre %f no está definida\n", b);
					}else{
						printf("\tEl resultado de %0.2f / %0.2f = %0.2f\n", a, b, a / b);
					}
					break;
				case 5:
					if( a < 0){
						printf("\tLa raíz cuadrada de un número negativo no está definida\n", a);
					}else{
						printf("\tEl raíz cuadrada de  %0.2f  es %0.2f\n", a, sqrt(a));
					}
					break;
				case 6:
					printf("\tEl resultado de %0.2f elevado a la %0.2f es %0.2f \n", a, b, pow(a, b));
					break;			
				case 7:
					exit(0);
				default:
					printf("Elige una opción válida\n");
			}
		//	printf("Printf fuera del switch\n");
		}
		//printf("Printf fuera de else\n");			
	}while(operacion != 7);

	return 0;
}