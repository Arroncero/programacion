/*
 * =====================================================================================
 *
 *       Filename:  helloworld.cpp
 *
 *    Description:  Ejercicio introduccion ncurses, sistema de ventanas
 *
 * =====================================================================================
 */

#include <ncurses.h>
#include <stdlib.h>

int main(){

    char cadena[128];
    initscr();

    if (has_colors()){
	start_color();

	init_pair(1,COLOR_RED, COLOR_YELLOW);
	attron(COLOR_PAIR(1));
	mvprintw(10,2,"Dime tu nombre:");
	attron(COLOR_PAIR(1));
	nocho();
	scanw("%s", cadena);
	echo();
	printw("Te llamas: %s\n", cadena);
    }

	refresh();
	getch();
	endwin();

	return EXIT_SUCCESS;
    }
