/*
 * =====================================================================================
 *
 *       Filename:  hanoi.cpp
 *
 *    Description:  Juego de las torres de hanoi
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "gameloop.h"
#include "interfaz.h"

#define INST_FILE "instrucciones.info"

int main(int argc, const char **argv){

    enum Opcion opcion;

    do{

        opcion = show_menu();

        switch(opcion) {
            case JUGAR:
                partida();
                break;
            case INSTRUCCIONES:
                show_file(INST_FILE);
                break;
            case SALIR:
                printf ("Gracias por jugar a las Torres de Hanoi.\n");
                break;
        }

        if (opcion != SALIR)
            wait_for_user();

    } while (opcion != SALIR);

    return EXIT_SUCCESS;
}
