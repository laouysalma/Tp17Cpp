#include <iostream>
#include "Matrix.h"

int main() {
    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;

    A.at(0,0)=1; A.at(0,1)=2;
    A.at(1,0)=3; A.at(1,1)=4;

    B.at(0,0)=5; B.at(0,1)=6;
    B.at(1,0)=7; B.at(1,1)=8;

    std::cout << "A + B:\n" << A + B;
    std::cout << "A * B:\n" << A * B;

    Matrix<double, 3, 3> X;
    Matrix<double, 3, 3> Y;

    for (size_t i=0;i<3;i++)
        for (size_t j=0;j<3;j++){
            X.at(i,j)=i+j*0.1;
            Y.at(i,j)=i*0.5+j*0.2;
        }

    std::cout << "X + Y:\n" << X + Y;
    std::cout << "X * Y:\n" << X * Y;

    return 0;
}
