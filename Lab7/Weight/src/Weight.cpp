#include "Weight.h"
#include <iostream>
using namespace std;
Weight::Weight() : pound(0), ounce(0.0) {}

Weight::Weight(double kg) {
    double totalPound = kg * kgToPound;
    pound = static_cast<int>(totalPound);
    ounce = (totalPound - pound) * 16.0;
}

Weight::Weight(int pound, double ounce) : pound(pound), ounce(ounce) {}

void Weight::showWeight() const {
    cout << "Pound-Ounce: " << pound << "-" << ounce << " oz";
}

Weight::operator double() const {
    double val = static_cast<double>(pound) + (ounce / 16.0);
    return  val / kgToPound;
}
