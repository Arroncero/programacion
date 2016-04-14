/*
 * =====================================================================================
 *
 *       Filename: myreadline.cpp
 *
 *    Description: Use of readline
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main (){

    char *linea;

    /* readline te permite leer lineas desde la consola*/

    system("toilet -f pagga -F border --gay 'Remote Computer'");
    printf("Hack me if you can.\n\n\n");

    linea = readline("login: ");
    printf ("%s isn't a valid password.\n", linea);

    free(linea);

    return EXIT_SUCCESS;
}
