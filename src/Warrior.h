#pragma once
#include "unit.h"
class Warrior :
	public Unit
{
public:
	Warrior();
	void Do(Unit& unit);
	~Warrior();
};

