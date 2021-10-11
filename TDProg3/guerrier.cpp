#include "guerrier.h"

guerrier::guerrier()
{
	pv = 100;
	force = 15;
	chargeCondition = 5;
	executionCondition = 7;
	mana = 20;
}

guerrier::guerrier(int _force) : personnage(_force)
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
	if (mana < chargeCondition)
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
	if (mana < executionCondition && pv < 30)
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