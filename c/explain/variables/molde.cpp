/*
 * =====================================================================================
 *
 *       Filename: molde.cpp
 *
 *    Description: moldes de las variables
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int a;

    /* Poner entre parentesis el formato en el que quieres que opere
     * Aunque no este en el mismo formato.
     * Esto amolda el número antes de operar y lo transforma */
    a = (int) 3.1 + 5/2;

    /* El resultado impreso en pantalla es 5 aunque 3.1 tenga comas
     * Porque se amolda al formato de entero especificado */
    printf ("%i", a);

    return EXIT_SUCCESS;
}

