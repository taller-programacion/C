/* Lee cadenas de caracteres hasta n-1 caracteres o hasta que lea un cambio de línea '\n' o un final de archivo EOF.
	char *fgets(char *buffer, int tamaño, FILE *archivo);
 * */

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 	FILE *archivo;
 	
 	char caracteres[100];
 	
 	archivo = fopen("gente.txt","r");
 	
 	if (archivo == NULL)
 		exit(1);
 	else
        {
 	    printf("\nEl contenido del archivo de prueba es \n\n");
		fflush(archivo);
 	    while (feof(archivo) == 0){
			//fgets(salida, tamañoBuffer, entrada);	
 			fgets(caracteres,100, archivo);

			//fgets(persona[i].nombre, 60 , stdin);

 			printf("%s\n",caracteres);
 	    }
 			printf("\t%c",caracteres[0]);
			printf("\t%c",caracteres[1]);
			printf("\t%c",caracteres[2]);
			fflush(archivo);
            getchar();
        }
        fclose(archivo);
	return 0;
}
