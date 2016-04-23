//
//  Edgar.cpp
//  QWE
//
//  Created by Egor Yanukovich on 16.04.16.
//  Copyright © 2016 Egor Yanukovich. All rights reserved.
//

#include "Edgar.h"




Edgar::Edgar(): Unit(40, 40, 20)
{

}


Edgar::~Edgar()
{
}

void Edgar::Do(Unit& unit) {
    if (getHealth() < 15) {
        heal();
    }
    else {
        hit(unit);
    }
};