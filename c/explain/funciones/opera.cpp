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

int opera(char operacion,
	int op1, int op2){

    int resultado=1;

    switch (operacion){

	case '+':
	    return op1 + op2;
	    break;
	case '-':
	    return op1 - op2;
	    break;
	case '*':
	    return op1 * op1;
	    break;
	case '/':
	    return op1 / op2;
	    break;
	case '^':
	    for (int i=0; i<op2; i++)
		resultado *= op1;
	    return resultado;
	    break;
	default:
	    return 0;
	    break;
    }
    return 0;
}

int main (){

    int resultado = 0;

    resultado = 2 + 3 * 5 - opera('^', 2, 3);

    printf("%i\n", resultado);

    return EXIT_SUCCESS;
}

