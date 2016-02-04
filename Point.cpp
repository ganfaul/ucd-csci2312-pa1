//
// Created by Gannon Faul on 2/4/16.
//
#include <iostream>
#include <cmath>

#include "Point.h"

using namespace std;

// **CONSTRUCTORS**

// default constructor
Point::Point(){
    __x = 0;
    __y = 0;
    __z = 0;
}

// three-argument constructor
Point::Point(double x, double y, double z) {
    __x = x;
    __y = y;
    __z = z;
}

// **METHODS**

// Mutators
void Point::setX(double newX) { __x = newX; }
void Point::setY(double newY) { __y = newY; }
void Point::setZ(double newZ) { __z = newZ; }

// Accessors
double Point::getX() const { return __x; }
double Point::getY() const { return __y; }
double Point::getZ() const { return __z; }

// Distance Calculator
double Point::distanceTo(const Point &p) const {

    double distance;

    double xDist = __x - p.getX();
    double yDist = __y - p.getY();
    double zDist = __z - p.getZ();

    distance = sqrt(pow(xDist, 2) + pow(yDist, 2) + pow(zDist, 2));

    return distance;
}
