#include <iostream>
#include "include/Point.h"
#include "include/Segment.h"
#include "include/Triangle.h"
using namespace std;

int main() {
    Point A(2,0), B(3,0), C(0,4);
    Triangle T(A,B,C);

    cout << "Perimetre du triangle: " << T.perimetre() << endl;

    return 0;
}
