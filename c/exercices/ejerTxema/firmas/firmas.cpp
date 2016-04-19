/*
 * =====================================================================================
 *
 *       Filename: firmas.cpp
 *
 *    Description: encuentra la proporción de cada letra en un archivo de texto
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char **argv){

    double firma['z'-'a'+1];
    FILE *pf = NULL;

    if(argc < 2){
	fprintf(stderr, "Uso: %s <fichero>\n", argv[0]);
	exit(EXIT_FAILURE);
    }

    pf = fopen(argv[1], "r+");

    if(!pf){
	fprintf(stderr, "Fichero: %s no encontrado\n", argv[1]);
	exit(EXIT_FAILURE);
    }

    fclose(pf);

    return EXIT_SUCCESS;
}
