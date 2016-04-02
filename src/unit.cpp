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

void Unit::hit(Unit &enemy) {

    int dmg = (attack_ - enemy.armor_);
    int minDmg = attack_*(minDamagePercent/100.0);
    if (dmg < minDmg){
        dmg = minDmg;
    }
    enemy.h_ = enemy.h_ - dmg;
}

void Unit::heal() { }
