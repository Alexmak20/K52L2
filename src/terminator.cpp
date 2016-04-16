#include "terminator.h"

terminator::terminator(): Unit::Unit(60,10,30,"Terminator")
{

}

void terminator::Do(Unit& unit)
{
    for (int i = 0; i < 99; i++){
        heal();
        hit(unit);
    }
}
