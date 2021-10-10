#pragma once
class guerrier 
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

    int pv;
    int force;
    int chargeCondition;
    int executionCondition;
    int ManaGuerrier;
};

