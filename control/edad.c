#include<stdio.h>

/*
  Descripción: Dependiendo de la edad se mostrará cierta información
*/

int edad;

void main(){

    printf("\nDame tu edad:");
    scanf("%i", &edad);  //17
    if(edad >0 && edad < 14){   // 12 >=14 -> false  AND 12 < 18 -> true  = false
        //BLOQUE1
        printf("\nTienes %i anios, eres generación z:", edad);
    }else if(edad >= 14 && edad < 18){   // 512 < 14 ? -> true
        //BLOQUE2
        printf("\nTienes %i anios, eres generación alpha:", edad);
    }else if(edad >=18 && edad < 50){   // 54 > 50 ? -> true
        //BLOQUE3
        printf("\nTienes %i anios, eres Baby Bommer:", edad);
    }else if(edad >=50 && edad <=120){   // 54 > 50 ? -> true
        //BLOQUE4
        printf("\nTienes %i anios, eres generación x:", edad);
    }
    else{
        //BLOQUE5
        printf("No es una edad válida");
    }
        printf("\nFIN DE PROGRAMA:");
}

