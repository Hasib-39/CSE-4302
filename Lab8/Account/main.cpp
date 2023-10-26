#include <iostream>
#pragma once
#include "Account.h"
#include "CurrentAccount.h"
#include "LoanAccount.h"
#include "SavingsAccount.h"
#include "LoanAccount.h"
#include "MonthlyDepositScheme.h"
#include "TwoYearMDS.h"

using namespace std;

int main()
{
    CurrentAccount c1("Hasib", 1000);
    LoanAccount l1("Nuh", 20000, 4, 400);
    SavingsAccount s1("Shakib", 10000, 3, 600);
    TwoYearMDS t1("Muhaimin", 50000, 5, 500, 6);

    cout << t1.GetaccountNo() << endl;
    cout << s1.GetaccountNo() << endl;
    cout << l1.GetaccountNo() << endl;
    cout << c1.GetaccountNo() << endl;
}
