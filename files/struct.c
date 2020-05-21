#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct datos
   {
      char nombre[60];
      int edad;
      char ciudad[20];
   }persona[2];            // Array de struct con datos para 2 personas.

/*Files*/
/*"r" : abrir un archivo para lectura, el fichero debe existir.
* "w" : abrir un archivo para escritura, se crea si no existe o se sobreescribe si existe.
* "a" : abrir un archivo para escritura al final del contenido, si no existe se crea.
* "r+" : abrir un archivo para lectura y escritura, el fichero debe existir.
* "w+" : crear un archivo para lectura y escritura, se crea si no existe o se sobreescribe si existe.
* "r+b ó rb+" : Abre un archivo en modo binario para actualización (lectura y escritura).
* "rb" : Abre un archivo en modo binario para lectura.
*/
 
   FILE *fichero;
   int i, numero=0;
 
   fichero = fopen("gente.txt", "a");
   if (fichero == NULL)
      printf("No se pudo abrir el archivo :(\n");
   else
   {
      for (i=0; i<2; i++) //Pide datos de 2 personas y los guarda en el fichero.
      {
         puts("Nombre:");
 	 fgets(persona[i].nombre, 60 , stdin);
         fprintf(fichero, "%s", persona[i].nombre);
         puts("Edad:");
         scanf("%d", &persona[i].edad);
         getchar();
         fprintf(fichero, "%d", persona[i].edad);
         puts("Ciudad:");
 	 fgets(persona[i].ciudad, 20 , stdin);
         fputs(persona[i].ciudad, fichero);
      }
   }
   fclose(fichero);
      fichero = fopen("gente.txt", "r");
      if (fichero == NULL)
         printf("No se pudo abrir el archivo.\n"); 
      else
      {  
         do   
         {
            puts("Escriba el número de registro que desea a leer[1-2]:\n" 
                 "(Para salir presione 0).");
            scanf("%d", &numero);
            for (i=0; i<numero; i++) 
            {     
               if (i == (numero-1))
               {
                  printf("Registro:%d\n\tNombre:%s\n\tEdad:%d\n\tCiudad:%s\n", 
                     numero, persona[i].nombre, persona[i].edad, persona[i].ciudad);   
                  getchar();   
               }
            }
         }
while(numero!=0);                                                  
         fclose(fichero);
     }
     return 0;
}
