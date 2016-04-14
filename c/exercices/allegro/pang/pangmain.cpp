/*
 * =====================================================================================
 *
 *       Filename: pangmain.cpp
 *
 *    Description: archivo main del juego Pang en allegro
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "physics.h"

#define FPS 60.

int main (){

    const int SCREEN_W = 800,
	  SCREEN_H = 400;

    enum KEYS {
	KEY_JUMP, KEY_DOWN, KEY_LEFT, KEY_RIGHT, KEY_SHOT
    };

    struct Movil;
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    ALLEGRO_BITMAP *bitmap = NULL;
    ALLEGRO_TIMER *timer = NULL;
    bool finish = false;
    bool redraw = false;
    bool key[5] = {false, false, false, false, false};


    if(!al_init()){
	al_show_native_message_box(display, "Error", "Error", "Failed to Initialize allegro!",
		NULL, ALLEGRO_MESSAGEBOX_ERROR);
	return 0;
    };
    if(al_init_image_addon()){
	al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_image_addon",
		NULL, ALLEGRO_MESSAGEBOX_ERROR);
	return 0;
    };
    if(al_install_keyboard()){
	al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_install_keyboard",
		NULL, ALLEGRO_MESSAGEBOX_ERROR);
	return 0;
    };

    display = al_create_display(SCREEN_W, SCREEN_H);
    if(!display){
	al_show_native_message_box(display, "Error", "Error", "Failed to initialize display",
		NULL, ALLEGRO_MESSAGEBOX_ERROR);
	return 0;
    }

    event_queue = al_create_event_queue();
    if(!event_queue){
	al_show_native_message_box(display, "Error", "Error", "Failed to initialize event_queue",
		NULL, ALLEGRO_MESSAGEBOX_ERROR);
	return 0;
    }

    timer = al_create_timer(1./FPS);
    if(!timer){
	al_show_native_message_box(display, "Error", "Error", "Failed to initialize timer",
		NULL, ALLEGRO_MESSAGEBOX_ERROR);
	return 0;
    }
    bitmap = al_load_bitmap("images/nave.png");
    if(!bitmap){
	al_show_native_message_box(display, "Error", "Error", "Failed to initialize bitmap",
		NULL, ALLEGRO_MESSAGEBOX_ERROR);
	return 0;
    }

    al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_timer_event_source(timer));
    al_register_event_source(event_queue, al_get_keyboard_event_source());

    al_start_timer(timer);

    while(!finish){

	ALLEGRO_EVENT ev;
	al_wait_for_event(event_queue, &ev);

	if(ev.type == ALLEGRO_EVENT_TIMER)
	    redraw = true;
	else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
	    break;
	else if(ev.type == ALLEGRO_EVENT_KEY_DOWN){
	    switch(ev.keyboard.keycode){
		case ALLEGRO_KEY_UP:
		    key[KEY_JUMP] = true;
		    break;
		case ALLEGRO_KEY_DOWN:
		    key[KEY_DOWN] = true;
		    break;
		case ALLEGRO_KEY_LEFT:
		    key[KEY_LEFT] = true;
		    break;
		case ALLEGRO_KEY_RIGHT:
		    key[KEY_RIGHT] = true;
		    break;
		case ALLEGRO_KEY_SPACE:
		    key[KEY_JUMP] = true;
		    break;
	    }
	}
	else if(ev.type == ALLEGRO_EVENT_KEY_UP){
	    switch(ev.keyboard.keycode){
		case ALLEGRO_KEY_UP:
		    key[KEY_JUMP] = false;
		    break;
		case ALLEGRO_EVENT_KEY_DOWN:
		    key[KEY_DOWN] = false;
		    break;
		case ALLEGRO_KEY_LEFT:
		    key[KEY_LEFT] = false;
		    break;
		case ALLEGRO_KEY_RIGHT:
		    key[KEY_RIGHT] = false;
		    break;
		case ALLEGRO_KEY_SPACE:
		    key[KEY_JUMP] = false;
		    break;
	    }
	}
    }

    al_destroy_bitmap(bitmap);
    al_destroy_timer(timer);
    al_destroy_event_queue(event_queue);
    al_destroy_display(display);

    return EXIT_SUCCESS;
}

