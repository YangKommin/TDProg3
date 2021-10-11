#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "personnage.h"
#include "ennemi.h"
#include "guerrier.h"

using namespace std;

int main()
{
	personnage monPersoNom("kommin");
	personnage monPersonnage(10,12,23,12,52,42,20);
	personnage monPersoXp(0);
	personnage monPerso;
	ennemi mesEnnemis;
	guerrier monguerier;


	unsigned long xp = monPerso.GetMyxp();
	int level(0);
	char win;
	int val;
	
	while (true)
	{
		cin >> win;
		if (win == 'k')
		{
			system("CLS");
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