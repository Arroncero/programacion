/*
 * =====================================================================================
 *
 *       Filename:  andiputoamo.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  10/06/16 23:18:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10

void inicializar (int cuadricula[N][N]){

    for (int fila=0; fila<N; fila++){
	cuadricula[fila][0]=1;
	for (int col=1; col<N; col++)
	    cuadricula[fila][col]=0;
    }
}

void calcular (int cuadricula[N][N]){

    for (int fila=1; fila<N; fila++){
	for(int columna=1; columna<fila+1; columna++){
	    cuadricula[fila][columna]=cuadricula[fila-1][columna]
		+cuadricula[fila-1][columna-1];
	}
    }
}

void imprimir (int cuadricula[N][N]){

    for(int fila=0; fila<N; fila++){
	printf ("\n");
	for(int columna=0; columna<fila+1; columna++)
	    printf(" %3i", cuadricula[fila][columna]);
    }
    printf ("\n");
}

int main (){

    int cuadricula[N][N];

    inicializar(cuadricula);
    calcular(cuadricula);
    imprimir(cuadricula);

    return EXIT_SUCCESS;
}
