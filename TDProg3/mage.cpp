#include "mage.h"

mage::mage()
{
	pv = 60;
	intelligence = 20;
	bdfCondition = 10;
	transfertCondition = 15;
	mana = 50;
}

mage::mage(int _intelligence) : personnage(_intelligence)
{
}

mage::~mage()
{
}

int mage::attaquer()
{
	return 5;
}

bool mage::_boule_de_feu()
{
	if (mana < bdfCondition)
		return false;
	else
		return true;
}

bool mage::_transfert()
{
	if (mana < transfertCondition)
		return false;
	else
		return true;
}

int mage::boule_de_feu()
{
	return 20;
}

int mage::transfert()
{
	return 10;
}

void mage::DisplayStat()
{
	// Accesseurs pour recuperer les donnees...
}

void mage::ChangeStat()
{
	// Mutateurs pour modifier les donnees...
}