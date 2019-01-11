#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>
#define JOKOA_HILKETA_IMAGE ".\\img\\HILKETA.bmp"
#define JOKOA_HILKETAELKARRIZKETA_IMAGE ".\\img\\Hilketatxt.bmp"
#define JOKOA_HILKETAELKARRIZKETA1_IMAGE ".\\img\\Hilketatxt1.bmp"
#define JOKOA_HILKETAELKARRIZKETA2_IMAGE ".\\img\\Hilketatxt2.bmp"
#define JOKOA_PANPINA_IMAGE ".\\img\\PANPINA.bmp"
int JOKOA_hilketaIrudiaSortu()
{
	int hilketaId = -1;
	hilketaId = irudiaKargatu(JOKOA_HILKETA_IMAGE);
	irudiaMugitu(hilketaId, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return hilketaId;
}
int JOKOA_hilketatxtIrudiaSortu()
{
	int hilketaelkarrizketaId = -1;
	hilketaelkarrizketaId = irudiaKargatu(JOKOA_HILKETAELKARRIZKETA_IMAGE);
	irudiaMugitu(hilketaelkarrizketaId, 0, 180);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return hilketaelkarrizketaId;
}
int JOKOA_hilketatxt1IrudiaSortu()
{
	int hilketaelkarrizketa1Id = -1;
	hilketaelkarrizketa1Id = irudiaKargatu(JOKOA_HILKETAELKARRIZKETA1_IMAGE);
	irudiaMugitu(hilketaelkarrizketa1Id, 0, 180);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return hilketaelkarrizketa1Id;
}

int JOKOA_hilketatxt2IrudiaSortu()
{
	int hilketaelkarrizketa2Id = -1;
	hilketaelkarrizketa2Id = irudiaKargatu(JOKOA_HILKETAELKARRIZKETA2_IMAGE);
	irudiaMugitu(hilketaelkarrizketa2Id, 0, 180);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return hilketaelkarrizketa2Id;
}
int JOKOApanpinaIrudiaSortu()
{
	int panpinaId = -1;
	panpinaId = irudiaKargatu(JOKOA_PANPINA_IMAGE);
	irudiaMugitu(panpinaId, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return panpinaId;
}