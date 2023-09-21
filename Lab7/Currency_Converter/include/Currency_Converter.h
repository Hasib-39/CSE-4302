#ifndef CURRENCY_CONVERTER_H
#define CURRENCY_CONVERTER_H

class CurrencyDollar;
class CurrencyEuro;

class CurrencyBDT {
private:
    double taka;
    double poisha;

public:
    CurrencyBDT();
    CurrencyBDT(double t, double p);

    operator CurrencyDollar();
    operator CurrencyEuro();

    void display() const;
};

class CurrencyDollar {
private:
    double dollars;
    double cents;

public:
    CurrencyDollar();
    CurrencyDollar(double d, double c);

    void display() const;
};

class CurrencyEuro {
private:
    double euros;
    double cents;

public:
    CurrencyEuro();
    CurrencyEuro(double e, double c);

    void display() const;
};

#endif
