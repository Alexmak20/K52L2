#ifndef UNIT_H
#define UNIT_H

#include <string>
#include <memory>


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
    Unit(int h, int attack, int armor, std::string name = "Nameless");
    virtual ~Unit() { }

    void heal();
    void hit(Unit &enemy);
    virtual void Do(Unit& unit) = 0;
    //virtual void Do(std::shared_ptr<Unit> unit) = 0;

    int getArmor();
    int getAttack();
    int getFullHpValue();
    int getEnemyArmor(Unit &enemy); //Look at your enemy armor
    int getHealth();
    std::string getUnitName();

};

#endif // UNIT_H
