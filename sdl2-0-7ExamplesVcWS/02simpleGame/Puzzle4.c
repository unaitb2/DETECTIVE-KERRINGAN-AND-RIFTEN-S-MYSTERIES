
#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>

#define PUZZLE_4_TESTUA "Maltzurraren argazkiaren negatiboaz erretratu egokia aukeratu. 1 zenbakia sakatzen"
#define PUZZLE_4_TESTUA_2 "lehenengo irudia aukeratzen duzu eta 2 zenbakia sakatzen bigarrengoa"
#define PUZZLE_4 ".\\img\\Puzzle4.bmp"
#define CUADRO ".\\img\\cuadrito.bmp"

int PUZZLE_irudiaBistaratu() {
	int id = -1;
	id = irudiaKargatu(PUZZLE_4);
	irudiaMugitu(id, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return id;
}
int seleccion1() {
	int cuadroid = -1;
	cuadroid = irudiaKargatu(CUADRO);
	irudiaMugitu(cuadroid, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return cuadroid;
}
int seleccion2() {
	int cuadroid = -1;
	cuadroid = irudiaKargatu(CUADRO);
	irudiaMugitu(cuadroid, 400, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return cuadroid;
}

