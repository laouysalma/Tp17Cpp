#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include "Segment.h"

class Triangle {
private:
    Point p1, p2, p3;
public:
    Triangle();
    Triangle(const Point& a, const Point& b, const Point& c);
    double perimetre() const;
};

#endif
