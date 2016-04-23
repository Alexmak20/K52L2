#include "Xela.h"

Xela::Xela() : Unit(55, 30, 15)
{
}


Xela::~Xela()
{
}
void Xela::Do(Unit& unit)
{
	if (getHealth() < 20)
	{
		heal();
	}
	else
	{
		hit(unit);
	}
}