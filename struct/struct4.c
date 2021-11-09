#include <stdio.h>
#include <stdlib.h>

int main(){

   struct datos{
      char nombre[60];
      int edad;
      char ciudad[20];
   }persona[20];           // Array de struct con datos para 3 personas.
   
   int reg = 0;

   puts("¿Cuántos registros deseas?:"); //puts funciona igual que printf
   scanf("%d", &reg);
   getchar();  //Pausa
 
   int i, numero=0;
   for (i=0; i<reg; i++){ //Pide datos de 3 personas y los guarda.
         puts("\n-----------------------------");
         puts("Nombre Completo:");
 	      fflush(stdin); //Liberar buffer
       //fgets(destino, tamaño, entrada);   
 	      fgets(persona[i].nombre, 60 , stdin); //persona[0].nombre = stdin 
         puts("Edad:"); //puts != printf  "Edad\n"
         scanf("%d", &persona[i].edad);
         getchar(); //
         puts("Ciudad:");
 	      fflush(stdin);
 	      fgets(persona[i].ciudad, 20 , stdin);
         puts("-----------------------------\n");
      }
   for (i=0; i<reg; i++) 
      {
        printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s",i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);   
        getchar();    //Pausa
   }
         puts("\n-----Búsqueda de Registros------");
         puts("Dame el número de registro:");
         scanf("%d", &i);
         printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s",i-1, persona[i-1].nombre, persona[i-1].edad, persona[i-1].ciudad);   

     return 0;
}
