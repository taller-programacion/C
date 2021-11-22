#include<stdio.h>
#include<stdlib.h>

//Decalaración de struct
       struct Estudiante{
              int num;
              char nombre[25];
              float promedio;
       };

       int main(){
              FILE *fp;  // Declaración de archivo
              
              char ch;
              struct Estudiante fca; //Implementacmos struct

              fp = fopen("../read/FCA.txt","w"); //Apertura del archivo
              //1.- Abrir el archivo
              //2.- Lectura / Escrituro
              //3.- Guardar
              //4.- Cerrar archivo

              if(fp == NULL){
                     printf("\nError.");
                     exit(0);
              }

              do{
                     printf("\nNum Cuenta : ");
                     scanf("%d",&fca.num);

		      //  fflush(stdin);
         	        puts("Nombre:");
                      scanf("%s",fca.nombre);

                      printf("Promedio : ");
                      scanf("%f",&fca.promedio);

		      //fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
		      //ptr − Apuntador al arreglo de elementos que se escribiran.
		      //size − Tamaño en bytes de cada elemento
		      //nmemb − Numero de elementos
		      //stream − Aputador al archivo donde se escribirá.
                      fwrite(&fca,sizeof(fca),1,fp);
            		 getchar();

                      printf("\nDeseas agrgar otro (s/n) : ");
		      scanf("%c", &ch);
              }while(ch=='s' || ch=='S');

              printf("\nEscribiendo archivo...");

              fclose(fp);  //Cierre de archivo
              return 0;
       }
