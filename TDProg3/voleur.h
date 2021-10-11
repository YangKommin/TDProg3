#pragma once
#include "personnage.h"

class voleur : public personnage
{
public:
    voleur();
    voleur(int _agilite);
    ~voleur();

    int attaquer();
    bool _Camouflage();
    bool _Assassinat();
    int Camouflage();
    int Assassinat();
    void DisplayStat();
    void ChangeStat();

private:
    int camouflageCondition;
    int assassinatCondition;
};

