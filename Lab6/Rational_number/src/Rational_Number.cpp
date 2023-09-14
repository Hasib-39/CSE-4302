// RationalNumber.cpp
#include "Rational_Number.h"
#include <iostream>
using namespace std;

RationalNumber::RationalNumber() : numerator(0), denominator(1) {}

RationalNumber::RationalNumber(int num, int den) {
    if (den == 0) {
        cout << "Error: Denominator cannot be zero." << endl;
        numerator = 0;
        denominator = 1;
    } else {
        numerator = num;
        denominator = den;
        simplify();
    }
}

int RationalNumber::getNumerator() const {
    return numerator;
}

int RationalNumber::getDenominator() const {
    return denominator;
}

void RationalNumber::setNumerator(int num) {
    numerator = num;
    simplify();
}

void RationalNumber::setDenominator(int den) {
    if (den != 0) {
        denominator = den;
        simplify();
    } else {
        cout << "Error: Denominator cannot be zero." << endl;
    }
}

double RationalNumber::toDouble() const {
    return static_cast<double>(numerator) / denominator;
}

void RationalNumber::invert() {
    if (numerator != 0) {
        swap(numerator, denominator);
    } else {
        cout << "Error: Cannot invert, numerator is zero." << endl;
    }
}

// Helper function to simplify the fraction using the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void RationalNumber::simplify() {
    int commonFactor = gcd(numerator, denominator);
    numerator /= commonFactor;
    denominator /= commonFactor;

    // Ensure the denominator is positive
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

RationalNumber RationalNumber::operator+(const RationalNumber& other) const {
    int num = numerator * other.denominator + other.numerator * denominator;
    int den = denominator * other.denominator;
    return RationalNumber(num, den);
}

RationalNumber RationalNumber::operator-(const RationalNumber& other) const {
    int num = numerator * other.denominator - other.numerator * denominator;
    int den = denominator * other.denominator;
    return RationalNumber(num, den);
}

RationalNumber RationalNumber::operator*(const RationalNumber& other) const {
    int num = numerator * other.numerator;
    int den = denominator * other.denominator;
    return RationalNumber(num, den);
}

RationalNumber RationalNumber::operator/(const RationalNumber& other) const {
    if (other.numerator == 0) {
        cout << "Error: Division by zero." << endl;
        return RationalNumber();
    }

    int num = numerator * other.denominator;
    int den = denominator * other.numerator;
    return RationalNumber(num, den);
}
