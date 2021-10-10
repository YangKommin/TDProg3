#pragma once
class mage
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
    int pv;
    int intelligence;
    int bdfCondition;
    int transfertCondition;
    int ManaMage;
};