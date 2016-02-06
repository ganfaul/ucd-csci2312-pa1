## CSCI 2312: Programming Assignment 1

_working with objects_

* * *

For Programming Assignment 1, I was tasked with editing a two-dimensional point class, <tt>Point.h</tt>, to become a three-dimensional
point class. The following code is what I've edited <tt>Point.h</tt> to:

 ```c++
// A 3-dimensional point class!
// Coordinates are double-precision floating point.

class Point {

private:
    double __x, __y, __z;

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

    // Distance calculator
    double distanceTo(const Point &p) const;

};

```

I can _instantiate_, or create an instance of, my class anywhere in the rest of my code by calling any of the
constructors I have defined:

```
Point myPoint;               // Calls Point::Point()
Point myOtherPoint(5, 3, 4); // Calls three-argument constructor Point::Point(double, double, double)
```
I also added a new member function to <tt>Point</tt> called <tt>distanceTo</tt>. This member function accepts as an
argument a <u><tt>const Point &</tt></u> (a reference to a constant <tt>Point</tt>), and it returns a <tt>double</tt> 
that approximates the distance between the two points. <tt>distanceTo</tt> is a _constant_ member function.

Additionally, I added a source file called <tt>area.cpp</tt>, where I implemeted the following function:
   ```c++
   double computeArea(const Point &a, const Point &b, const Point &c);
   ```
 which computes the area in between the three points, a, b, and c.
 
 I compiled my project both with g++ from my terminal as well as within CLion, and passed all 56 tests in both environments.

* * *

<font size="-1">ACKNOWLEDGEMENT: Modelled after CS11 Lab 1 at Caltech.</font>

<font size="-1">Some content Copyright (C) 2004-2010, California Institute of Technology.</font>
