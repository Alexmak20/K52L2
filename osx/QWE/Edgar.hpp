//
//  Edgar.hpp
//  QWE
//
//  Created by Egor Yanukovich on 16.04.16.
//  Copyright © 2016 Egor Yanukovich. All rights reserved.
//

#ifndef Edgar_hpp
#define Edgar_hpp

#pragma once
#include "unit.h"
class Edgar :
public Unit
{
public:
    Edgar();
    void Do(Unit& unit);
    ~Edgar();
};



#endif /* Edgar_hpp */
