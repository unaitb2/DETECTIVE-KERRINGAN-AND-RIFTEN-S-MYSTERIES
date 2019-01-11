#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>
#define JOKOA_KULTOA_IMAGE ".\\img\\KULTOATXT3.bmp"
int JOKOA_kultoaIrudiaSortu()
{
	int kultoId = -1;
	kultoId = irudiaKargatu(JOKOA_KULTOA_IMAGE);
	irudiaMugitu(kultoId, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return kultoId;
}
#define JOKOA_KULTOATXT_IMAGE ".\\img\\KULTOATXT2.bmp"
int JOKOA_kultoatxtIrudiaSortu()
{
	int kultoId = -1;
	kultoId = irudiaKargatu(JOKOA_KULTOATXT_IMAGE);
	irudiaMugitu(kultoId, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return kultoId;
}

