/*
 * =====================================================================================
 *
 *       Filename:  funciones.cpp
 *
 *    Description:
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "funciones.h"

void push (int *data, int filas, int col, int ancho, int dato){
    data[filas*ancho + col] = dato;
}

void multiplica(struct TMatriz *matriz1, struct TMatriz *matriz2, struct TMatriz *resultado, int ancho1, int ancho2){

    int anchores = matriz2->col;

    resultado->data = (int *) malloc ((matriz1->filas)*(matriz2->col)*sizeof(int));

    for(int i=0; i<matriz1->filas; i++)
	for(int j=0; j<matriz2->col; j++)
	    for(int k=0; k<matriz2->filas; k++)
		(resultado->data)[i*anchores+j] += matriz1->data[i*ancho1 + k] * matriz2->data[k*ancho2 + j];
}

void init(struct TMatriz *matriz){
    bzero(matriz, sizeof(struct TMatriz));
}
