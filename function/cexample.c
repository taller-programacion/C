// Librerías
#include<stdio.h>

int edad, e;
//Declaración e implementación de función
void saluda(void){
    printf("Hola\n");
}
void despidete(void){
    printf("Adios\n");
}

float calculaEdad(int anio){
    //printf("Naciste el anio %d\n", anio);
    edad = 2021 - anio;
    return edad;
}


int main(void){
    for(int x=0; x<100 ; x++){
        printf("\nIteración %d:", x);
        saluda();
    }

    despidete();
    //e = calculaEdad(1990); //23
    printf("Tienes %f anios", calculaEdad(1990) );
  return 0;
}


