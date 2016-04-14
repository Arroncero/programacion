/*
 * =====================================================================================
 *
 *       Filename: practicascanf_2
 *
 *    Description: Ejercicio 2 de scanf (entrada desde teclado de una cadena de caracteres)
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    char nombre[20];
    char apellido1[20];
    char apellido2[20];

    printf ("Escriba su nombre:\n");

/* Al ser una array, al definir la variable en el scanf no se pone el &
 * & marca la dirección de memoria de la variable
 * Cuando definimos un array ya estamos haciando referencia a su dirección de memoria */

    scanf ("%s", nombre);
    printf ("Escriba su primer apellido:\n");
    scanf ("%s", apellido1);
    printf ("Escriba su segundo apellido:\n");
    scanf ("%s", apellido2);

    printf ("Su nombre completo es %s %s %s.\n", nombre, apellido1, apellido2);

    return EXIT_SUCCESS;
}

