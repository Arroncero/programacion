/*
 * =====================================================================================
 *
 *       Filename: read.cpp
 *
 *    Description: read from a file
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *pf;
    char frase[40];

    pf = fopen ("lyrics.txt", "r");

    /* Para leer varias palabras de un archivo
     * Se leen todos los espacios y no se asignan los saltos de linea */

    fscanf (pf, "%[^\n]%*[\n]", frase);

    printf ("%s.\n", frase);

    fclose(pf);

    return EXIT_SUCCESS;
}

