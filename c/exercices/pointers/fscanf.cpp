/*
 * =====================================================================================
 *
 *       Filename:  fscanf.cpp
 *
 *    Description:  Ejercicio de fscanf
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    char nombre[20];

/* Se dice que se va a trabajar con un archivo externo */

    FILE *f;

/* Se abre el archivo donde se escribirá la variable en modo escritura */

    f = fopen("olakase", "w");

    printf ("Escribe tu nombre:\n");
    scanf ("%s", nombre);

/* Escribe la variable en el archivo */

    fprintf (f, "%s", nombre);

/* Cierras el archivo con la variable guardada */

    fclose(f);

/* Se abre el archivo en modo lectura */

    f = fopen("olakase", "r");

/* Se lee la variable desde el archivo */

    fscanf (f, "%s", nombre);

    printf ("Tu nombre es %s.\n", nombre);

return EXIT_SUCCESS;

}
