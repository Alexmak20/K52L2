#include "unit.h"

Unit::Unit(int h, int attack, int armor)
{
    if ((h + attack + armor) > 100) {
        throw "Wrong sum of properties";
    }
    h_ = h;
    attack_ = attack;
    armor_ = armor;
}

void Unit::hit() { }

void Unit::heal() { }
