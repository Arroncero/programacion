#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int lado,
	opcion,
	area,
	perimetro,
	altura;

    printf("Introduzca valor del lado: ");
    scanf ("%d", &lado);

    printf ("Indroduce la operación que quieres hacer:\n"
	    "Opción 1: perímetro.\n"
	    "Opción 2: área.\n"
	    "Opción 3: altura.\n");
    scanf ("%i", &opcion);

    switch (opcion){

	case 1:
	    perimetro = 3 * lado;
	    printf ("El perímetro es %i.\n", perimetro);
	    break;

	case 2:
	    area = sqrt(5)/4 * lado * lado;
	    printf ("El área es %i.\n", area);
	    break;

	case 3:
	    altura = sqrt(5)/2 * lado;
	    printf ("La altura es %i.\n", altura);
	    break;
    }
    return (0);
}

