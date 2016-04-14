/*
 * =====================================================================================
 *
 *       Filename:  multmatrx.cpp
 *
 *    Description:  multiplica dos matrices con tamaño variable
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <strings.h>
#include "funciones.h"

int main (int argc, const char **argv){

    struct TMatriz matriz1;
    struct TMatriz matriz2;
    struct TMatriz resultado;
    int dato;
    int ancho1;
    int ancho2;

    init(&matriz1);
    init(&matriz2);
    init(&resultado);

    printf("\nEste programa multiplica dos matrices\n");
    do{
	printf("\nPara multiplicar dos matrices necesitamos que"
		" las columnas de la primera matriz sean igual"
		" a las filas de la segunda\n");

	do{
	    printf("\n¿Cuántas filas quieres que tenga tu primera matriz?\n");
	    printf("Filas = ");
	    scanf("%i", &matriz1.filas);

	    printf("\n¿Cuántas columnas quieres que tenga tu primera matriz?\n");
	    printf("Columnas = ");
	    scanf("%i", &matriz1.col);
	}while(matriz1.filas == 0 || matriz1.col == 0);

	ancho1 = matriz1.col;

	matriz1.data = (int *) malloc ((matriz1.filas)*(matriz1.col)*sizeof(int));

	do{
	    printf("\n¿Cuántas filas quieres que tenga tu segunda matriz?\n");
	    printf("Filas = ");
	    scanf("%i", &matriz2.filas);

	    printf ("\n¿Cuántas columnas quieres que tenga tu segunda matriz?\n");
	    printf ("Columnas = ");
	    scanf("%i", &matriz2.col);
	}while (matriz2.filas == 0 || matriz2.col == 0);

	ancho2 = matriz2.col;

	matriz2.data = (int *) malloc ((matriz2.filas)*(matriz2.col)*sizeof(int));

	if (matriz1.col != matriz2.filas){
	    free(matriz1.data);
	    free(matriz2.data);
	}
    }while(matriz1.col != matriz2.filas);

    printf ("\nAhora daremos valores a la primera matriz");

    for(int f=0; f <matriz1.filas; f++)
	for(int c=0; c<matriz1.col; c++){
	    printf("\n(Fila %i, Columna %i) = ", f + 1, c + 1);
	    scanf("%i", &dato);
	    push(matriz1.data, f, c, ancho1, dato);
	}
    printf("\nAhora daremos valores a la segunda matriz");

    for(int f=0; f<matriz2.filas; f++)
	for(int c=0; c<matriz2.col; c++){
	    printf("\n(Fila %i, Columna %i) = ", f + 1, c + 1);
	    scanf("%i", &dato);
	    push(matriz2.data, f, c, ancho2, dato);
	}
    multiplica(&matriz1, &matriz2, &resultado, ancho1, ancho2);

    for(int i=0; i<matriz1.filas; i++){
	for(int j=0; j<matriz2.col; j++)
	    printf ("%4i", resultado.data[i*ancho1 + j]);
	printf("\n");
    }
    free(matriz1.data);
    free(matriz2.data);
    free(resultado.data);

    return EXIT_SUCCESS;
}
