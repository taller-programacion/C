#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Tamanio de nombre + 1. */

#define MAX_NAME_SZ 256

int main() {

    char *name = malloc(MAX_NAME_SZ);
    if (name == NULL) {
        printf("No memory\n");
        return 1;
    }

    /* Ask user for name. */

    printf("Nombre completo:  ");

    /* Get the name, with size limit. */

    fgets(name, MAX_NAME_SZ, stdin);

    /* Remove trailing newline, if there. */

    if ((strlen(name) > 0) && (name[strlen (name) - 1] == '\n'))
        name[strlen (name) - 1] = '\0';

    /* Say hello. */

    printf("Hola %s.\n", name);

    /* Free memory and exit. */

    free (name);
    return 0;
}
