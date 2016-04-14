/*
 * =====================================================================================
 *
 *       Filename:  hola.cpp
 *
 *    Description:  operadores a nivel de bit
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    /* unsigned declara que la variable
     * se guarda sin complemento a dos
     * sin signo */

    unsigned int a;

    printf ("Numero: ");
    scanf ("%i", &a);
    printf ("\n\n");

    /* el comando ~ significa "no"
     * Es un operador a nivel de bit
     * Hace el complemento a 1 del numero */

    printf ("%x - %i - %u -%x -%i\n", a, a, ~a, ~a, ~a);

    return EXIT_SUCCESS;
}
