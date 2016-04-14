/*
 * =====================================================================================
 *
 *       Filename: while.cpp
 *
 *    Description:
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int opcion, numeroAleatorio, veces;
    char nombre[20];

    do{
	__fpurge(stdin);
	printf("Menu:\n"
		"Opción 1: Dame un número aleatorio SIN LIMITE! WOAH!.\n"
		"Opción 2: Escribe mi nombre veinticatorce veces.\n");
	printf ("Elige una opción:\n");
	scanf ("%i", &opcion);
    }while (opcion !=1 && opcion !=2);

    if(opcion == 1){

	srand(time(NULL));
	numeroAleatorio = rand();

	printf ("Tu numero aleatorio es %i.\n", numeroAleatorio);
    }

    else{
	printf ("Veinticatorce no existe, gilipollas. "
		"Escribeme el numero de veces que quieres que te diga"
		" tu nombre.\n");
	do{
	    __fpurge(stdin);
	    printf ("Numero de veces:\n");
	    scanf ("%i", &veces);
	}while (veces == 0);
	printf ("Escribeme tu nombre(no compuesto, tu no eres persona):\n");
	scanf ("%s", nombre);

	for (int i=0; i<=veces; i++){

	    printf ("%s.\n", nombre);
	}
    }

    return EXIT_SUCCESS;
}

