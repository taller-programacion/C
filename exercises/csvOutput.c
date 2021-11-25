#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct para almacenar lo ingresado por el usuario
struct datos{
    char nombre[60];
    int edad;
    char ciudad[20];
    int telefono;
}persona[10];

//Declaración de archivo
FILE *archivo;

//Función para remover el salto de línea final
void remueveSaltoLinea (char *cadena){
  char *saltoLinea;
  saltoLinea = strchr (cadena, '\n'); //Buscar un caracter en una cadena
  if (saltoLinea) 
    *saltoLinea = '\0';
}

//Variables
int numReg = 0;

//Función de captura de datos y escritura en archivo .csv
void capturaDatos(){
    for (int i=0; i<numReg; i++){ 
        /*Capturando los registros y almacenando en el struct*/
        printf("Dame el Nombre: ");
        //persona[0].nombre, 60, stdin 
        fgets(persona[i].nombre, 60 , stdin);
        fflush(stdin);
        //Remover el salto de línea final
        remueveSaltoLinea(persona[i].nombre);
        
        printf("Dame la Edad: ");
        scanf("%d", &persona[i].edad);
        getchar();

        printf("Dame la Ciudad de Nacimiento: ");

        fgets(persona[i].ciudad, 20 , stdin);
        fflush(stdin); //Limpiamos el buffer

        printf("Dame la Teléfono: ");
        scanf("%d", &persona[i].telefono);
        getchar();
        //Remover el salto de línea final
        remueveSaltoLinea(persona[i].ciudad);
        
        //Escribiendo los datos del struct en un archivo
        fprintf(archivo, "%s|%i|%s|%i\n", persona[i].nombre, persona[i].edad, persona[i].ciudad, persona[i].telefono);
    }
}


int main(){

    archivo = fopen("datosv2.csv", "a");
    
    if (archivo != NULL){
        fseek (archivo, 0, SEEK_END);
        /*
        void fseek(FILE * identificador, int posición, int modo)
        SEEK_SET // Posición respecto al inicio del archivo  (0)
        SEEK_CUR // Incremento relativo a la posición actual (1)
        SEEK_END // Posición respecto al final del archivo   (2)
        */
        int size = ftell(archivo);

        //Preguntando por registros al usuario
        printf("¿Cuántos registros necesitas?: ");
        scanf("%d", &numReg);
        getchar();

        if (size == 0) {
            fputs("Nombre| Edad| Ciudad| Teléfono\n", archivo);
            capturaDatos();
        }else{
            capturaDatos();
        }
        fclose(archivo);
    }
    return 0;
}