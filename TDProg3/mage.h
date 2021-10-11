#pragma once
#include "personnage.h"

class mage : public personnage
{
public:

    mage();
    mage(int _intelligence);
    ~mage();

    int attaquer();
    bool _boule_de_feu();
    bool _transfert();
    int boule_de_feu();
    int transfert();
    void DisplayStat();
    void ChangeStat();

private:
    int bdfCondition;
    int transfertCondition;
};