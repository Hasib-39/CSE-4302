// main.cpp
#include "Matrix3D.h"
#include <iostream>
using namespace std;

int main() {
    // Example usage of the Matrix3D class
    double elements1[3][3] = {{4, 2, 1}, {7, 3, 5}, {6, 7, 2}};
    double elements2[3][3] = {{5,5, 0}, {1, 6, 8}, {9, 4, 3}};

    Matrix3D mat1(elements1);
    Matrix3D mat2(elements2);

    // Matrix addition
    Matrix3D resultAdd = mat1 + mat2;
    cout << "Matrix Addition:" << endl;
    resultAdd.print();

    // Matrix subtraction
    Matrix3D resultSub = mat1 - mat2;
    cout << "Matrix Subtraction:" << endl;
    resultSub.print();

    // Matrix multiplication
    Matrix3D resultMul = mat1 * mat2;
    cout << "Matrix Multiplication:" << endl;
    resultMul.print(); // Implement a print() function if needed

    // Determinant
    double determinant = mat1.det();
    cout << "Determinant of mat1: " << determinant << endl;

    // Inverse
    Matrix3D invMat = mat1.inverse();
    cout << "Inverse of mat1:" << endl;
    invMat.print(); // Implement a print() function if needed

    return 0;
}
