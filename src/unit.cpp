#include "unit.h"


Unit::Unit(int h, int attack, int armor, std::string name) {
    if (h < 0 || attack < 0 || armor < 0) {
        throw "Properties must be positive";
    }
    if ((h + attack + armor) > sumOfPoints)
    {
       throw "Wrong property value";
    }
    h_ = h;
    fullH_ = h;
    attack_ = attack;
    armor_ = armor;
    unitName_ = name;
}


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

int Unit::getEnemyArmor(Unit &enemy){
    return enemy.armor_;
}

int Unit::getArmor(){
    return armor_;
}

int Unit::getAttack(){
    return attack_;
}

int Unit::getFullHpValue() {
    return fullH_;
}

std::string Unit::getUnitName() {
    return unitName_;
}

int Unit::getHealth() {
    return h_;
}
