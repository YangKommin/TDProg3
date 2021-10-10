#include "voleur.h"

voleur::voleur()
{
	pv = 75;
	agilite = 15;
	camouflageCondition = 5;
	assassinatCondition = 7;
	ManaVoleur = 25;
}

voleur::voleur(int _agilite)
{
	//...
}

voleur::~voleur() {}

int voleur::attaquer()
{
	return 5;
}

bool voleur::_Camouflage()
{
	if (ManaVoleur < camouflageCondition)
	{
		return false;
	}
	else
		return true;
}

bool voleur::_Assassinat()
{
	if (ManaVoleur < assassinatCondition && _Camouflage())
	{
		return false;
	}
	else
		return true;
}

int voleur::Camouflage()
{
	return 0;
}

int voleur::Assassinat()
{
	return 30;
}

void voleur::DisplayStat()
{
	// Accesseurs pour recuperer les donnees...
}

void voleur::ChangeStat()
{
	// Mutateurs pour modifier les donnees...
}