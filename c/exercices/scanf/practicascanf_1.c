/*
 * =====================================================================================
 *
 *       Filename: practicascan_1.c
 *
 *    Description: Primer ejercicio scanf (lectura de un número desde teclado)
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero;

    printf ("Escriba un número:\n");
    scanf ("%i", &numero);

/* % indica el resto de la operación de dividir la variable entre 2.
 * Si el resto es == 0 el resultado es par, si no es impar */

    if (numero%2 == 0)
	printf ("El número %i es par\n", numero);
    else
	printf ("El número %i es impar\n", numero);

    return EXIT_SUCCESS;
}

