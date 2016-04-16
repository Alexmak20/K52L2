#include "Warrior.h"



Warrior::Warrior()
	: Unit(50, 40, 10)
{
	
}


Warrior::~Warrior()
{
}

void Warrior::Do(Unit& unit) {
	if ((getHealth() < 15) && (unit.getHealth()>30)) {
		heal();
	}
	else {
		hit(unit);
	}
};