/*
 * =====================================================================================
 *
 *    Filename: fprintf.c
 *
 *    Description: explicacioin fscanf
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

/* fprintf escribe en una tubería/salida determinada */
/* FILE * hace referencia al stream por el que se conecta a un archivo extrerno */

    FILE *pf;

/* "w" es la orden de escritura. Para lectura seria "r" y para añadir seria "a" */

    pf = fopen("lyrics.txt", "w");

    fprintf(pf, "Ola caracola!\n");

    fclose(pf);

/* stdout es la salida estandar, la pantalla, asi que fprintf stdout es sinonimo de printf */
/* existen 3 tuberías: stdin (0), stdout (1) y stderr (2)*/
/* Si se quiere otra tuberia se le indica */

    return EXIT_SUCCESS;
}

