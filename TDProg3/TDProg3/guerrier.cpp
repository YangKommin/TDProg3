#include "guerrier.h"
#include "ennemi.h"
#include "personnage.h"

guerrier::guerrier()
{
	pv = 100;
	force = 15;
	chargeCondition = 5;
	executionCondition = 7;
	ManaGuerrier = 20;
}

guerrier::guerrier(int _force)
{
	//...
}

guerrier::~guerrier() {}

int guerrier::attaquer()
{
	return 5;
}

bool guerrier::_charge()
{
	if (ManaGuerrier < chargeCondition)
		return false;
	else
		return true;
}

int guerrier::charge()
{
	return 15;
}

bool guerrier::_execution()
{
	if (ManaGuerrier < executionCondition && pv < 30)
		return false;
	else
		return true;
}

int guerrier::execution()
{
	return 25;
}

void guerrier::DisplayStat()
{
	// Accesseurs pour recuperer les donnees...
}

void guerrier::ChangeStat()
{
	// Mutateurs pour modifier les donnees...
}