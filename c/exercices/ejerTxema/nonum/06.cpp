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

    int alto,
	ancho;

    printf ("Introduzca la altura:\n");
    scanf ("%i", &alto);
    printf ("Introduzca la anchura:\n");
    scanf ("%i", &ancho);

    for (int i=0; i<=ancho-1; i++ ){
	printf("*");
    }
    printf ("\n");

    for (int i=0; i<=alto-3; i++){
	printf ("*");
	for (int i=0; i<= ancho-3; i++)
	    printf (" ");
	printf ("*");
	printf ("\n");
    }

    for (int i=0; i<=ancho-1; i++){
	printf("*");
    }
    printf("\n");



    return EXIT_SUCCESS;
}

