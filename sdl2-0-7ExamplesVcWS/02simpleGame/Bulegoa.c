#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>
#define JOKOA_BULEGOA_IMAGE ".\\img\\bulegoa.bmp"
#define JOKOA_BULEGOABALANTZA_IMAGE ".\\img\\bulegoa_balantza.bmp"
#define JOKOA_BULEGOALIBURUTEGIA_IMAGE ".\\img\\bulegoa_liburutegia.bmp"
#define JOKOA_BULEGOAELKARRIZKETA_IMAGE ".\\img\\ELKARRIZKETA.bmp"
#define JOKOA_BULEGOAELKARRIZKETA1_IMAGE ".\\img\\ELKARRIZKETA1.bmp"
#define JOKOA_BULEGOAELKARRIZKETA2_IMAGE ".\\img\\ELKARRIZKETA2.bmp"
#define JOKOA_ATEA_IMAGE ".\\img\\ATEA.bmp"
void sarreraMezuaIdatzi();

int JOKOA_bulegoaIrudiaSortu()
{
	int bulegoId = -1;
	bulegoId = irudiaKargatu(JOKOA_BULEGOA_IMAGE);
	irudiaMugitu(bulegoId, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return bulegoId;
}
int JOKOA_bulegoatxt1IrudiaSortu()
{
	int bulegobalantzaId = -1;
	bulegobalantzaId = irudiaKargatu(JOKOA_BULEGOABALANTZA_IMAGE);
	irudiaMugitu(bulegobalantzaId, 0, 380);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return bulegobalantzaId;
}
int JOKOA_bulegoatxt2IrudiaSortu()
{
	int bulegoliburutegiaId = -1;
	bulegoliburutegiaId = irudiaKargatu(JOKOA_BULEGOALIBURUTEGIA_IMAGE);
	irudiaMugitu(bulegoliburutegiaId, 0, 380);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return bulegoliburutegiaId;
}
int JOKOA_bulegoatxt3IrudiaSortu()
{
	int bulegoelkarrizketaId = -1;
	bulegoelkarrizketaId = irudiaKargatu(JOKOA_BULEGOAELKARRIZKETA_IMAGE);
	irudiaMugitu(bulegoelkarrizketaId, 0, 180);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return bulegoelkarrizketaId;
}
int JOKOA_bulegoatxt4IrudiaSortu()
{
	int bulegoelkarrizketa1Id = -1;
	bulegoelkarrizketa1Id = irudiaKargatu(JOKOA_BULEGOAELKARRIZKETA1_IMAGE);
	irudiaMugitu(bulegoelkarrizketa1Id, 0, 180);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return bulegoelkarrizketa1Id;
}
int JOKOA_bulegoatxt5IrudiaSortu()
{
	int bulegoelkarrizketa2Id = -1;
	bulegoelkarrizketa2Id = irudiaKargatu(JOKOA_BULEGOAELKARRIZKETA2_IMAGE);
	irudiaMugitu(bulegoelkarrizketa2Id, 0, 180);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return bulegoelkarrizketa2Id;
}

int JOKOA_bulegoatxt6IrudiaSortu()
{
	int ateaId = -1;
	ateaId = irudiaKargatu(JOKOA_ATEA_IMAGE);
	irudiaMugitu(ateaId, 0, 380);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return ateaId;
}



