#ifndef MONTHLYDEPOSITSCHEME_H
#define MONTHLYDEPOSITSCHEME_H
#include <iostream>
#include <Account.h>
#pragma once
using namespace std;
class MonthlyDepositScheme : public Account
{
public:

    float GetinterestRate() { return interestRate; }
    void SetinterestRate(float val) { interestRate = val; }
    float GetmonthlyDepositAmount() { return monthlyDepositAmount; }
    void SetmonthlyDepositAmount(float val) { monthlyDepositAmount = val; }
    static int GetnextAccount() { return nextAccount; }
    string nextAccountNo();

protected:
    static int nextAccount;
    const static int accountPrefix;

private:
    float interestRate;
    float monthlyDepositAmount;
};

#endif // MONTHLYDEPOSITSCHEME_H
