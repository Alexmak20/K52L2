#ifndef UNIT_H
#define UNIT_H

#include <string>

class Unit
{
private:
    int h_;
    int attack_;
    int armor_;
    const int minDamagePercent = 10;
    const int healBaseValue = 20;
    const int maxHP = 100;

public:
    Unit(int h, int attack, int armor);
    void heal();
    void hit(Unit &enemy);
    virtual void Do(Unit& unit) = 0;
    int getHealth();

};

#endif // UNIT_H
