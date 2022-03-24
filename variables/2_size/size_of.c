#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
    printf("Tamaño de datos básicos\n");
    printf("=======================\n");
    printf("Tipo\tTamaño en bytes\n");
    printf("====\t===============\n");
    
    printf("char\t%ld\n",sizeof(char)); //¿De qué tamaño es un char?
    printf("string\t%ld\n",sizeof(char[10])); //¿De qué tamaño es un char de 50 espacios (strings)?
    printf("int\t%ld\n",sizeof(int)); //¿De qué tamaño es un entero?
    printf("float\t%ld\n",sizeof(float)); //¿De qué tamaño es un flotante?
    printf("double\t%ld\n",sizeof(double)); //¿De qué tamaño es un flotante double?
    printf("double\t%ld\n",sizeof(double)); //¿De qué tamaño es un flotante double?

    return 0;
}
