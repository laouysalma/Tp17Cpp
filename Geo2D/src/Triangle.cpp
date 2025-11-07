#include "Triangle.h"

Triangle::Triangle() : p1(Point()), p2(Point()), p3(Point()) {}
Triangle::Triangle(const Point& a, const Point& b, const Point& c) : p1(a), p2(b), p3(c) {}

double Triangle::perimetre() const {
    Segment s1(p1,p2), s2(p2,p3), s3(p3,p1);
    return s1.longueur() + s2.longueur() + s3.longueur();
}
