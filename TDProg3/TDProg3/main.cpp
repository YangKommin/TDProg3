#include <iostream>
#include <string>
#include "personnage.h"
#include "ennemi.h"

using namespace std;

int main()
{
	personnage monPersoNom("kommin");
	personnage monPersoXp(0);
	personnage monPerso;
	ennemi mesEnnemis;

	unsigned long xp = monPerso.GetMyxp();
	int level(0);
	char win;
	
	while (true)
	{
		cin >> win;
		if (win == 'k')
		{
			xp = xp + mesEnnemis.xpEnnemi();
			monPerso.SetMyxp(xp);
			if (monPerso.gainNiveau())
			{
				monPerso.SetNiveau(++level);
			}
			monPerso.DisplayStat();
		}
	}

	return 1;
}