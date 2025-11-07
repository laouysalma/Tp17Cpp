#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;
public:
    Point(double a = 0, double b = 0);
    double getX() const;
    double getY() const;
};

#endif
