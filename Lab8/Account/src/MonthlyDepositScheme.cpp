#include "MonthlyDepositScheme.h"
#include <iostream>
using namespace std;
const int MonthlyDepositScheme::accountPrefix = 300;
int MonthlyDepositScheme::nextAccount = 0;

string MonthlyDepositScheme::nextAccountNo()
{
    string ac_no = to_string(accountPrefix) + to_string(nextAccount);
    return ac_no;
}
