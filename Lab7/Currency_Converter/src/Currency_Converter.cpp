#include "Currency_Converter.h"
#include <iostream>
#include<cmath>

using namespace std;

const double BDT_TO_USD_RATE = 0.0091;
const double BDT_TO_EURO_RATE = 0.0085;

//BDT class
CurrencyBDT::CurrencyBDT() : taka(0), poisha(0) {}

CurrencyBDT::CurrencyBDT(double t, double p) : taka(t), poisha(p) {}

CurrencyBDT::operator CurrencyDollar() {
    double totalCents = (taka * 100 + poisha) * BDT_TO_USD_RATE;
    return CurrencyDollar(totalCents / 100, fmod(totalCents, 100));
}

CurrencyBDT::operator CurrencyEuro() {
    double totalCents = (taka * 100 + poisha) * BDT_TO_EURO_RATE;
    return CurrencyEuro(totalCents / 100, fmod(totalCents, 100));
}

void CurrencyBDT::display() const {
    cout << "BDT: " << taka << " Taka " << poisha << " Poisha" << endl;
}


//Dollar class
CurrencyDollar::CurrencyDollar() : dollars(0), cents(0) {}

CurrencyDollar::CurrencyDollar(double d, double c) : dollars(d), cents(c) {}

void CurrencyDollar::display() const {
    cout << "USD: " << dollars << " Dollars " << cents << " Cents" << endl;
}

//Euro class
CurrencyEuro::CurrencyEuro() : euros(0), cents(0) {}

CurrencyEuro::CurrencyEuro(double e, double c) : euros(e), cents(c) {}

void CurrencyEuro::display() const {
    cout << "Euro: " << euros << " Euros " << cents << " Cents" << endl;
}
