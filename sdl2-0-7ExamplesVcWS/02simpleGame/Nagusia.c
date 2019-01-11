#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>
#define JOKOA_MAPA0_IMAGE ".\\img\\MAPA0.bmp"
#define JOKOA_MAPA_IMAGE ".\\img\\MAPA.bmp"
#define JOKOA_ERREKA_IMAGE ".\\img\\ERREKA.bmp"
#define JOKOA_KULTOTXT_IMAGE ".\\img\\KULTOTXT.bmp"
#define JOKOA_KULTOTXT1_IMAGE ".\\img\\KULTOTXT1.bmp"

int JOKOA_MapaIrudiaSortu()
{
	int mapa0Id = -1;
	mapa0Id = irudiaKargatu(JOKOA_MAPA0_IMAGE);
	irudiaMugitu(mapa0Id, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return mapa0Id;
}
int JOKOA_Mapa1IrudiaSortu()
{
	int mapaId = -1;
	mapaId = irudiaKargatu(JOKOA_MAPA_IMAGE);
	irudiaMugitu(mapaId, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return mapaId;
}
int JOKOA_ErrekaIrudiaSortu()
{
	int errekaId = -1;
	errekaId = irudiaKargatu(JOKOA_ERREKA_IMAGE);
	irudiaMugitu(errekaId, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return errekaId;
}
int JOKOA_HilketatxtIrudiaSortu()
{
	int hilketatxtId = -1;
	hilketatxtId = irudiaKargatu(JOKOA_KULTOTXT_IMAGE);
	irudiaMugitu(hilketatxtId, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return hilketatxtId;
}
int JOKOA_Hilketatxt1IrudiaSortu()
{
	int hilketatxt1Id = -1;
	hilketatxt1Id = irudiaKargatu(JOKOA_KULTOTXT1_IMAGE);
	irudiaMugitu(hilketatxt1Id, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return hilketatxt1Id;
}