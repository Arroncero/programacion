/*
 * =====================================================================================
 *
 *       Filename:  matrix.cpp
 *
 *    Description:  guarda una matriz en memoria dinámica
 * =====================================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

struct TMatriz{
    int *a;
    int filas;
    int col;
};

void set(int *matriz, int fila, int ancho, int col, int dato){

    matriz[fila*ancho + col] = dato;
}

int get(int *matriz, int fila, int ancho, int col){
    int dato;

    dato = matriz[fila*ancho + col];
    return dato;
}

void inicio(struct TMatriz *matriz){

    matriz->a= NULL;
    matriz->filas = 0;
    matriz->col = 0;
}

int main(int argc, const char **argv){

    int resultado=0;
    int ancho=0;
    int buffer=0;

    struct TMatriz matriz;

    inicio (&matriz);

    // Preguntar al usuario.

    do{
	__fpurge(stdin);
	printf ("Cuantas filas quiere que tenga su matriz?\n");
	scanf ("%i", &matriz.filas);
	printf ("Cuantas columnas quiere que tenga su matriz?\n");
	scanf ("%i", &matriz.col);
    }while(matriz.filas == 0 && matriz.col == 0);

    // reservar espacio para a

    matriz.a = (int *) realloc (matriz.a, ((matriz.filas)*(matriz.col)*sizeof(int)));

    ancho = matriz.col;

    for (int f=0; f<matriz.filas; f++)
	for (int c=0; c<matriz.col; c++){
	    printf("(%i, %i)", f+1, c+1);
	    scanf(" %i", &buffer);
	    set(matriz.a, f, ancho, c, buffer);
	}

    printf ("Ahora imprimiremos tu matriz\n");
    for (int f=0; f<matriz.filas; f++){
	for(int c=0; c<matriz.col; c++){
	    resultado = get(matriz.a, f, ancho, c);
	    printf ("%4i", resultado);
	}
	printf ("\n");
    }

    // Liberar espacio para a

    free(matriz.a);

    return EXIT_SUCCESS;
}
