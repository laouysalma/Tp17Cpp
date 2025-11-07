#include <iostream>
#include "Point3D.h"
using namespace std;

int main() {
    Point3D p1(1.5, 2.2, 3.0);
    Point3D p2(4.2, 5.5, 6.5);

    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ", " << p1.getZ() << ")" << endl;
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ", " << p2.getZ() << ")" << endl;

    return 0;
}
