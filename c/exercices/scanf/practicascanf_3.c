/*
 * =====================================================================================
 *
 *       Filename: practicascanf_3
 *
 *    Description: Ejercicio 3 de scanf (lectura de letras desde teclado)
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    char letra1, letra2, letra3, letra4;

    printf ("Escriba \"hola\":\n");

    /* Aunque sean letras no son una array
     * Se sigue poniendo & para indicar la dirección de memoria */

    scanf ("%c",&letra1);
    scanf ("%c",&letra2);
    scanf ("%c",&letra3);
    scanf ("%c",&letra4);

    printf ("Enhorabuena, sabe escribir %c%c%c%c.\n", letra1, letra2, letra3, letra4);

    return EXIT_SUCCESS;
}

