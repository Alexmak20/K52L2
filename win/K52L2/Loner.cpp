#include "Loner.h"



Loner::Loner() : Unit(70, 20, 10)
{

}
Loner::~Loner()
{
}


void Loner::Do(Unit& unit)
{
	if (getHealth() < 30) {
		heal();
	}
	else {
		hit();
	}

}