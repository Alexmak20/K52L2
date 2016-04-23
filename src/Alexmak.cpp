#include "Alexmak.h"



Alexmak::Alexmak() : Unit(45,45,10, "Alexmak")

{
}


Alexmak::~Alexmak()
{
}
void Alexmak::Do(Unit& unit)
{
	if (getHealth() < 20 )
	{
		heal();

	}
	else
	{
		hit(unit);
	}
}