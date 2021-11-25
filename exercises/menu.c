#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Switch-Case: Estructura de selección múltiple
    Descripción: Menú telefónico
*/

int main(){

<<<<<<< HEAD
    int opcion; //Declarando variable opcion
=======
    int opcion = 0; //Declarando variable opcion
>>>>>>> 1b80eaa5d12a3ba1683bd1d32aa3c902b054fed6
    char opcion2; //Declarando variable opcion
 //   char opcion3[10] ='Hola';
 //   char variable = 'A';

<<<<<<< HEAD
    printf("------Opcion vale: %i", opcion);

    //for(opcion=0; opcion != 4;){
    do{  // 0 != 4
        printf("\n------------------------------------------------------");
        printf("\nBienvenido a nuestro centro telefónico..bla bla bla...");
        printf("\nElige una opción [1-4]:\n");
        printf("\t1.- Quejas o sugerencias\n");
        printf("\t2.- Pagos\n");
        printf("\t3.- Revisar términos y condiciones\n");
        printf("\t4.- Salir\n");
        scanf("%d", &opcion);  //Pidiendo al usuario un dígito

        switch(opcion){ //switch(1){...}
            case 1:
                printf("\n\tUno de nuestros agentes atenderá su caso, espere en la línea...");
                break;
            case 2:
                //Submenú
                printf("\n\t\tElige una opción [A-D]:\n");
                printf("\t\tA.- Consulta de Saldo\n");
                printf("\t\tB.- Pagar servicio\n");
                printf("\t\tC.- Hablar con un ejecutivo\n");
                printf("\t\tD.- Salir\n");
                
                scanf("%s", &opcion2);  //Pidiendo al usuario un dígito
                //fflush(stdin);
                //opcion2 = getchar();
                switch(opcion2){
                    case 'A':
                        printf("\t\t\tSaldo actual es de $250.00");
                        //break;
                    case 'B':
                        printf("\t\t\tPagando....");
                        printf("\n\t\t\tAdeudo actual es de $0.0");
                        //break;
                    case 'C':
                        printf("\t\t\tEspere en la línea");
                        //break;
                    case 'D':
                        printf("\n\t\t\tAgradecemos su llamada...pero estamos de vacaciones, ¡NO MOLESTE!");
                        //break;
                    default:
                        printf("\n\tElige una opción válida...");
                        //break;
                }
                //break;
            case 3:
                printf("\n\tBla bla bla bla bla bla...");
                //TODO
                //break;
                //...
                //...
            case 4:
                printf("\n\tAgradecemos su llamada...pero estamos de vacaciones, ¡NO MOLESTE!");
                //break;
            default:
                printf("\n\tElige una opción válida...");
                //break;
            }  //Fin switch
    //    printf("\n\nDame una opción:");
    //    scanf("%d", &opcion);  //Pidiendo al usuario un dígito
    }while(opcion != 4);  //FIN do-while
   // }//FIN For
     
    printf("\nFuera del switch");
    return 0;
}
=======
    printf("Bienvenido a nuestro centro telefónico..bla bla bla...");
    printf("\nElige una opción [1-4]:\n");
    printf("\t1.- Quejas o sugerencias\n");
    printf("\t2.- Pagos\n");
    printf("\t3.- Revisar términos y condiciones\n");
    printf("\t4.- Salir\n");
    scanf("%d", &opcion);  //Pidiendo al usuario un dígito

    switch(opcion){ //switch(1){...}
	case 1:
        printf("\n\tUno de nuestros agentes atenderá su caso, espere en la línea...");
		break;
	case 2:
        //Submenú
        printf("\n\t\tElige una opción [A-D]:\n");
        printf("\t\tA.- Consulta de Saldo\n");
        printf("\t\tB.- Pagar servicio\n");
        printf("\t\tC.- Hablar con un ejecutivo\n");
        printf("\t\tD.- Salir\n");
        
        scanf("%s", &opcion2);  //Pidiendo al usuario un dígito
        //fflush(stdin);
        //opcion2 = getchar();
        switch(opcion2){
            case 'A':
                printf("\t\t\tSaldo actual es de $250.00");
                break;
            case 'B':
                printf("\t\t\tPagando....");
                printf("\n\t\t\tAdeudo actual es de $0.0");
                break;
            case 'C':
                printf("\t\t\tEspere en la línea");
                break;
            case 'D':
                printf("\n\t\t\tAgradecemos su llamada...pero estamos de vacaciones, ¡NO MOLESTE!");
                break;
            default:
                printf("\n\tElige una opción válida...");
                break;
        }
        break;
    case 3:
        printf("\n\tBla bla bla bla bla bla...");
        //TODO
        break;
        //...
        //...
    case 4:
        printf("\n\tAgradecemos su llamada...pero estamos de vacaciones, ¡NO MOLESTE!");
        break;
    default:
        printf("\n\tElige una opción válida...");
        break;
    }
    printf("\nFuera del switch");
    return 0;
}
>>>>>>> 1b80eaa5d12a3ba1683bd1d32aa3c902b054fed6
