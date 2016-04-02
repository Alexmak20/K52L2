#include "unit.h"


Unit::Unit(int h, int attack, int armor, std::string name) {
    if ((h + attack + armor > sumOfPoints))
    {
       throw "Wrong property value";
    }
    h_ = h;
    fullH_ = h;
    attack_ = attack;
    armor_ = armor;
    unitName_ = name;
}

Unit::Unit(int h, int attack, int armor):Unit(h, attack, armor, "Nameless") { }


void Unit::hit(Unit &enemy) {

    int dmg = (attack_ - enemy.armor_);
    int minDmg = attack_*(minDamagePercent/100.0);
    if (dmg < minDmg){
        dmg = minDmg;
    }
    enemy.h_ = enemy.h_ - dmg;
}

void Unit::heal() {
    int new_h = h_ + healBaseValue;
    if (new_h > fullH_) {
        h_ = fullH_;
    }
    else {
        h_ = new_h;
    }
}

std::string Unit::getUnitName() {
    return unitName_;
}

int Unit::getHealth() {
    return h_;
}
