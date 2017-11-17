/*
 * AstromicObject.h
 *
 *  Created on: 17 nov. 2017
 *      Author: serre
 */

#ifndef ASTROOBJECT_H_
#define ASTROOBJECT_H_

class AstroObject {
public:
    AstroObject(double ra, double dec, double sd);
    virtual ~AstroObject();

private:
    double ra;
    double dec;
    double sd;
};

#endif /* ASTROOBJECT_H_ */
