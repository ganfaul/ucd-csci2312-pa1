//
// Created by Gannon Faul on 2/4/16.
//
#include "Point.h"


using namespace std;

// CONSTRUCTORS
// ------------
// default constructor
Point(){
    __x = 0;
    __y = 0;
    __z = 0;
}

// three-argument constructor
Point(double x, double y, double z) {
    __x = x;
    __y = y;
    __z = z;

}

// METHODS
// -------
// Mutators
void setX(double newX){
    __x = newX;
}

void setY(double newY){
    __y = newY;
}

void setZ(double newZ){
    __z = newZ
}

// Accessors
double getX() const{
    return __x;
}

double getY() const{
    return __y;
}

double getZ() const{
    return __z;
}
