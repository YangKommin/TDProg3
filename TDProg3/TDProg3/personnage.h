#pragma once
#include <iostream>

class personnage
{
public:

	personnage();
	personnage(std::string _nom);
	personnage(int _pv,
				int _mana,
				int _force,
				int _intelligence,
				int _agility,
				int _endurance,
				int _vitesse);
	personnage(unsigned long _xp);
	~personnage();

	bool gainNiveau();
	void DisplayStat();
	void ChangeStat();

	// Getter

	std::string GetNom();
	int GetNiveau();
	int GetPV();
	int GetMana();
	int GetForce();
	int GetIntelligence();
	int GetAgilite();
	int GetEndurance();
	int GetVitesse();
	unsigned long GetMyxp();
	unsigned long GetXpNeed();

	// Setter

	void SetNom(std::string _nom);
	void SetNiveau(int _niveau);
	void SetPV(int _pv);
	void SetMana(int _mana);
	void SetForce(int _force);
	void SetIntelligence(int _intelligence);
	void SetAgilite(int _agilite);
	void SetEndurance(int _endurance);
	void SetVitesse(int _vitesse);
	void SetMyxp(unsigned long _Myxp);
	void SetXpNeed(unsigned long _Xpneed);

private:

	std::string nom;
	int niveau;
	int pv;
	int mana;
	int force;
	int intelligence;
	int agilite;
	int endurance;
	int vitesse;
	unsigned long xp[10];
	unsigned long xpNeed;
	unsigned niveaulimit;
	unsigned long myxp;

protected:
	int lol;
	int compteur;
};


