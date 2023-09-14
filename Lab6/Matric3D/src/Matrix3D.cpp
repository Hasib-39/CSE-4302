// Matrix3D.cpp
#include "Matrix3D.h"
#include <iostream>
using namespace std;

Matrix3D::Matrix3D() {
    // Initialize the matrix with zeros by default
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = 0.0;
        }
    }
}

Matrix3D::Matrix3D(const double elements[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = elements[i][j];
        }
    }
}

Matrix3D::~Matrix3D() {}

double Matrix3D::det() const {
    double determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                        matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                        matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    return determinant;
}

Matrix3D Matrix3D::inverse() const {
    double determinant = det();
    if (determinant == 0) {
        cout << "Matrix is singular, cannot calculate the inverse." << endl;
        return Matrix3D();
    }

    Matrix3D inv;
    double invDet = 1.0 / determinant;

    inv.matrix[0][0] = (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) * invDet;
    inv.matrix[0][1] = (matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]) * invDet;
    inv.matrix[0][2] = (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) * invDet;
    inv.matrix[1][0] = (matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]) * invDet;
    inv.matrix[1][1] = (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) * invDet;
    inv.matrix[1][2] = (matrix[0][2] * matrix[1][0] - matrix[0][0] * matrix[1][2]) * invDet;
    inv.matrix[2][0] = (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) * invDet;
    inv.matrix[2][1] = (matrix[0][1] * matrix[2][0] - matrix[0][0] * matrix[2][1]) * invDet;
    inv.matrix[2][2] = (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) * invDet;

    return inv;
}

Matrix3D Matrix3D::operator+(const Matrix3D& other) const {
    // Overloaded + operator for matrix addition
    Matrix3D result;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
        }
    }
    return result;
}

Matrix3D Matrix3D::operator-(const Matrix3D& other) const {
    // Overloaded - operator for matrix subtraction
    Matrix3D result;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
        }
    }
    return result;
}

Matrix3D Matrix3D::operator*(const Matrix3D& other) const {
    // Overloaded * operator for matrix multiplication
    Matrix3D result;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.matrix[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
            }
        }
    }
    return result;
}

void Matrix3D::print(){
    cout << "Matrix: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
