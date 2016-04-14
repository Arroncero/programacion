/*
 * =====================================================================================
 *
 *       Filename: mario.cpp
 *
 *    Description: Busca en las cabeceras de los archivos bmp las características de estos
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#pragma pack (1)

struct BMP {
    char magic_bytes[2];
    unsigned file_size;
    unsigned res1;
    unsigned image_init;
    unsigned header_size;
    unsigned width;
    unsigned height;
    unsigned short bitplanes;
    unsigned short point_size;
    unsigned compression;
    unsigned image_size;
    unsigned horz_res;
    unsigned vert_res;
    unsigned palette_size;
    unsigned important_colours;
};

int show (struct BMP cabecera){

    if(cabecera.magic_bytes[0] != 'B' || cabecera.magic_bytes[1] != 'M'){
	fprintf(stderr, "Error. This is not a BitMap\n");
	return EXIT_FAILURE;
    }
    else{
	printf ("Valid Bitmap\n");
	printf ("file size: %u\n", cabecera.file_size);
	printf ("res1: %u\n", cabecera.res1);
	printf ("image init: %u\n", cabecera.image_init);
	printf ("header size: %u\n", cabecera.header_size);
	printf ("width: %u\n", cabecera.width);
	printf ("height: %u\n", cabecera.height);
	printf ("bitplanes: %u\n", cabecera.bitplanes);
	printf ("point size: %u\n", cabecera.point_size);
	printf ("compression: %s", cabecera.compression ? "Si" : "No");
	printf ("image size: %u\n", cabecera.image_init);
	printf ("horz res: %u\n", cabecera.horz_res);
	printf ("vert res: %u\n", cabecera.vert_res);
	printf ("palette size: %u\n", cabecera.palette_size);
	printf ("important colours: %u\n", cabecera.important_colours);
    }
    return EXIT_SUCCESS;
}

int main (int argc, const char **argv){

    FILE *pf = NULL;
    struct BMP cabecera;

    if(argc < 2){
	fprintf(stderr, "Usage: %s <bmp file>\n", argv[0]);
	return EXIT_FAILURE;
    }

    pf = fopen(argv[1], "r+");

    if (pf == NULL){
	fprintf(stderr, "File not found: %s \n", argv[1]);
	return EXIT_FAILURE;
    }

    fread(&cabecera, sizeof(struct BMP), 1, pf);

    if(cabecera.magic_bytes[0] != 'B' || cabecera.magic_bytes[1] != 'M'){
	fprintf(stderr, "Error. This is not a BitMap\n");
	return EXIT_FAILURE;
    }
    else
	show(cabecera);

    fclose(pf);

    return EXIT_SUCCESS;
}

