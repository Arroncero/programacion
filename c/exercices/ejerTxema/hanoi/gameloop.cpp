/*
 * =====================================================================================
 *
 *       Filename:  gameloop.cpp
 *
 *    Description:
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "funciones.h"
#include "gameloop.h"

void partida (){

    struct Torre torre[NUMERO_TORRES];
    int tamanio = 0,
	origen,
	destino,
	dato;

    printf ("Elija el número de pisos que tendrán las torres"
	    " (a mayor pisos, mayor reto!)\n");
    printf ("Tamaño: ");
    scanf ("%i", &tamanio);

    for(int i=0; i<NUMERO_TORRES; i++)
	init(&torre[i], tamanio);

    llenar(&torre[0], tamanio);

    while((torre[1].cima || torre[2].cima) != tamanio){
	do{
	    __fpurge(stdin);
	    printf ("Elija la torre de la que quiere sacar el disco.\n"
		    "Torre de origen: ");
	    scanf ("%i", &origen);
	}while (origen<1 || origen > NUMERO_TORRES);
	origen--;
	dato = pop(&torre[origen]);
	do{
	    __fpurge(stdin);
	    printf ("A que torre quiere mover el disco.\n"
		    "Torre de destino: ");
	    scanf ("%i", &destino);
	}while (destino < 1 || destino > NUMERO_TORRES);
	destino--;
	push(&torre[destino], dato, tamanio);
    }
}
