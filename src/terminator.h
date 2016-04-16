#ifndef TERMINATOR_H
#define TERMINATOR_H

#include "unit.h"

class terminator : public Unit
{
public:
    terminator();
     void Do(Unit* unit);
};

#endif // TERMINATOR_H
