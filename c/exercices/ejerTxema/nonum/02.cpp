/*
 * =====================================================================================
 *
 *       Filename: 02.cpp
 *
 *    Description:
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    double media1,
	   media2,
	   media3,
	   media4,
	   media5,
	   media6,
	   media7,
	   media8,
	   media9,
	   media10,
	   resultadomedia;

    printf ("Incluya los 10 números"
	    " de los que se quiere calcular la media:\n");
    scanf ("%lf", &media1);
    scanf ("%lf", &media2);
    scanf ("%lf", &media3);
    scanf ("%lf", &media4);
    scanf ("%lf", &media5);
    scanf ("%lf", &media6);
    scanf ("%lf", &media7);
    scanf ("%lf", &media8);
    scanf ("%lf", &media9);
    scanf ("%lf", &media10);

    resultadomedia = (media1 + media2 + media3 +
	    media4 + media5 + media6 + media7 +
	    media8 + media9 + media10)/10;

    printf ("El resultado de la media es %lf.\n", resultadomedia);

    return EXIT_SUCCESS;
}

