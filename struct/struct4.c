#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   struct datos
   {
      char nombre[60];
      int edad;
      char ciudad[20];
   }persona[20];            // Array de struct con datos para 3 personas.
 
   int i, numero=0;
   for (i=0; i<2; i++) //Pide datos de 3 personas y los guarda en el fichero.
      {
         puts("Nombre:");
 	 fflush(stdin);
 	 fgets(persona[i].nombre, 60 , stdin);
         puts("Edad:");
         scanf("%d", &persona[i].edad);
         getchar();
         puts("Ciudad:");
 	 fflush(stdin);
 	 fgets(persona[i].ciudad, 20 , stdin);
      }
   for (i=0; i<2; i++) 
      {
        printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s",i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);   
        getchar();   
   }
     return 0;
}
