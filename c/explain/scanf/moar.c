/*
 * =====================================================================================
 *
 *       Filename: moar.c
 *
 *    Description: Primer ejercicio gets
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    char name[0x20],

    printf("Dime tu nombre:\n");
    /* gest actua igual que un scanf pero solo lee cadenas de caracteres
     * por ello no hace falta especificar formato
     * lee espacios entre palabras, cosa que scanf no */
    gets(name);
    printf("Tu nombre es %s.\n", name);

    return EXIT_SUCCESS;
}

