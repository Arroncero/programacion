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

    double nuevanota=0,
	   resultado=0,
	   base=0,
	   media;

    while (nuevanota >= 0){

	printf ("Introduzca nota:\n");
	scanf ("%lf", &nuevanota);
	resultado += nuevanota;
	base++;

	if(nuevanota < 0){
	    resultado -= nuevanota;
	    base--;
	}
    }

    media = resultado / base;

    printf ("La media de las notas insertadas es %lf.\n", media);

    return EXIT_SUCCESS;
}

