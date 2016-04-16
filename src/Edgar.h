#pragma once
#include "unit.h"

class Edgar : public Unit {
public:
	~Edgar();
	void Do(Unit& unit);
	Edgar();
};
