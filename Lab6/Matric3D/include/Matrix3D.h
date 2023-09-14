// Matrix3D.h
#ifndef MATRIX3D_H
#define MATRIX3D_H

class Matrix3D {
private:
    double matrix[3][3];

public:
    Matrix3D();
    Matrix3D(const double elements[3][3]);
    ~Matrix3D();

    double det() const;
    Matrix3D inverse() const;


    Matrix3D operator+(const Matrix3D& other) const;
    Matrix3D operator-(const Matrix3D& other) const;
    Matrix3D operator*(const Matrix3D& other) const;
    void print();
};

#endif
