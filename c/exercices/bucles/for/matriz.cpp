/*
 * =====================================================================================
 *
 *       Filename: matriz.cpp
 *
 *    Description: 
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int fibo[200] = {1,1};
    int longitud,
	termino;

    printf ("Hasta qué término quieres rellenar?\n");
    scanf ("%i", &longitud);

    for (termino= 2; termino<=longitud; termino++){

	fibo[termino] = fibo[termino - 1] + fibo[termino - 2];
    }

    printf ("El término número %i de la sucesion"
	    " de Fibonacci es %i.\n", longitud, fibo[longitud-1]);

    return EXIT_SUCCESS;
}

