/*
 * =====================================================================================
 *
 *       Filename: russe.cpp
 *
 *    Description: multiplica dos números enteros positivos.
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char **argv){

    int op1,
	op2,
	resultado=0;

    printf ("Introduce el primer operador "
	    "(Si quieres multiplicar por 0, "
	    "introdúcelo aquí):\n");
    scanf (" %i", &op1);
    printf ("Introduce el segundo operador "
	    "(No introducir 0 aquí):\n");
    scanf (" %i", &op2);

    do{
	if(op2 % 2 == 1)
	    resultado += op1;

	op1 *= 2;
	op2 /= 2;

	if (op2 == 1)
	    resultado += op1;

    }while(op2 != 1);

    printf ("El resultado de multiplicar es %i.\n", resultado);

    return EXIT_SUCCESS;
}

