/*
 * =====================================================================================
 *
 *       Filename:
 *
 *    Description:
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double add(double base,  double altura){

    double area;

    area = base * altura;

    return area;
}

int main (){

    double base,
	   altura,
	   resultado;

    printf ("Introduzca la base del rectangulo:\n");
    scanf ("%lf", &base);
    printf ("Introduzca la altura:\n");
    scanf ("%lf", &altura);

    resultado = add(base, altura);

    printf ("El area del rectangulo es %lf.\n", resultado);

    return EXIT_SUCCESS;
}

