#include "terminator.h"

terminator::terminator(): Unit::Unit(60,10,30)
{

}

void terminator::Do(Unit* unit)
{
    for (int i = 0; i < 40; i++){
        heal();
        hit(*unit);
    }
}
