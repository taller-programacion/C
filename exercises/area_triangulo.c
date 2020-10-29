#include <stdio.h>
#include <math.h>
/*
 * Área de un tríangulo dados 3 lados
 */

int main(){
    float l1, l2, l3, sp; //Declaración de variables
    double area;
    puts("Área de un triangulo.");
    printf("Ingresa la longitud del primer lado: ");
    scanf("%f", &l1);
    printf("Ingresa la longitud del segundo lado: ");
    scanf("%f", &l2);
    printf("Ingresa la longitud del tercer lado: ");
    scanf("%f", &l3);

    sp = (l1 + l2 + l3) / 2;//Obtener Semi perímetro
    area = sqrt(sp * (sp - l1) * (sp - l2) * (sp - l3));//formula de Heron
    printf("\tEl semi perímetro del triángulo es: %.6f\n", sp);
    printf("\tEl area del triángulo es: %.6f\n", area);
    return 0;
}