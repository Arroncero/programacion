/*
 * =====================================================================================
 *
 *       Filename: buffer.cpp
 *
 *    Description: 
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char **argv){

    char buffer[5];

    /* Si sobrepasas el tamañno del string
     * empieza a escribir dentro del propio código
     * Esto puede llevar a fallos de seguridad */

    printf("Say something:\n");
    gets (buffer);

    /* La funcion gets es insegura, por ello se usa fgets
     * Le especificas el largo máximo de lo que puede escribir y de donde ha de hacerlo
     * fgets(buffer, 4, stdin); */


    return EXIT_SUCCESS;
}

