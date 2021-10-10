#pragma once
class voleur
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
    int pv;
    int agilite;
    int camouflageCondition;
    int assassinatCondition;
    int ManaVoleur;
};

