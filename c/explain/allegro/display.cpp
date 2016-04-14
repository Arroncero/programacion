/*
 * =====================================================================================
 *
 *       Filename:  display.cpp
 *
 *    Description:  Primer ejercicio allegro
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>

int main(int argc, char **argv){

    /* Primero se crea una funcion display */
    ALLEGRO_DISPLAY *display = NULL;

    /* se crean mensajes de error por si acaso falla */
    if(!al_init()){
	fprintf(stderr, "failed to initialize allegro!\n");
	return 1;
    }

    display = al_create_display(640, 480);
    if(!display){
	fprintf(stderr, "failed to create display!\n");
	return 1;
    }

    /* se crea el mapa de color con una resolucion determinada */
    al_clear_to_color(al_map_rgb(0,0,0));

    /* refresca la pagina */
    al_flip_display();

    /* Espera 10 segundos */
    al_rest(10.0);

    /* Destruye la pantalla */
    al_destroy_display(display);

    return EXIT_SUCCESS;
}
