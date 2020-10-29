#include <stdio.h>

int main(){
float lado_1, lado_2, lado_3;
float perimetro;

printf("Dame el valor del lado 1: ");
scanf("%f", &lado_1);

printf("Dame el valor del lado 2: ");
scanf("%f", &lado_2);

printf("Dame el valor del lado 3: ");
scanf("%f", &lado_3);

perimetro = lado_1 + lado_2 + lado_3;

printf("\tEl perimetro del triangulo es: %0.2f\n", perimetro);

return 0;

}