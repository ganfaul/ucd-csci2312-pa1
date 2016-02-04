//
// Created by Gannon Faul on 2/4/16.
//

#include <iostream>
#include <cmath>

#include "Point.h"

using namespace std;

// Calculates and returns the area between three pointsAdd
double computeArea(const Point &a, const Point &b, const Point &c){

    // Find lengths of each side
    double sideA = a.distanceTo(b);
    double sideB = a.distanceTo(c);
    double sideC = b.distanceTo(c);

    // Find semiperimeter
    double s = 0.5 * (sideA + sideB + sideC);

    // Find area
    double area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));

    return area;
}
