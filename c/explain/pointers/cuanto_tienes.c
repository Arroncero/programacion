/*
 * =====================================================================================
 *
 *       Filename: cuanto_tienes.c
 *
 *    Description: continuación scanf
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int saldo;
    int mes, ano;

/* El asterisco es un puntero que marca una lista de 12 palabras
 * sin asterisco es una palabra de 12 letras */
  const  char *MES[12] = {
	"Enero",
	"Febrero",
	"Marzo",
	"Abril",
	"Mayo",
	"Junio",
	"Julio",
	"Agosto",
	"Septiembre",
	"Octubre",
	"Noviembre",
	"Diciembre",
    };

    printf("Cuanto dinero tienes?\n");
    printf("yo=<cantidad>\n");

    scanf(" yo= %i", &saldo);
    printf("Saldo: %i\n", saldo);

    printf ("Fecha de nacimiento (dd/mm/aa):\n");
    /* * es el caracter de supresion. Hace que leas el entero pero que no lo guarde */
    scanf(" %*i/%i/%i", &mes, &ano);

    printf("Naciste el %s de %i.\n", MES[mes-1], ano);

    return EXIT_SUCCESS;
}

