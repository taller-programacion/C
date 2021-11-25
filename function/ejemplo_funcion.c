#include <stdio.h>  //Cabcera
//valorRetorno identificador(tipoDato parametro, tipoDato parametro2...);
//int suma(int entero1, int entero2); //Declaración de función

int resultado;

int sumaTres(int entero1, int entero2, int entero3){ //Implementación de función  int suma(entero = 200, entero2 =15)
    int resultado = 0;  //Variable local
    resultado = entero1 + entero2 + entero3; // resultado = 200 + 15 -> 215
    return resultado;  // resultado 215;
}

int sumaDos(int entero1, int entero2){ //Implementación de función  int suma(entero = 200, entero2 =15)
    int resultado = 0;  //Variable local
    resultado = entero1 + entero2; // resultado = 200 + 15 -> 215
    return resultado;  // resultado 215;
}

int sumaCuatro(int entero1, int entero2, int entero3, int entero4){ //Implementación de función  int suma(entero = 200, entero2 =15)
    int resultado = 0;  //Variable local
    resultado = entero1 + entero2 + entero3 + entero4; // resultado = 200 + 15 -> 215
    printf("El resultado de la cuarta suma DENTRO DE LA FUNCIÓN es:  %d\n", resultado); //2do.
    return resultado;  // resultado 30;
}
void main() {
    
    //resultado = (sumaDos(1,500) + 3)/5;

    //printf("El resultado de la primera suma es:  %d\n", sumaTres(200,15, 10));
    //printf("El resultado de la segunda suma es:  %d\n", resultado); 
    //printf("El resultado de la tercera suma es:  %d\n", sumaDos(1000,1500));
    sumaCuatro(10,500,1,125);  // 1ra
    printf("El resultado de la cuarta suma FUERA DE LA FUNCIÓN es:  %d\n", sumaCuatro(10,15,1,4));
    //printf("Valor de resultado %d", resultado);
    return;
}