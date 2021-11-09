#include<stdio.h>

/*Clasificación de videojuegos*/
/*
    Clasificación "A". Contenido para todo público. ...
    Clasificación "B". Contenido para adolescentes a partir de 12 años. ...
    Clasificación "B15". Contenido para mayores de 15 años. ...
    Clasificación "C". Contenido no apto para personas menores de 18 años. ...
    Clasificación "D". > 21
*/
int main(){

    int anio, edad, opc; //Declaración de variables 

    printf("Introduce tu anio de nacimiento:");
    scanf("%d", &anio);

    //Cálculo de edad
    edad = 2021 - anio;
    printf("\nTienes %d anios\n", edad);

    if(edad >= 12 && edad < 15){
        printf("Puedes seleccionar de nuestro catálogo A y B");
        printf("\nElige una opción:\n 1.- toda la familia\n 2.- Adolescentes\n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\nt1.- Free fire \n 2.- Minecraft");
                break;
            case 2:
                printf("\nt1.- Fornite \n 2.- Pokemon");
                break;
            default:
                printf("\nElige una opción válida");
                break;
        }
    }
    else if(edad >= 15 && edad < 18 ){ // 15 - 17
        printf("Puedes seleccionar de nuestro catálogo A, B y B-15");
        printf("\nElige una opción:\n 1.- toda la familia\n 2.- Adolescentes\n 3.- Mayores de 15\n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\nt1.- Free fire \n 2.- Minecraft");
                break;
            case 2:
                printf("\n\t1.- Fornite \n 2.- Pokemon");
                break;
            case 3:
                printf("\n\t1.- Call of Duty \n 2.- Gears of War");
            default:
                printf("\nElige una opción válida");
                break;
        }
    }
    else if(edad >= 18 && edad < 21){ // 18 - 20
        printf("Puedes seleccionar de nuestro catálogo A, B, B-15 y C");
        printf("\nElige una opción:\n 1.- toda la familia\n 2.- Adolescentes\n 3.- Mayores de 15\n 4.- Adultos\n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\n\t1.- Free fire \n 2.- Minecraft");
                break;
            case 2:
                printf("\n\t1.- Fornite \n 2.- Pokemon");
                break;
            case 3:
                printf("\n\t1.- Call of Duty \n 2.- Gears of War");
            case 4:
                printf("\n\t1.- Mortal Kombat \n 2.- Grand Theft Auto");
            default:
                printf("\nElige una opción válida");
                break;
        }
    }
    else if(edad >=21){  // 21 - n-1
        printf("Puedes seleccionar de nuestro catálogo A, B, B-15, C y D");
        printf("\nElige una opción :\n 1.- toda la familia\n 2.- Adolescentes\n 3.- Mayores de 15\n 4.- Adultos\n 5.- Mayores de 21\n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\n\t1.- Free fire \n 2.- Minecraft");
                break;
            case 2:
                printf("\n\t1.- Fornite \n 2.- Pokemon");
                break;
            case 3:
                printf("\n\t1.- Call of Duty \n 2.- Gears of War");
            case 4:
                printf("\n\t1.- Mortal Kombat \n 2.- Grand Theft Auto");
            case 5:
                printf("\n\t1.- Manhunt \n2.- Doom");
            default:
                printf("\nElige una opción válida");
                break;
        }
    }
    else{
        printf("Puedes seleccionar de nuestro catálogo Clasificación A");
        printf("\nt1.- Free fire \n 2.- Minecraft");
    }
    return 0;
}