#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double x, y, z;

public:
    Point3D(double a = 0, double b = 0, double c = 0);
    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif
