/*
 * =====================================================================================
 *
 *       Filename: conversor.c
 *
 *    Description: Pasa numero decimal a cualquier otra base mayor que 1 y menor o igual que 10
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main (){


    int numeroIni,
	numeroOP,
	opcion,
	base,
	resto[100],
	longitud = 0;

    printf ("Inserte el número en base 10 que quieres convertir\n");
    scanf ("%d", &numeroOP);

    do{
	do{
	    __fpurge (stdin);
	    printf ("Elige si lo quieres pasar a una base mayor que 1"
		    " o menor o igual que 10, o bien pasarlo a hexadecimal:\n");
	    printf ("Opción 1: Base menor que 10.\n");
	    printf ("Opción 2: Hexadecimal.\n");
	    scanf ("%i", &opcion);
	}while (opcion == 0 || opcion <= 0);

	numeroIni = numeroOP;

	if (opcion == 1){

	    do{
		do{
		    __fpurge (stdin);
		    printf ("Introduzca la base a la que lo quiere pasar:\n");
		    scanf("%i", &base);
		}while (base == 0|| base <= 0);
		if (base > 1 && base <= 10){
		    for (int i=0; numeroOP > 0; i++, longitud++){
			/* Aumentan los valores de i y de longitud
			 * i es solo el contador, local del bucle
			 * la variable que se traslada es longitud.
			 * Ambas actúan igual dentro del bucle así que son equivalentes */

			resto[i] = numeroOP%base;
			numeroOP = numeroOP/base;
			/* Guardamos en una variable resto el resto como resultado
			 * Reescribimos el valor del NúmeroOperativo con el resultado de la operacion
			 * Así se usa en el siguiente bucle con el resultado anterior */
		    }
		    printf ("El número %i en base %i es: ", numeroIni, base);
		    for (int j=longitud-1;j>=0;j--){
			/* Este bucle le da la vuelta al anterior.
			 * Empieza a contar los restos guardados de atras a delante*/
			printf ("%i", resto[j]);
		    }
		    printf ("\n\n");
		}
		else{
		    printf ("Error, la base es incorrecta.\n");
		}
	    }while (base <= 1 || base >= 10 );
	}

	else if (opcion == 2){

	    printf ("El número %i es %x en hexadecimal.\n", numeroIni, numeroIni);
	}

	else{
	    printf ("Opción no válida.\n");
	}
    }while (opcion != 1 && opcion != 2);

		return EXIT_SUCCESS;
}
