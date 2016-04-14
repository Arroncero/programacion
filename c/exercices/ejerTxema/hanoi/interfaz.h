#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

enum Opcion { JUGAR=1, INSTRUCCIONES, SALIR };

extern enum Opcion show_menu();
extern void wait_for_user();
extern void show_file(const char *fichero);

#endif
