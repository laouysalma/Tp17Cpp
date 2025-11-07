#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <array>

template<typename T, size_t N, size_t M>
class Matrix {
private:
    std::array<std::array<T, M>, N> data{};
public:
    Matrix() {
        for (size_t i = 0; i < N; ++i)
            for (size_t j = 0; j < M; ++j)
                data[i][j] = T();
    }

    T& at(size_t i, size_t j) {
        return data[i][j];
    }

    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;
        for (size_t i = 0; i < N; ++i)
            for (size_t j = 0; j < M; ++j)
                result.data[i][j] = data[i][j] + other.data[i][j];
        return result;
    }

    Matrix<T, N, M> operator*(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;
        for (size_t i = 0; i < N; ++i)
            for (size_t j = 0; j < M; ++j) {
                T sum = T();
                for (size_t k = 0; k < M; ++k)
                    sum += data[i][k] * other.data[k][j];
                result.data[i][j] = sum;
            }
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const Matrix<T, N, M>& mat) {
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < M; ++j)
                os << mat.data[i][j] << " ";
            os << "\n";
        }
        return os;
    }
};

#endif
