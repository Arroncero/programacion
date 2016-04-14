/*
 * =====================================================================================
 *
 *       Filename: colors.cpp
 *
 *    Description:
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    char *MES[10]={

	"blanco",
	"amarillo",
	"rojo",
	"morado",
	"azul",
	"verde",
	"negro",

    };

    int opcion;

    printf ("Introduce el color que quieres:\n"
	    "Opción 1: blanco.\n"
	    "Opción 2: amarillo.\n"
	    "Opción 3: rojo.\n"
	    "Opción 4: morado.\n"
	    "Opción 5: azul.\n"
	    "Opción 6: verde.\n"
	    "Opción 7: negro.\n\n\n");
    printf ("Opción: ");
    scanf ("%i", &opcion);

    if (opcion==1)
	printf ("Tu color es el %s.\n", MES[0]);
    if (opcion==2)
	printf ("Tu color es el %s.\n", MES[1]);
    if (opcion==3)
	printf ("Tu color es el %s.\n", MES[2]);
    if (opcion==4)
	printf ("Tu color es el %s.\n", MES[3]);
    if (opcion==5)
	printf ("Tu color es el %s.\n", MES[4]);
    if (opcion==6)
	printf ("Tu color es el %s.\n", MES[5]);
    if (opcion==7)
	printf ("Tu color es el %s.\n", MES[6]);

    return EXIT_SUCCESS;
}

