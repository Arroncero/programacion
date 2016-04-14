/*
 * =====================================================================================
 *
 *       Filename:  funciones.cpp
 *
 *    Description:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void init (struct Torre *torre, int size){

    torre->pisos = (int *) malloc( size * sizeof(int) );
    torre->cima = 0;

}

void llenar(struct Torre *torre, int size){

    torre->cima = size;
    for (int i=0; i<size; i++)
	torre->pisos[i] = size - i;
}

int pop (struct Torre *torre){
    int dato=0;
    if(torre->cima > 0){
	dato = torre->pisos[torre->cima];
	torre->cima--;
    }
    else
	printf ("No quedan discos en esta torre!\n");

    return dato;
}

void push (struct Torre *torre, int dato, int tamanio){
    if(torre->cima < tamanio){
	torre->pisos[torre->cima] = dato;
	torre->cima++;
    }
    else
	printf ("No caben más discos en esta torre!\n");
}
