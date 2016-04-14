/*
 * =====================================================================================
 *
 *       Filename: yuyai.cpp
 *
 *    Description: Da la vuelta a cualquier número
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int numero=0,
	longitud=0,
	resultado=0,
	base=10,
	resto[100],
	exponente=0;

    do{
	__fpurge(stdin);
	printf ("Por favor, introduzca un número mayor que 0:\n");
	scanf ("%i", &numero);
    }while (numero == 0 || numero <= 0);

    for (int i=0; numero > 0; i++, longitud++){

	resto[i] = numero%base;
	numero /= base;
    }

    longitud--;

    exponente = longitud;

    for (int j=0; j <= longitud; j++, exponente--){

	resultado += resto[j] * pow(base, exponente);
    }

    printf ("Su número al reves es %i.\n", resultado);

    return EXIT_SUCCESS;
}
