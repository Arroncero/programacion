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

    int numero;

    const char *list[] = {
	"bread",
	"toast",
	"bacon"
    };

    numero = sizeof(list)/sizeof(list[0]);

    printf ("El número de palabras de la lista es %i.\n", numero);

    for (int i=0; i<numero; i++)
	printf ("%s.\n", list[i]);

return EXIT_SUCCESS;
}

