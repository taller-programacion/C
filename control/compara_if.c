#include<stdio.h>
/*
  Encontrar el mayor de dos números
*/

//Declarando e inicializando variables
int x=0;
int y=0;
int z=0;

int main(void){
    //Pedir valores a usuario
    printf("\tIngresa un número: ");
    scanf("%d",&x);
    printf("\tIngresa un número: ");
    scanf("%d",&y);
    printf("\tIngresa un número: ");
    scanf("%d",&z);

    //Estructura de control de selección simple
    if(x==y && y==z){//Igualdades
        printf("%d es igual a %d y %d", x, y, z);
    }else{ // Comparaciones
        if(x>y){
            if(y>z){
                printf("%d es mayor que %d y %d", x, y, z);
            }else{
                printf("%d es mayor que %d y %d", z, x, y);
            }
        }else{
            if(y>z){
                printf("%d es mayor que %d y %d", y, x, z);
            }else{
                printf("%d es mayor que %d y %d", z, x, y);
            }
        }
    }
/*
    if(x==y){
        printf("\nEsto es un IF\n");
        printf("%d es igual que %d", x, y);
    }else if(x>y){
        printf("\nEsto es un ELSIF\n");
        printf("%d es mayor que %d", x, y);
    }else{
        printf("\nEsto es un ELSE\n");
        printf("%d es mayor que %d", y, x);
    }
*/
    printf("\nFin de programa\n");
    return 0;

}