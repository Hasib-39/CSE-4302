#include "Currency_Converter.h"
#include <iostream>
using namespace std;

int main() {
    CurrencyBDT bdt(500, 50);

    CurrencyDollar usd = bdt;
    CurrencyEuro euro = bdt;

    bdt.display();
    usd.display();
    euro.display();

    return 0;
}
