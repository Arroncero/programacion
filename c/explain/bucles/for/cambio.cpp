/*
 * =====================================================================================
 *
 *       Filename:  cambio.cpp
 *
 *    Description:
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int lado = 5;

    for (int fila=0; fila<lado;fila++){
	for(int col=0; col<lado;col++){
	    if(col < fila){
		printf("O");
	    }
	    else{
		printf("*");
	    }
	}
	printf ("\n");
    }

    return EXIT_SUCCESS;
}
