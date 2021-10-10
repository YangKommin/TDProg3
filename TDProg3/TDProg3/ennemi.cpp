#include "ennemi.h"

ennemi::ennemi()
{
	pv = 10;
	xp = 100;
}

ennemi::ennemi(int _pv)
{
}

ennemi::~ennemi()
{
}

int ennemi::attaquer()
{
	return 10;
}

bool ennemi::mort()
{
	if (pv <= 0)
	{
		return true;
	}
	else
		return false;
}

unsigned long ennemi::xpEnnemi()
{
	return xp;
}

int ennemi::GetPV()
{
	return pv;
}

void ennemi::SetPV(int _pv)
{
	pv = _pv;
}
