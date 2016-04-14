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

    int altura,
	fila,
	columna;

    printf ("Introduzca la altura:\n");
    scanf ("%i", &altura);

    for(fila=0; fila<altura; fila++){
	for(columna=0; columna<fila+1; columna++){
	printf ("*");
    }
    printf ("\n");
}
return EXIT_SUCCESS;
}

