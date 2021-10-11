#pragma once
#include "personnage.h"

class guerrier : public personnage
{
public:

    guerrier();
    guerrier(int _force);
    ~guerrier();

    int attaquer();
    bool _charge();
    int charge();
    bool _execution();
    int execution();
    void DisplayStat();
    void ChangeStat();

private:
    int chargeCondition;
    int executionCondition;
};

