#ifndef UNIT_H
#define UNIT_H

#include <string>


class Unit
{
private:
    int h_;
    int fullH_;
    int attack_;
    int armor_;
    std::string unitName_;

    const int minDamagePercent = 10;
    const int healBaseValue = 20;
    const int sumOfPoints = 100;

public:
    Unit(int h, int attack, int armor);
    Unit(int h, int attack, int armor, std::string name);
    virtual ~Unit() { }

    void heal();
    void hit(Unit &enemy);
    virtual void Do(Unit& unit) = 0;

    int getHealth();
    std::string getUnitName();

};

#endif // UNIT_H
