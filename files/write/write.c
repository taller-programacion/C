#include <stdio.h>
#include <stdlib.h>

int main(){
   struct datos{
      char nombre[60];
      int edad;
      char ciudad[20];
   }persona[3];            // Array de struct con datos para 3 personas.

/*Files*/
/*"r" : abrir un archivo para lectura, el archivo debe existir.
* "w" : abrir un archivo para escritura, se crea si no existe o se sobreescribe si existe.
* "a" : abrir un archivo para escritura al final del contenido, si no existe se crea.
* "r+" : abrir un archivo para lectura y escritura, el archivo debe existir.
* "w+" : crear un archivo para lectura y escritura, se crea si no existe o se sobreescribe si existe.
* "r+b ó rb+" : Abre un archivo en modo binario para actualización (lectura y escritura).
* "rb" : Abre un archivo en modo binario para lectura.
*/

   //ESCRITURA DE ARCHIVO

   FILE *archivo;
   int i, numero=0;
    
// identificador = fopen("locacionArchivo", "ModoDeApertura");
   archivo = fopen("gente.txt", "a");  //ABRIR EL ARCHIVO
   if (archivo == NULL) // Si no existe
      printf("No se pudo abrir el archivo :(\n");
   else{
      for (i=0; i<2; i++){ //Pide datos de 2 personas y los guarda en el archivo.
         puts("Nombre:");
 	      fgets(persona[i].nombre, 60 , stdin); //Guardando en struct RAM
         //Escribir en archivos con fprintf
         fprintf(archivo, "%s", persona[i].nombre); //Impresión en archivo DD
         
         puts("Edad:");
         scanf("%d", &persona[i].edad);  //Guardando en struct
         getchar(); //Pausa

         //Escribir en archivos con fprintf
         fprintf(archivo, "%d", persona[i].edad);
         
         puts("Ciudad:");
 	      fgets(persona[i].ciudad, 20 , stdin);
         //Escribir en archivos con fputs
         fputs(persona[i].ciudad, archivo); // Escribir Archivo

      }
   }
   fclose(archivo); //Cerrar archivo

   // LECTURA DE ARCHIVO

     /* archivo = fopen("gente", "r");
      if (archivo == NULL)
         printf("No se pudo abrir el archivo.\n"); 
      else
      { */ 
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
         fclose(archivo);
     return 0;
     }
/*}*/
