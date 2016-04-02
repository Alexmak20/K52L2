#ifndef UNIT_H
#define UNIT_H


class Unit
{
private:
    int h;
    int attack;
    int armor;
public:
    Unit(int h, int attack, int armor);
    void heal();
    void hit();
    virtual void Do(Unit& unit) = 0;
    int getHealth();

};

#endif // UNIT_H
