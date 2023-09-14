// main.cpp
#include "Rational_Number.h"
#include <iostream>
using namespace std;

int main() {
    // Example usage of the RationalNumber class
    RationalNumber r1(1, 2);
    RationalNumber r2(3, 4);

    // Addition
    RationalNumber resultAdd = r1 + r2;
    cout << "Addition: " << resultAdd.getNumerator() << "/" << resultAdd.getDenominator() << endl;

    // Subtraction
    RationalNumber resultSub = r1 - r2;
    cout << "Subtraction: " << resultSub.getNumerator() << "/" << resultSub.getDenominator() << endl;

    // Multiplication
    RationalNumber resultMul = r1 * r2;
    cout << "Multiplication: " << resultMul.getNumerator() << "/" << resultMul.getDenominator() << endl;

    // Division
    RationalNumber resultDiv = r1 / r2;
    cout << "Division: " << resultDiv.getNumerator() << "/" << resultDiv.getDenominator() << endl;

    // Convert to double
    double decimalValue = r1.toDouble();
    cout << "Decimal Value: " << decimalValue << endl;

    // Invert
    r1.invert();
    cout << "Inverted Fraction: " << r1.getNumerator() << "/" << r1.getDenominator() << endl;

    return 0;
}
