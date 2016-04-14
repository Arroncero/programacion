/*
 * =====================================================================================
 *
 *       Filename:
 *
 *    Description:
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int variable=0;
    int suma=0;
    FILE *f;

    f = fopen ("Tabla.txt", "r");

    while (fscanf (f, "%i", &variable) == 1)

    suma = suma + variable;

    fclose(f);

    printf ("El la suma es %i\n", suma);

    return EXIT_SUCCESS;
}

