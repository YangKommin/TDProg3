#include <iostream>
#include "personnage.h"

using namespace std;

personnage::personnage()
{
	nom = "Monperso";
	niveau = 0;
	pv = 50;
	mana = 30;
	force = 10;
	intelligence = 10;
	agilite = 10;
	endurance = 25;
	vitesse = 2;
	xpNeed = 1000;
	// niveaux
	for (unsigned long i = 0; i < 10; ++i)
	{
		xp[i] = xpNeed + xpNeed * i;
	}
	//
	niveaulimit = 10;
	myxp = 0;

	lol = 546;
	compteur = 0;

}

personnage::personnage(std::string _nom)
{
	//.....
}

personnage::personnage(int _pv,
						int _mana,
						int _force,
						int _intelligence,
						int _agility,
						int _endurance,
						int _vitesse)
{
	//.....
}

personnage::personnage(unsigned long _xp)
{
}

personnage::~personnage() {}

bool personnage::gainNiveau()
{
	if (myxp >= xpNeed && niveau <= niveaulimit - 1)
	{
		xpNeed = xp[++compteur];
		return true;
	}
	else
	{
		return false;
	}
} // Gain de niveau

void personnage::DisplayStat()
{
	cout << "Nom : " << GetNom() << endl;
	cout << "Niveau : " << GetNiveau() << endl;
	cout << "PV : " << GetPV() << endl;
	cout << "Mana : " << GetMana() << endl;
	cout << "Force : " << GetForce() << endl;
	cout << "Intelligence : " << GetIntelligence() << endl;
	cout << "Agilite : " << GetAgilite() << endl;
	cout << "Endurance : " << GetEndurance() << endl;
	cout << "Vitesse : " << GetVitesse() << endl;
	cout << "Xp : " << GetMyxp() << " / " << GetXpNeed() << endl;
} 	// Accesseurs pour recuperer les donnees...

void personnage::ChangeStat()
{
	std::string changeNom;
	int changeNiveau;
	int changePV;
	int changeMana;
	int changeForce;
	int changeIntelligence;
	int changeAgilite;
	int changeEndurance;
	int changeVitesse;
	cout << "Desormais vous vous appelerez... "; cin >> changeNom; SetNom(changeNom); cout << endl;
	cout << "Mais... A quel niveau d'experience pensez-vous etre ? "; cin >> changeNiveau; SetNiveau(changeNiveau); cout << endl;
	cout << "Combien de PV possedez-vous ? "; cin >> changePV; SetPV(changePV); cout << endl;
	cout << "Et combien de mana ? "; cin >> changeMana; SetMana(changeMana); cout << endl;
	cout << "Definissez votre force : "; cin >> changeForce; SetForce(changeForce); cout << endl;
	cout << "Votre intelligence : "; cin >> changeIntelligence; SetIntelligence(changeIntelligence); cout << endl;
	cout << "Et votre agilite : "; cin >> changeAgilite; SetAgilite(changeAgilite); cout << endl;
	cout << "Combien d'endurance avez-vous ? "; cin >> changeEndurance; SetEndurance(changeEndurance); cout << endl;
	cout << "Et a quelle vitesse marchez-vous ? "; cin >> changeVitesse; SetVitesse(changeVitesse); cout << endl;
	cout << "\n" << "Vos Stats : " << endl;
	DisplayStat();
}	// Mutateurs pour modifier les donnees...


// Accesseurs //

std::string personnage::GetNom()
{
	return nom;
}

int personnage::GetNiveau()
{
	return niveau;
}

int personnage::GetPV()
{
	return pv;
}

int personnage::GetMana()
{
	return mana;
}

int personnage::GetForce()
{
	return force;
}

int personnage::GetIntelligence()
{
	return intelligence;
}

int personnage::GetAgilite()
{
	return agilite;
}

int personnage::GetEndurance()
{
	return endurance;
}

int personnage::GetVitesse()
{
	return vitesse;
}

unsigned long personnage::GetMyxp()
{
	return myxp;
}

unsigned long personnage::GetXpNeed()
{
	return xpNeed;
}

// Mutateurs //

void personnage::SetNom(std::string _nom)
{
	nom = _nom;
}

void personnage::SetNiveau(int _niveau)
{
	niveau = _niveau;
}

void personnage::SetPV(int _pv)
{
	pv = _pv;
}

void personnage::SetMana(int _mana)
{
	mana = _mana;
}

void personnage::SetForce(int _force)
{
	force = _force;
}

void personnage::SetIntelligence(int _intelligence)
{
	intelligence = _intelligence;
}

void personnage::SetAgilite(int _agilite)
{
	agilite = _agilite;
}

void personnage::SetEndurance(int _endurance)
{
	endurance = _endurance;
}

void personnage::SetVitesse(int _vitesse)
{
	vitesse = _vitesse;
}

void personnage::SetMyxp(unsigned long _Myxp)
{
	myxp = _Myxp;
}

void personnage::SetXpNeed(unsigned long _Xpneed)
{
	xpNeed = _Xpneed;
}