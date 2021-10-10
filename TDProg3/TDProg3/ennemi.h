#pragma once
class ennemi
{
public:
	ennemi();
	ennemi(int _pv);
	~ennemi();

	int attaquer();
	bool mort();
	unsigned long xpEnnemi();

	int GetPV();
	void SetPV(int _pv);

private:
	int pv;
	unsigned long xp;
};

