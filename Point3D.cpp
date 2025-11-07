#include "Point3D.h"

Point3D::Point3D(double a, double b, double c) {
    x = a;
    y = b;
    z = c;
}

double Point3D::getX() const {
    return x;
}

double Point3D::getY() const {
    return y;
}

double Point3D::getZ() const {
    return z;
}
