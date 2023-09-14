// RationalNumber.h
#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

class RationalNumber {
private:
    int numerator;
    int denominator;


    void simplify();

public:
    RationalNumber();
    RationalNumber(int num, int den);


    int getNumerator() const;
    int getDenominator() const;

    void setNumerator(int num);
    void setDenominator(int den);

    double toDouble() const; // Convert to a decimal number

    void invert();

    // Overloaded operators
    RationalNumber operator+(const RationalNumber& other) const;
    RationalNumber operator-(const RationalNumber& other) const;
    RationalNumber operator*(const RationalNumber& other) const;
    RationalNumber operator/(const RationalNumber& other) const;
};

#endif // RATIONALNUMBER_H
