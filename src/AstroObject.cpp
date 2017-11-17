/*
 * AstromicObject.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: serre
 */

#include "AstroObject.h"

AstroObject::AstroObject(
        double ra,
        double dec,
        double sd)
{
    this->ra = ra;
    this->dec = dec;
    this->sd = sd;
}

AstroObject::~AstroObject() {
    // TODO Auto-generated destructor stub
}

